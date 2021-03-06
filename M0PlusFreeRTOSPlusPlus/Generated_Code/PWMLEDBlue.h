/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PWMLEDBlue.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : PWM
**     Version     : Component 02.240, Driver 01.01, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-04-05, 16:00, # CodeGen: 8
**     Abstract    :
**         This component implements a pulse-width modulation generator
**         that generates signal with variable duty and fixed cycle. 
**     Settings    :
**         Used output pin             : 
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       74            |  ADC0_SE5b/PTD1/SPI0_SCK/TPM0_CH1
**             ----------------------------------------------------
**
**         Timer name                  : TPM0_CNT [16-bit]
**         Counter                     : TPM0_CNT  [0x40038004]
**         Mode register               : TPM0_SC   [0x40038000]
**         Run register                : TPM0_SC   [0x40038000]
**         Prescaler                   : TPM0_SC   [0x40038000]
**         Compare register            : TPM0_C1V  [0x40038018]
**         Flip-flop register          : TPM0_C1SC [0x40038014]
**
**         User handling procedure     : not specified
**
**         Port name                   : PTD
**         Bit number (in port)        : 1
**         Bit mask of the port        : 0x0002
**         Port data register          : GPIOD_PDOR [0x400FF0C0]
**         Port control register       : GPIOD_PDDR [0x400FF0D4]
**
**         Initialization:
**              Output level           : low
**              Timer                  : Enabled
**              Event                  : Enabled
**         High speed mode
**             Prescaler               : divide-by-[driven by slave component]
**             Clock                   : [driven by slave component] Hz
**           Initial value of            period     pulse width
**             Xtal ticks              : ---        ---
**             microseconds            : ---        ---
**             milliseconds            : 6          0
**             seconds                 : ---        ---
**             seconds (real)          : 6.25       0
**
**     Contents    :
**         SetRatio8  - byte PWMLEDBlue_SetRatio8(byte Ratio);
**         SetRatio16 - byte PWMLEDBlue_SetRatio16(word Ratio);
**         SetDutyUS  - byte PWMLEDBlue_SetDutyUS(word Time);
**         SetDutyMS  - byte PWMLEDBlue_SetDutyMS(word Time);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file PWMLEDBlue.h
** @version 01.01
** @brief
**         This component implements a pulse-width modulation generator
**         that generates signal with variable duty and fixed cycle. 
*/         
/*!
**  @addtogroup PWMLEDBlue_module PWMLEDBlue module documentation
**  @{
*/         

#ifndef __PWMLEDBlue_H
#define __PWMLEDBlue_H

/* MODULE PWMLEDBlue. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "PwmLdd1.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 


#define PWMLEDBlue_PERIOD_VALUE PwmLdd1_PERIOD_VALUE /* Initial period value in ticks of the timer. It is available only if the bean is enabled in high speed mode. */
#define PWMLEDBlue_PERIOD_VALUE_HIGH PwmLdd1_PERIOD_VALUE_0 /* Period value in ticks of the timer in high speed mode. It is available only if the bean is enabled in high speed mode. */


/*
** ===================================================================
**     Method      :  PWMLEDBlue_SetRatio8 (component PWM)
**     Description :
**         This method sets a new duty-cycle ratio. Ratio is expressed
**         as an 8-bit unsigned integer number. 0 - FF value is
**         proportional to ratio 0 - 100%. The method is available
**         only if it is not selected list of predefined values in
**         <Starting pulse width> property. 
**         Note: Calculated duty depends on the timer capabilities and
**         on the selected period.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Ratio           - Ratio to set. 0 - 255 value is
**                           proportional to ratio 0 - 100%
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/
#define PWMLEDBlue_SetRatio8(Ratio) (PwmLdd1_SetRatio8(PwmLdd1_DeviceData, Ratio))

/*
** ===================================================================
**     Method      :  PWMLEDBlue_SetRatio16 (component PWM)
**     Description :
**         This method sets a new duty-cycle ratio. Ratio is expressed
**         as a 16-bit unsigned integer number. 0 - FFFF value is
**         proportional to ratio 0 - 100%. The method is available
**         only if it is not selected list of predefined values in
**         <Starting pulse width> property. 
**         Note: Calculated duty depends on the timer possibilities and
**         on the selected period.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Ratio           - Ratio to set. 0 - 65535 value is
**                           proportional to ratio 0 - 100%
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/
#define PWMLEDBlue_SetRatio16(Ratio) (PwmLdd1_SetRatio16(PwmLdd1_DeviceData, Ratio))

/*
** ===================================================================
**     Method      :  PWMLEDBlue_SetDutyUS (component PWM)
**     Description :
**         This method sets the new duty value of the output signal.
**         The duty is expressed in microseconds as a 16-bit
**         unsigned integer number.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Time            - Duty to set [in microseconds]
**                      (0 to --- us in high speed mode)
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
#define PWMLEDBlue_SetDutyUS(Time) (PwmLdd1_SetDutyUS(PwmLdd1_DeviceData, Time))

/*
** ===================================================================
**     Method      :  PWMLEDBlue_SetDutyMS (component PWM)
**     Description :
**         This method sets the new duty value of the output signal.
**         The duty is expressed in milliseconds as a 16-bit
**         unsigned integer number.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Time            - Duty to set [in milliseconds]
**                      (0 to 6 ms in high speed mode)
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
#define PWMLEDBlue_SetDutyMS(Time) (PwmLdd1_SetDutyMS(PwmLdd1_DeviceData, Time))

/* END PWMLEDBlue. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __PWMLEDBlue_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
