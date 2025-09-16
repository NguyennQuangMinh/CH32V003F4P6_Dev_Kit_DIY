
#include "debug.h"
#include "user.h"

#define EEPROM_ADDRESS 0XAE  // 0X57 7 bit

#define Address_8bit  0
#define Address_16bit  1

/* EERPOM DATA ADDRESS Length Selection */
#define Address_Lenth   Address_8bit
//#define Address_Lenth   Address_16bit

#define EEPROM_ADDR 0XAE //0x57


// PA10 = SCL, PA11 = SDA
void IIC_Init(u32 bound)
{
    GPIO_InitTypeDef GPIO_InitStructure={0};
    I2C_InitTypeDef I2C_InitTSturcture={0};

    RCC_APB2PeriphClockCmd( RCC_APB2Periph_GPIOA, ENABLE );
    RCC_APB1PeriphClockCmd( RCC_APB1Periph_I2C1, ENABLE );

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_OD;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init( GPIOA, &GPIO_InitStructure );

    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_OD;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init( GPIOA, &GPIO_InitStructure );

    I2C_InitTSturcture.I2C_ClockSpeed = bound;
    I2C_InitTSturcture.I2C_Mode = I2C_Mode_I2C;
    I2C_InitTSturcture.I2C_DutyCycle = I2C_DutyCycle_2;
    //I2C_InitTSturcture.I2C_OwnAddress1 = address;
    I2C_InitTSturcture.I2C_Ack = I2C_Ack_Enable;
    I2C_InitTSturcture.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;
    I2C_Init( I2C1, &I2C_InitTSturcture );

    I2C_Cmd( I2C1, ENABLE );

    I2C_AcknowledgeConfig( I2C1, ENABLE );
}

void vReadEeprom(unsigned char* aucBuffer, unsigned uAddress, unsigned uLength)
{
  /* Dummy write to set start address                     */
  while (I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY) != RESET);
  I2C_AcknowledgeConfig(I2C1, ENABLE);
  I2C_GenerateSTART(I2C1, ENABLE);

  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT));
  I2C_Send7bitAddress(I2C1, EEPROM_ADDR, I2C_Direction_Transmitter);

  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));

  I2C_SendData(I2C1, uAddress >> 16);
  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED));
  I2C_SendData(I2C1, uAddress);
  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED));

  /* Read consecutive bytes                               */
  I2C_GenerateSTART(I2C1, ENABLE);

  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT));
  I2C_Send7bitAddress(I2C1, EEPROM_ADDR, I2C_Direction_Receiver);

  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED));
  while (uLength-- > 1)
  {
    I2C_AcknowledgeConfig(I2C1, ENABLE);
    while (I2C_GetFlagStatus(I2C1, I2C_FLAG_RXNE) != SET);
    *aucBuffer++ = I2C_ReceiveData(I2C1);
  }
  I2C_AcknowledgeConfig(I2C1, DISABLE);
  while (I2C_GetFlagStatus(I2C1, I2C_FLAG_RXNE) != SET);
  *aucBuffer++ = I2C_ReceiveData(I2C1);

  /* End of transfer                                      */
  I2C_GenerateSTOP(I2C1, ENABLE);
}

void vWriteEeprom(const unsigned char* aucBuffer, unsigned uAddress, unsigned uLength)
{
  /* Set start address                                    */
  while (I2C_GetFlagStatus(I2C1, I2C_FLAG_BUSY) != RESET);
  I2C_GenerateSTART(I2C1, ENABLE);

  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_MODE_SELECT));
  I2C_Send7bitAddress(I2C1, EEPROM_ADDR, I2C_Direction_Transmitter);

  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));

  I2C_SendData(I2C1, uAddress >> 16);
  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED));
  I2C_SendData(I2C1, uAddress);
  while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED));

  /* Write data                                           */
  while (uLength-- > 0)
  {
    I2C_SendData(I2C1, *aucBuffer++);
    while (!I2C_CheckEvent(I2C1, I2C_EVENT_MASTER_BYTE_TRANSMITTED));
  }

  /* End of transfer                                      */
  I2C_GenerateSTOP(I2C1, ENABLE);
}

void SaveStructToEEPROM(User_Config myConfig ) {
  vWriteEeprom((const unsigned char*)&myConfig, 0x00, sizeof(myConfig));
}

void LoadStructFromEEPROM() {
  User_Config temp;
  vReadEeprom((u8*)&temp, 0x00, sizeof(temp));
  printf("m:%d h:%d s:%d\n",temp.h,temp.m,temp.s);
}



int e_rom_test(void)
{
    u8 data[32];
    printf("Start Write 24Cxx....\r\n");
    //u8 dat="hello tran thang";

   // vWriteEeprom("hello",256,6);
   // printf("24Cxx Write Sucess!\r\n");

    //Delay_Ms(500);
    printf("Start Read 24Cxx....\r\n");
    vReadEeprom(data,10,20); //(unsigned char* aucBuffer, unsigned uAddress, unsigned uLength)
    printf("The Data Readed Is: \r\n");
    printf("%s\r\n", data);

}
