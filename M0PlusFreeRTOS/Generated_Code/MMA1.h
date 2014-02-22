/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : MMA1.h
**     CDE edition : Standard
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : MMA8451Q
**     Version     : Component 01.028, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-02-21, 22:12, # CodeGen: 53
**     Abstract    :
**         Implements a Driver for the MMA8451 accelerometer from Freescale.
**     Settings    :
**          Component Name                                 : MMA1
**          Slave Address                                  : 1D
**          I2C Bus                                        : GI2C1
**          Constant Offsets                               : Enabled
**            X offset                                     : 0
**            Y offset                                     : 0
**            Z offset                                     : 0
**          Shell                                          : Disabled
**     Contents    :
**         Enable         - byte MMA1_Enable(void);
**         Disable        - byte MMA1_Disable(void);
**         isEnabled      - byte MMA1_isEnabled(bool *isEnabled);
**         GetX           - int16_t MMA1_GetX(void);
**         GetY           - int16_t MMA1_GetY(void);
**         GetZ           - int16_t MMA1_GetZ(void);
**         GetRaw8XYZ     - uint8_t MMA1_GetRaw8XYZ(void* *xyz);
**         CalibrateX1g   - void MMA1_CalibrateX1g(void);
**         CalibrateY1g   - void MMA1_CalibrateY1g(void);
**         CalibrateZ1g   - void MMA1_CalibrateZ1g(void);
**         GetXmg         - int16_t MMA1_GetXmg(void);
**         GetYmg         - int16_t MMA1_GetYmg(void);
**         GetZmg         - int16_t MMA1_GetZmg(void);
**         MeasureGetRawX - word MMA1_MeasureGetRawX(void);
**         MeasureGetRawY - word MMA1_MeasureGetRawY(void);
**         MeasureGetRawZ - word MMA1_MeasureGetRawZ(void);
**         GetXOffset     - int16_t MMA1_GetXOffset(void);
**         GetYOffset     - int16_t MMA1_GetYOffset(void);
**         GetZOffset     - int16_t MMA1_GetZOffset(void);
**         GetX1gValue    - int16_t MMA1_GetX1gValue(void);
**         GetY1gValue    - int16_t MMA1_GetY1gValue(void);
**         GetZ1gValue    - int16_t MMA1_GetZ1gValue(void);
**         SetFastMode    - byte MMA1_SetFastMode(bool on);
**         Init           - uint8_t MMA1_Init(void);
**         Deinit         - uint8_t MMA1_Deinit(void);
**
**     License : Open Source (LGPL)
**     Copyright : (c) Copyright Erich Styger, 2013, all rights reserved.
**     http://www.mcuoneclipse.com
**     This an open source software in the form of a Processor Expert Embedded Component.
**     This is a free software and is opened for education, research and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file MMA1.h
** @version 01.00
** @brief
**         Implements a Driver for the MMA8451 accelerometer from Freescale.
*/         
/*!
**  @addtogroup MMA1_module MMA1 module documentation
**  @{
*/         

#ifndef __MMA1_H
#define __MMA1_H

/* MODULE MMA1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited components */
#include "GI2C1.h"

#include "Cpu.h"


#define MMA1_PARSE_COMMAND_ENABLED  0 /* set to 1 if method ParseCommand() is present, 0 otherwise */

uint8_t MMA1_GetRaw8XYZ(uint8_t *xyz);
/*
** ===================================================================
**     Method      :  MMA1_GetRaw8XYZ (component MMA8451Q)
**     Description :
**         Returns in an array the x, y and z accelerometer as 8bit
**         values.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * xyz             - Pointer to an array of three unsigned 8bit
**                           values which are used to return the
**                           accelerometer values.
**     Returns     :
**         ---             - Error code, ERR_OK for no error.
** ===================================================================
*/

uint8_t MMA1_Deinit(void);
/*
** ===================================================================
**     Method      :  MMA1_Deinit (component MMA8451Q)
**     Description :
**         Counterpart to Init() method.
**     Parameters  : None
**     Returns     :
**         ---             - Error code, ERR_OK if everything is ok.
** ===================================================================
*/

uint8_t MMA1_Init(void);
/*
** ===================================================================
**     Method      :  MMA1_Init (component MMA8451Q)
**     Description :
**         Initializes the device driver
**     Parameters  : None
**     Returns     :
**         ---             - Error code, ERR_OK if everything is ok.
** ===================================================================
*/

