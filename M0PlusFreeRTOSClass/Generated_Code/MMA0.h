/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : MMA0.h
**     CDE edition : Standard
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : MMA8451Q
**     Version     : Component 01.028, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-05-15, 17:38, # CodeGen: 174
**     Abstract    :
**         Implements a Driver for the MMA8451 accelerometer from Freescale.
**     Settings    :
**          Component Name                                 : MMA0
**          Slave Address                                  : 1D
**          I2C Bus                                        : GI2C0
**          Constant Offsets                               : Enabled
**            X offset                                     : 0
**            Y offset                                     : 0
**            Z offset                                     : 0
**          Shell                                          : Disabled
**     Contents    :
**         Enable         - byte MMA0_Enable(void);
**         Disable        - byte MMA0_Disable(void);
**         isEnabled      - byte MMA0_isEnabled(bool *isEnabled);
**         GetX           - int16_t MMA0_GetX(void);
**         GetY           - int16_t MMA0_GetY(void);
**         GetZ           - int16_t MMA0_GetZ(void);
**         GetRaw8XYZ     - uint8_t MMA0_GetRaw8XYZ(void* *xyz);
**         CalibrateX1g   - void MMA0_CalibrateX1g(void);
**         CalibrateY1g   - void MMA0_CalibrateY1g(void);
**         CalibrateZ1g   - void MMA0_CalibrateZ1g(void);
**         GetXmg         - int16_t MMA0_GetXmg(void);
**         GetYmg         - int16_t MMA0_GetYmg(void);
**         GetZmg         - int16_t MMA0_GetZmg(void);
**         MeasureGetRawX - word MMA0_MeasureGetRawX(void);
**         MeasureGetRawY - word MMA0_MeasureGetRawY(void);
**         MeasureGetRawZ - word MMA0_MeasureGetRawZ(void);
**         GetXOffset     - int16_t MMA0_GetXOffset(void);
**         GetYOffset     - int16_t MMA0_GetYOffset(void);
**         GetZOffset     - int16_t MMA0_GetZOffset(void);
**         GetX1gValue    - int16_t MMA0_GetX1gValue(void);
**         GetY1gValue    - int16_t MMA0_GetY1gValue(void);
**         GetZ1gValue    - int16_t MMA0_GetZ1gValue(void);
**         SetFastMode    - byte MMA0_SetFastMode(bool on);
**         Init           - uint8_t MMA0_Init(void);
**         Deinit         - uint8_t MMA0_Deinit(void);
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
** @file MMA0.h
** @version 01.00
** @brief
**         Implements a Driver for the MMA8451 accelerometer from Freescale.
*/         
/*!
**  @addtogroup MMA0_module MMA0 module documentation
**  @{
*/         

#ifndef __MMA0_H
#define __MMA0_H

/* MODULE MMA0. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited components */
#include "GI2C0.h"

#include "Cpu.h"


#define MMA0_PARSE_COMMAND_ENABLED  0 /* set to 1 if method ParseCommand() is present, 0 otherwise */

uint8_t MMA0_GetRaw8XYZ(uint8_t *xyz);
/*
** ===================================================================
**     Method      :  MMA0_GetRaw8XYZ (component MMA8451Q)
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

uint8_t MMA0_Deinit(void);
/*
** ===================================================================
**     Method      :  MMA0_Deinit (component MMA8451Q)
**     Description :
**         Counterpart to Init() method.
**     Parameters  : None
**     Returns     :
**         ---             - Error code, ERR_OK if everything is ok.
** ===================================================================
*/

uint8_t MMA0_Init(void);
/*
** ===================================================================
**     Method      :  MMA0_Init (component MMA8451Q)
**     Description :
**         Initializes the device driver
**     Parameters  : None
**     Returns     :
**         ---             - Error code, ERR_OK if everything is ok.
** ===================================================================
*/

void MMA0_CalibrateX1g(void);
/*
** ===================================================================
**     Method      :  MMA0_CalibrateX1g (component MMA8451Q)
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         Y and Z sensors have 0 g, and the X sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void MMA0_CalibrateY1g(void);
/*
** ===================================================================
**     Method      :  MMA0_CalibrateY1g (component MMA8451Q)
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         Y and Z sensors have 0 g, and the X sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void MMA0_CalibrateZ1g(void);
/*
** ===================================================================
**     Method      :  MMA0_CalibrateZ1g (component MMA8451Q)
**     Description :
**         Performs a calibration of the sensor. It is assumed that the
**         X and Y sensors have 0 g, and the X sensor has 1 g.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

int16_t MMA0_GetXmg(void);
/*
** ===================================================================
**     Method      :  MMA0_GetXmg (component MMA8451Q)
**     Description :
**         Returns the X value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

int16_t MMA0_GetYmg(void);
/*
** ===================================================================
**     Method      :  MMA0_GetYmg (component MMA8451Q)
**     Description :
**         Returns the Y value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

int16_t MMA0_GetZmg(void);
/*
** ===================================================================
**     Method      :  MMA0_GetZmg (component MMA8451Q)
**     Description :
**         Returns the Z value in mg
**     Parameters  : None
**     Returns     :
**         ---             - The g value in 1/1000g units
** ===================================================================
*/

