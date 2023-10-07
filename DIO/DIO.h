/*
 * DIO.h
 *
 *  Created on: Oct 7, 2023
 *      Author: Mohammed Ramadan
 */

#ifndef DIO_DIO_H_
#define DIO_DIO_H_

#define STD_LOW    0x00
#define STD_HIGH   0x01

enum
{
    ChannelA0 , ChannelA1 , ChannelA2 , ChannelA3 , ChannelA4 , ChannelA5 , ChannelA6 , ChannelA7 ,
    ChannelB0 , ChannelB1 , ChannelB2 , ChannelB3 , ChannelB4 , ChannelB5 , ChannelB6 , ChannelB7 ,
    ChannelC0 , ChannelC1 , ChannelC2 , ChannelC3 , ChannelC4 , ChannelC5 , ChannelC6 , ChannelC7 ,
    ChannelD0 , ChannelD1 , ChannelD2 , ChannelD3 , ChannelD4 , ChannelD5 , ChannelD6 , ChannelD7 ,
    ChannelE0 , ChannelE1 , ChannelE2 , ChannelE3 , ChannelE4 , ChannelE5 , ChannelE6 , ChannelE7 ,
    ChannelF0 , ChannelF1 , ChannelF2 , ChannelF3 , ChannelF4 , ChannelF5 , ChannelF6 , ChannelF7 ,
};

enum
{
    ChannelA ,
    ChannelB ,
    ChannelC ,
    ChannelD ,
    ChannelE ,
    ChannelF
};
/******************************************************************************/
void PORT_Init                (
                               void
                              );
/******************************************************************************/
void Dio_WriteChannel         (
                                Dio_ChannelType ChannelId ,
                                Dio_LevelType   Level
                              ) ;
/******************************************************************************/
Dio_LevelType Dio_ReadChannel (
                                Dio_ChannelType ChannelId
                              ) ;
/******************************************************************************/
void Dio_WritePort            (
                                Dio_PortType PortId,
                                Dio_PortLevelType Level
                              );
/******************************************************************************/
Dio_PortLevelType Dio_ReadPort(
                               Dio_PortType PortId
                              ) ;
/******************************************************************************/
#endif /* DIO_DIO_H_ */