void MMA1_CalibrateX1g(void);
/*
** ===================================================================
**     Method      :  MMA1_CalibrateX1g (component MMA8451Q)
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         Y and Z sensors have 0 g, and the X sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void MMA1_CalibrateY1g(void);
/*
** ===================================================================
**     Method      :  MMA1_CalibrateY1g (component MMA8451Q)
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         Y and Z sensors have 0 g, and the X sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void MMA1_CalibrateZ1g(void);
/*
** ===================================================================
**     Method      :  MMA1_CalibrateZ1g (component MMA8451Q)
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         X and Y sensors have 0 g, and the X sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

int16_t MMA1_GetXmg(void);
/*
** ===================================================================
**     Method      :  MMA1_GetXmg (component MMA8451Q)
**     Description :
**         Returns the X value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

int16_t MMA1_GetYmg(void);
/*
** ===================================================================
**     Method      :  MMA1_GetYmg (component MMA8451Q)
**     Description :
**         Returns the Y value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

int16_t MMA1_GetZmg(void);
/*
** ===================================================================
**     Method      :  MMA1_GetZmg (component MMA8451Q)
**     Description :
**         Returns the Z value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

word MMA1_MeasureGetRawX(void);
/*
** ===================================================================
**     Method      :  MMA1_MeasureGetRawX (component MMA8451Q)
**     Description :
**         Performs a measurement on X channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - X sensor value
** ===================================================================
*/

word MMA1_MeasureGetRawY(void);
/*
** ===================================================================
**     Method      :  MMA1_MeasureGetRawY (component MMA8451Q)
**     Description :
**         Performs a measurement on Y channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - Y sensor value
** ===================================================================
*/

word MMA1_MeasureGetRawZ(void);
/*
** ===================================================================
**     Method      :  MMA1_MeasureGetRawZ (component MMA8451Q)
**     Description :
**         Performs a measurement on Z channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - Z sensor value
** ===================================================================
*/

int16_t MMA1_GetXOffset(void);
/*
** ===================================================================
**     Method      :  MMA1_GetXOffset (component MMA8451Q)
**     Description :
**         Returns the offset applied to the X value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t MMA1_GetYOffset(void);
/*
** ===================================================================
**     Method      :  MMA1_GetYOffset (component MMA8451Q)
**     Description :
**         Returns the offset applied to the Y value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t MMA1_GetZOffset(void);
/*
** ===================================================================
**     Method      :  MMA1_GetZOffset (component MMA8451Q)
**     Description :
**         Returns the offset applied to the Z value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t MMA1_GetX1gValue(void);
/*
** ===================================================================
**     Method      :  MMA1_GetX1gValue (component MMA8451Q)
**     Description :
**         Returns the value for 1g for channel  X.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for X
** ===================================================================
*/

int16_t MMA1_GetY1gValue(void);
/*
** ===================================================================
**     Method      :  MMA1_GetY1gValue (component MMA8451Q)
**     Description :
**         Returns the value for 1g for channel  Y.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for Y
** ===================================================================
*/

int16_t MMA1_GetZ1gValue(void);
/*
** ===================================================================
**     Method      :  MMA1_GetZ1gValue (component MMA8451Q)
**     Description :
**         Returns the value for 1g for channel  Z.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for Z
** ===================================================================
*/

int16_t MMA1_GetX(void);
/*
** ===================================================================
**     Method      :  MMA1_GetX (component MMA8451Q)
**     Description :
**         Retrieves the value for the X axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured X value
** ===================================================================
*/

int16_t MMA1_GetY(void);
/*
** ===================================================================
**     Method      :  MMA1_GetY (component MMA8451Q)
**     Description :
**         Retrieves the value for the Y axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured Y value
** ===================================================================
*/

int16_t MMA1_GetZ(void);
/*
** ===================================================================
**     Method      :  MMA1_GetZ (component MMA8451Q)
**     Description :
**         Retrieves the value for the Z axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured Z value
** ===================================================================
*/

byte MMA1_SetFastMode(bool on);
/*
** ===================================================================
**     Method      :  MMA1_SetFastMode (component MMA8451Q)
**     Description :
**         Turns the F_READ (Fast Read Mode) on or off
**     Parameters  :
**         NAME            - DESCRIPTION
**         on              - if to turn the F_READ mode on or off
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte MMA1_Enable(void);
/*
** ===================================================================
**     Method      :  MMA1_Enable (component MMA8451Q)
**     Description :
**         Enables the device with setting the ACTIVE bit in the CTRL
**         register 1
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte MMA1_Disable(void);
/*
** ===================================================================
**     Method      :  MMA1_Disable (component MMA8451Q)
**     Description :
**         Disables the device with clearing the ACTIVE bit in the CTRL
**         register 1
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte MMA1_isEnabled(bool *isEnabled);
/*
** ===================================================================
**     Method      :  MMA1_isEnabled (component MMA8451Q)
**     Description :
**         Returns the status of the the ACTIVE bit in the CTRL
**         register 1
**     Parameters  :
**         NAME            - DESCRIPTION
**       * isEnabled       - Pointer to where to store the
**                           result, TRUE if ACTIVE bit is set, FALSE
**                           otherwise
**     Returns     :
**         ---             - error code
** ===================================================================
*/

/* END MMA1. */

#endif
/* ifndef __MMA1_H */
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