word MMA0_MeasureGetRawX(void);
/*
** ===================================================================
**     Method      :  MMA0_MeasureGetRawX (component MMA8451Q)
**     Description :
**         Performs a measurement on X channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - X sensor value
** ===================================================================
*/

word MMA0_MeasureGetRawY(void);
/*
** ===================================================================
**     Method      :  MMA0_MeasureGetRawY (component MMA8451Q)
**     Description :
**         Performs a measurement on Y channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - Y sensor value
** ===================================================================
*/

word MMA0_MeasureGetRawZ(void);
/*
** ===================================================================
**     Method      :  MMA0_MeasureGetRawZ (component MMA8451Q)
**     Description :
**         Performs a measurement on Z channel and returns the raw
**         value.
**     Parameters  : None
**     Returns     :
**         ---             - Z sensor value
** ===================================================================
*/

int16_t MMA0_GetXOffset(void);
/*
** ===================================================================
**     Method      :  MMA0_GetXOffset (component MMA8451Q)
**     Description :
**         Returns the offset applied to the X value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t MMA0_GetYOffset(void);
/*
** ===================================================================
**     Method      :  MMA0_GetYOffset (component MMA8451Q)
**     Description :
**         Returns the offset applied to the Y value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t MMA0_GetZOffset(void);
/*
** ===================================================================
**     Method      :  MMA0_GetZOffset (component MMA8451Q)
**     Description :
**         Returns the offset applied to the Z value.
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t MMA0_GetX1gValue(void);
/*
** ===================================================================
**     Method      :  MMA0_GetX1gValue (component MMA8451Q)
**     Description :
**         Returns the value for 1g for channel  X.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for X
** ===================================================================
*/

int16_t MMA0_GetY1gValue(void);
/*
** ===================================================================
**     Method      :  MMA0_GetY1gValue (component MMA8451Q)
**     Description :
**         Returns the value for 1g for channel  Y.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for Y
** ===================================================================
*/

int16_t MMA0_GetZ1gValue(void);
/*
** ===================================================================
**     Method      :  MMA0_GetZ1gValue (component MMA8451Q)
**     Description :
**         Returns the value for 1g for channel  Z.
**     Parameters  : None
**     Returns     :
**         ---             - 1g value for Z
** ===================================================================
*/

int16_t MMA0_GetX(void);
/*
** ===================================================================
**     Method      :  MMA0_GetX (component MMA8451Q)
**     Description :
**         Retrieves the value for the X axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured X value
** ===================================================================
*/

int16_t MMA0_GetY(void);
/*
** ===================================================================
**     Method      :  MMA0_GetY (component MMA8451Q)
**     Description :
**         Retrieves the value for the Y axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured Y value
** ===================================================================
*/

int16_t MMA0_GetZ(void);
/*
** ===================================================================
**     Method      :  MMA0_GetZ (component MMA8451Q)
**     Description :
**         Retrieves the value for the Z axis. The value is adjusted
**         with the zero calibration value (0 for 0 g, negative for
**         negative acceleration and positive for positive acceleration).
**     Parameters  : None
**     Returns     :
**         ---             - Measured Z value
** ===================================================================
*/

byte MMA0_SetFastMode(bool on);
/*
** ===================================================================
**     Method      :  MMA0_SetFastMode (component MMA8451Q)
**     Description :
**         Turns the F_READ (Fast Read Mode) on or off
**     Parameters  :
**         NAME            - DESCRIPTION
**         on              - if to turn the F_READ mode on or off
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte MMA0_Enable(void);
/*
** ===================================================================
**     Method      :  MMA0_Enable (component MMA8451Q)
**     Description :
**         Enables the device with setting the ACTIVE bit in the CTRL
**         register 1
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte MMA0_Disable(void);
/*
** ===================================================================
**     Method      :  MMA0_Disable (component MMA8451Q)
**     Description :
**         Disables the device with clearing the ACTIVE bit in the CTRL
**         register 1
**     Parameters  : None
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

byte MMA0_isEnabled(bool *isEnabled);
/*
** ===================================================================
**     Method      :  MMA0_isEnabled (component MMA8451Q)
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

/* END MMA0. */

#endif
/* ifndef __MMA0_H */
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
