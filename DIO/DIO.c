/*
 * DIO.c
 *
 *  Created on: Oct 7, 2023
 *      Author: Mohammed Ramadan
 */
#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "DIO_std_types.h"
#include "DIO_register.h"
#include "DIO.h"
/******************************************************************************/
void PORT_Init                (
                               void
                              )
{
    /*enable APB Bus for PORTF*/
    SET_BIT (SYSCTL->RCGCGPIO , 5) ;
    /*wait till finish*/
    while(0==READ_BIT(SYSCTL->RCGCGPIO ,5));
    /*Unlock PORTA*/
    GPIOF_APB->LOCK = 0x4C4F434B ;
    /*set commit register*/
    SET_BIT (GPIOF_APB->CR , 0) ;
    SET_BIT (GPIOF_APB->CR , 1) ;
    SET_BIT (GPIOF_APB->CR , 2) ;
    SET_BIT (GPIOF_APB->CR , 3) ;
    SET_BIT (GPIOF_APB->CR , 4) ;
    /*digital enable*/
    SET_BIT (GPIOF_APB->DEN , 0) ;
    SET_BIT (GPIOF_APB->DEN , 1) ;
    SET_BIT (GPIOF_APB->DEN , 2) ;
    SET_BIT (GPIOF_APB->DEN , 3) ;
    SET_BIT (GPIOF_APB->DEN , 4) ;
    /*select direction input for pin0 and pin4*/
    CLR_BIT (GPIOF_APB->DIR , 0) ;
    CLR_BIT (GPIOF_APB->DIR , 4) ;
    /*enable internal pull up for pin0 and pin4*/
    SET_BIT (GPIOF_APB->PUR , 0) ;
    SET_BIT (GPIOF_APB->PUR , 4) ;
    /*select direction output for pin1, pin2 and pin3*/
    SET_BIT (GPIOF_APB->DIR , 1) ;
    SET_BIT (GPIOF_APB->DIR , 2) ;
    SET_BIT (GPIOF_APB->DIR , 3) ;
}
/******************************************************************************/
void Dio_WriteChannel         (
                               Dio_ChannelType ChannelId ,
                               Dio_LevelType   Level
                              )
{
    switch (ChannelId)
    {
    case ChannelA0 ... ChannelA7 :
    if (ChannelId != ChannelA0 && ChannelId != ChannelA1)
    {
        if (Level == STD_HIGH)
        {
            SET_BIT (GPIOA_APB->DATA , ChannelId%8) ;
        }
        else if (Level == STD_LOW)
        {
            CLR_BIT (GPIOA_APB->DATA , ChannelId%8) ;
        }
        else
        {
            /*do nothing*/
        }
    }
    break ;
    case ChannelB0 ... ChannelB7 :
    if (Level == STD_HIGH)
    {
        SET_BIT (GPIOB_APB->DATA , ChannelId%8) ;
    }
    else if (Level == STD_LOW)
    {
        CLR_BIT (GPIOB_APB->DATA , ChannelId%8) ;
    }
    else
    {
        /*do nothing*/
    }
    break ;
    case ChannelC0 ... ChannelC7 :
    if (ChannelId > ChannelC3)
    {
        if (Level == STD_HIGH)
        {
            SET_BIT (GPIOC_APB->DATA , ChannelId%8) ;
        }
        else if (Level == STD_LOW)
        {
            CLR_BIT (GPIOC_APB->DATA , ChannelId%8) ;
        }
        else
        {
            /*do nothing*/
        }
    }
    break ;
    case ChannelD0 ... ChannelD7 :
    if (ChannelId != ChannelD4 && ChannelId != ChannelD5)
    {
        if (Level == STD_HIGH)
        {
            SET_BIT (GPIOD_APB->DATA , ChannelId%8) ;
        }
        else if (Level == STD_LOW)
        {
            CLR_BIT (GPIOD_APB->DATA , ChannelId%8) ;
        }
        else
        {
            /*do nothing*/
        }
    }
    break ;
    case ChannelE0 ... ChannelE7 :
    if (ChannelId <= ChannelE5)
    {
        if (Level == STD_HIGH)
        {
            SET_BIT (GPIOE_APB->DATA , ChannelId%8) ;
        }
        else if (Level == STD_LOW)
        {
            CLR_BIT (GPIOE_APB->DATA , ChannelId%8) ;
        }
        else
        {
            /*do nothing*/
        }
    }
    break ;
    case ChannelF0 ... ChannelF7 :
    if (ChannelId <= ChannelF4)
    {
        if (Level == STD_HIGH)
        {
            SET_BIT (GPIOF_APB->DATA , ChannelId%8) ;
        }
        else if (Level == STD_LOW)
        {
            CLR_BIT (GPIOF_APB->DATA , ChannelId%8) ;
        }
        else
        {
            /*do nothing*/
        }
    }
    break ;
    default :
        /*Error case*/
        break ;
    }
}
/******************************************************************************/
Dio_LevelType Dio_ReadChannel (
                               Dio_ChannelType ChannelId
                             )
{
    Dio_LevelType L_u8ReturnedData ;
    switch (ChannelId)
    {
    case ChannelA0 ... ChannelA7 :
    if (ChannelId != ChannelA0 && ChannelId != ChannelA1)
    {
        L_u8ReturnedData = READ_BIT (GPIOA_APB->DATA , ChannelId%8) ;
    }
    break ;
    case ChannelB0 ... ChannelB7 :
        L_u8ReturnedData = READ_BIT (GPIOB_APB->DATA , ChannelId%8) ;
    break ;
    case ChannelC0 ... ChannelC7 :
    if (ChannelId > ChannelC3)
    {
        L_u8ReturnedData = READ_BIT (GPIOC_APB->DATA , ChannelId%8) ;
    }
    break ;
    case ChannelD0 ... ChannelD7 :
    if (ChannelId != ChannelD4 && ChannelId != ChannelD5)
    {
        L_u8ReturnedData = READ_BIT (GPIOD_APB->DATA , ChannelId%8) ;
    }
    break ;
    case ChannelE0 ... ChannelE7 :
    if (ChannelId <= ChannelE5)
    {
        L_u8ReturnedData = READ_BIT (GPIOE_APB->DATA , ChannelId%8) ;
    }
    break ;
    case ChannelF0 ... ChannelF7 :
    if (ChannelId <= ChannelF4)
    {
        L_u8ReturnedData = READ_BIT (GPIOF_APB->DATA , ChannelId%8) ;
    }
    break ;
    default :
        /*Error case*/
        break ;
    }
    return L_u8ReturnedData ;
}
/******************************************************************************/
void Dio_WritePort            (
                                Dio_PortType PortId,
                                Dio_PortLevelType Level
                              )
{
    switch (PortId)
    {
    case ChannelA :
        GPIOA_APB->DATA = Level ;
    break ;
    case ChannelB :
        GPIOB_APB->DATA = Level ;
        break ;
    case ChannelC :
        GPIOC_APB->DATA = Level ;
        break ;
    case ChannelD :
        GPIOD_APB->DATA = Level ;
        break ;
    case ChannelE :
        GPIOE_APB->DATA = Level ;
        break ;
    case ChannelF :
        GPIOF_APB->DATA = Level ;
        break ;
    default :
        /*Error case*/
        break ;
    }
}
/******************************************************************************/
Dio_PortLevelType Dio_ReadPort(
                               Dio_PortType PortId
                              )
{
    Dio_PortLevelType L_u32ReturnedData ;
        switch (PortId)
        {
        case ChannelA :
            L_u32ReturnedData = GPIOA_APB->DATA ;
        break ;
        case ChannelB :
            L_u32ReturnedData = GPIOB_APB->DATA;
        break ;
        case ChannelC :
            L_u32ReturnedData = GPIOC_APB->DATA ;
        break ;
        case ChannelD :
            L_u32ReturnedData = GPIOD_APB->DATA ;
        break ;
        case ChannelE :
            L_u32ReturnedData = GPIOE_APB->DATA ;
        break ;
        case ChannelF :
            L_u32ReturnedData = GPIOF_APB->DATA ;
        break ;
        default :
            /*Error case*/
            break ;
        }
        return L_u32ReturnedData ;
}
/******************************************************************************/
