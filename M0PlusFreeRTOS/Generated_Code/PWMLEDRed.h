/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PWMLEDRed.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : PWM
**     Version     : Component 02.240, Driver 01.01, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-03-08, 19:32, # CodeGen: 86
**     Abstract    :
**         This component implements a pulse-width modulation generator
**         that generates signal with variable duty and fixed cycle. 
**     Settings    :
**         Used output pin             : 
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       53            |  TSI0_CH11/PTB18/TPM2_CH0
**             ----------------------------------------------------
**
**         Timer name                  : TPM2_CNT [16-bit]
**         Counter                     : TPM2_CNT  [0x4003A004]
**         Mode register               : TPM2_SC   [0x4003A000]
**         Run register                : TPM2_SC   [0x4003A000]
**         Prescaler                   : TPM2_SC   [0x4003A000]
**         Compare register            : TPM2_C0V  [0x4003A010]
**         Flip-flop register          : TPM2_C0SC [0x4003A00C]
**
**         User handling procedure     : not specified
**
**         Port name                   : PTB
**         Bit number (in port)        : 18
**         Bit mask of the port        : 0x00040000
**         Port data register          : GPIOB_PDOR [0x400FF040]
**         Port control register       : GPIOB_PDDR [0x400FF054]
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
**         Enable     - byte PWMLEDRed_Enable(void);
**         SetRatio8  - byte PWMLEDRed_SetRatio8(byte Ratio);
**         SetRatio16 - byte PWMLEDRed_SetRatio16(word Ratio);
**         SetDutyUS  - byte PWMLEDRed_SetDutyUS(word Time);
**         SetDutyMS  - byte PWMLEDRed_SetDutyMS(word Time);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file PWMLEDRed.h
** @version 01.01
** @brief
**         This component implements a pulse-width modulation generator
**         that generates signal with variable duty and fixed cycle. 
*/         
/*!
**  @addtogroup PWMLEDRed_module PWMLEDRed module documentation
**  @{
*/         

#ifndef __PWMLEDRed_H
#define __PWMLEDRed_H

/* MODULE PWMLEDRed. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "PwmLdd3.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 


#define PWMLEDRed_PERIOD_VALUE PwmLdd3_PERIOD_VALUE /* Initial period value in ticks of the timer. It is available only if the bean is enabled in high speed mode. */
#define PWMLEDRed_PERIOD_VALUE_HIGH PwmLdd3_PERIOD_VALUE_0 /* Period value in ticks of the timer in high speed mode. It is available only if the bean is enabled in high speed mode. */


/*
** ===================================================================
**     Method      :  PWMLEDRed_Enable (component PWM)
**     Description :
**         This method enables the component - it starts the signal
**         generation. Events may be generated (<DisableEvent>
**         /<EnableEvent>).
**     Parameters  : None
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/
#define PWMLEDRed_Enable() (PwmLdd3_Enable(PwmLdd3_DeviceData))

/*
** ===================================================================
**     Method      :  PWMLEDRed_SetRatio8 (component PWM)
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
#define PWMLEDRed_SetRatio8(Ratio) (PwmLdd3_SetRatio8(PwmLdd3_DeviceData, Ratio))

/*
** ===================================================================
**     Method      :  PWMLEDRed_SetRatio16 (component PWM)
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
#define PWMLEDRed_SetRatio16(Ratio) (PwmLdd3_SetRatio16(PwmLdd3_DeviceData, Ratio))

/*
** ===================================================================
**     Method      :  PWMLEDRed_SetDutyUS (component PWM)
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
#define PWMLEDRed_SetDutyUS(Time) (PwmLdd3_SetDutyUS(PwmLdd3_DeviceData, Time))

/*
** ===================================================================
**     Method      :  PWMLEDRed_SetDutyMS (component PWM)
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
#define PWMLEDRed_SetDutyMS(Time) (PwmLdd3_SetDutyMS(PwmLdd3_DeviceData, Time))

/* END PWMLEDRed. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __PWMLEDRed_H */
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
