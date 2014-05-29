/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : MMA0.c
**     CDE edition : Standard
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : MMA8451Q
**     Version     : Component 01.028, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-05-28, 14:07, # CodeGen: 200
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
** @file MMA0.c
** @version 01.00
** @brief
**         Implements a Driver for the MMA8451 accelerometer from Freescale.
*/         
/*!
**  @addtogroup MMA0_module MMA0 module documentation
**  @{
*/         

/* MODULE MMA0. */

#include "MMA0.h"

#define MMA0_CPU_IS_LITTLE_ENDIAN 1 /* Cpu is little endian */

/* External 3-axis accelerometer control register addresses */
#define MMA0_CTRL_REG_1 0x2A
/* MMA8451 3-axis accelerometer control register bit masks */
#define MMA0_ACTIVE_BIT_MASK 0x01
#define MMA0_F_READ_BIT_MASK 0x02

/* External 3-axis accelerometer data register addresses */
#define MMA0_OUT_X_MSB 0x01
#define MMA0_OUT_X_LSB 0x02
#define MMA0_OUT_Y_MSB 0x03
#define MMA0_OUT_Y_LSB 0x04
#define MMA0_OUT_Z_MSB 0x05
#define MMA0_OUT_Z_LSB 0x06

#define MMA0_I2C_ADDR   (0x1D) /* I2C slave device address as set in the properties */

typedef struct {
  int16_t NxOff; /* offset for X axis */
  int16_t NyOff; /* offset for Y axis */
  int16_t NzOff; /* offset for Z axis */
} tAccelCal;

/* default calibration values from component properties */
static const tAccelCal InitialCalibration = { /* Initial default calibration values */
  0, /* X offset */
  0, /* Y offset */
  0, /* Z offset */
};
static tAccelCal sCalValues; /* calibration values in RAM */

#define CalNxOff   sCalValues.NxOff
#define CalNyOff   sCalValues.NyOff
#define CalNzOff   sCalValues.NzOff

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
uint8_t MMA0_GetRaw8XYZ(uint8_t *xyz)
{
  static const uint8_t addr = MMA0_OUT_X_MSB;

  return GI2C0_ReadAddress(MMA0_I2C_ADDR, (uint8_t*)&addr, sizeof(addr), &xyz[0], 3);
}

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
uint8_t MMA0_Deinit(void)
{
  return ERR_OK; /* nothing to do */
}

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
uint8_t MMA0_Init(void)
{
  sCalValues.NxOff = InitialCalibration.NxOff;
  sCalValues.NyOff = InitialCalibration.NyOff;
  sCalValues.NzOff = InitialCalibration.NzOff;
  return GI2C0_WriteByteAddress8(MMA0_I2C_ADDR, MMA0_CTRL_REG_1, MMA0_ACTIVE_BIT_MASK); /* enable device */
}

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
void MMA0_CalibrateX1g(void)
{
  /* assumption is that accelerometer is placed with 1g for X and 0g for Y and Z */
  uint32_t X=0, Y=0, Z=0;
  uint8_t i;

  /* Get the raw data */
  for (i=0; i<8; i++) {
   X += MMA0_MeasureGetRawX();
   Y += MMA0_MeasureGetRawY();
   Z += MMA0_MeasureGetRawZ();
  }
  /* build average of 8 measured values */
  X >>= 3;
  Y >>= 3;
  Z >>= 3;
  /* store the calibration values */
  /* offset: both Y and Z shall have zero g */
  sCalValues.NyOff = (int16_t)Y;
  sCalValues.NzOff = (int16_t)Z;
}

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
void MMA0_CalibrateY1g(void)
{
  /* assumption is that accelerometer is placed with 1g for Y and 0g for X and Z */
  uint32_t X=0, Y=0, Z=0;
  uint8_t i;

  /* Get the raw data */
  for (i=0; i<8; i++) {
   X += MMA0_MeasureGetRawX();
   Y += MMA0_MeasureGetRawY();
   Z += MMA0_MeasureGetRawZ();
  }
  /* build average of 8 measured values */
  X >>= 3;
  Y >>= 3;
  Z >>= 3;
  /* store the calibration values */
  /* offset: both X and Z shall have zero g */
  sCalValues.NxOff = (int16_t)X;
  sCalValues.NzOff = (int16_t)Z;
}

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
void MMA0_CalibrateZ1g(void)
{
  /* assumption is that accelerometer is placed with 1g for Z and 0g for X and Y */
  uint32_t X=0, Y=0, Z=0;
  uint8_t i;

  /* Get the raw data */
  for (i=0; i<8; i++) {
   X += MMA0_MeasureGetRawX();
   Y += MMA0_MeasureGetRawY();
   Z += MMA0_MeasureGetRawZ();
  }
  /* build average of 8 measured values */
  X >>= 3;
  Y >>= 3;
  Z >>= 3;
  /* store the calibration values */
  /* offset: both X and Y shall have zero g (midpoint) */
  sCalValues.NxOff = (int16_t)X;
  sCalValues.NyOff = (int16_t)Y;
}

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
int16_t MMA0_GetXmg(void)
{
  int16_t val;

  val = MMA0_GetX();
  /* with 14bits and 2g mode, each count corresponds to 0.25 mg */
  return (int16_t)((val>>2)/4); /* remove 2 bits (16bit to 14bit) and scale */
}

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
int16_t MMA0_GetYmg(void)
{
  int16_t val;

  val = MMA0_GetY();
  /* with 14bits and 2g mode, each count corresponds to 0.25 mg */
  return (int16_t)((val>>2)/4); /* remove 2 bits (16bit to 14bit) and scale */
}

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
int16_t MMA0_GetZmg(void)
{
  int16_t val;

  val = MMA0_GetZ();
  /* with 14bits and 2g mode, each count corresponds to 0.25 mg */
  return (int16_t)((val>>2)/4); /* remove 2 bits (16bit to 14bit) and scale */
}

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
word MMA0_MeasureGetRawX(void)
{
  union {
    uint8_t buf[2]; /* value from device is in big endian */
    uint16_t be;
  } val;
  static const uint8_t addr = MMA0_OUT_X_MSB;

  if(GI2C0_ReadAddress(MMA0_I2C_ADDR, (uint8_t*)&addr, sizeof(addr), &val.buf[0], sizeof(val.buf))!=ERR_OK) {
    return 0; /* failure */
  }
#if MMA0_CPU_IS_LITTLE_ENDIAN
  return (uint16_t)((val.buf[0]<<8)|val.buf[1]); /* transform into LE value */
#else
  return val.be; /* already in BE */
#endif
}

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
word MMA0_MeasureGetRawY(void)
{
  union {
    uint8_t buf[2]; /* value from device is in big endian */
    uint16_t be;
  } val;
  static const uint8_t addr = MMA0_OUT_Y_MSB;

  if(GI2C0_ReadAddress(MMA0_I2C_ADDR, (uint8_t*)&addr, sizeof(addr), &val.buf[0], sizeof(val.buf))!=ERR_OK) {
    return 0; /* failure */
  }
#if MMA0_CPU_IS_LITTLE_ENDIAN
  return (uint16_t)((val.buf[0]<<8)|val.buf[1]); /* transform into LE value */
#else
  return val.be; /* already in BE */
#endif
}

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
word MMA0_MeasureGetRawZ(void)
{
  union {
    uint8_t buf[2]; /* value from device is in big endian */
    uint16_t be;
  } val;
  static const uint8_t addr = MMA0_OUT_Z_MSB;

  if(GI2C0_ReadAddress(MMA0_I2C_ADDR, (uint8_t*)&addr, sizeof(addr), &val.buf[0], sizeof(val.buf))!=ERR_OK) {
    return 0; /* failure */
  }
#if MMA0_CPU_IS_LITTLE_ENDIAN
  return (uint16_t)((val.buf[0]<<8)|val.buf[1]); /* transform into LE value */
#else
  return val.be; /* already in BE */
#endif
}

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
int16_t MMA0_GetXOffset(void)
{
  return CalNxOff;
}

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
int16_t MMA0_GetYOffset(void)
{
  return CalNyOff;
}

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
int16_t MMA0_GetZOffset(void)
{
  return CalNzOff;
}

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
int16_t MMA0_GetX1gValue(void)
{
  return 4096;
}

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
int16_t MMA0_GetY1gValue(void)
{
  return 4096;
}

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
int16_t MMA0_GetZ1gValue(void)
{
  return 4096;
}

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
int16_t MMA0_GetX(void)
{
  int16_t value;

  value = (int16_t)MMA0_MeasureGetRawX();
  value += CalNxOff; /* adjust with calibration offset */
  return value;
}

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
int16_t MMA0_GetY(void)
{
  int16_t value;

  value = (int16_t)MMA0_MeasureGetRawY();
  value += CalNyOff; /* adjust with calibration offset */
  return value;
}

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
int16_t MMA0_GetZ(void)
{
  int16_t value;

  value = (int16_t)MMA0_MeasureGetRawZ();
  value += CalNzOff; /* adjust with calibration offset */
  return value;
}

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
byte MMA0_SetFastMode(bool on)
{
  uint8_t val, res;

  res = GI2C0_ReadByteAddress8(MMA0_I2C_ADDR, MMA0_CTRL_REG_1, &val);
  if (res!=ERR_OK) {
    return res;
  }
  if (on) {
    val |= MMA0_F_READ_BIT_MASK; /* enable F_READ: Fast read mode, data format limited to single byte (auto increment counter will skip LSB) */
  } else {
    val &= ~MMA0_F_READ_BIT_MASK; /* disable F_READ: Fast read mode, data format limited to single byte (auto increment counter will skip LSB) */
  }
  return GI2C0_WriteByteAddress8(MMA0_I2C_ADDR, MMA0_CTRL_REG_1, val);
}

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
byte MMA0_Enable(void)
{
  uint8_t val, res;

  res = GI2C0_ReadByteAddress8(MMA0_I2C_ADDR, MMA0_CTRL_REG_1, &val);
  if (res!=ERR_OK) {
    return res;
  }
  val |= MMA0_ACTIVE_BIT_MASK; /* enable device */
  return GI2C0_WriteByteAddress8(MMA0_I2C_ADDR, MMA0_CTRL_REG_1, val);
}

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
byte MMA0_Disable(void)
{
  uint8_t val, res;

  res = GI2C0_ReadByteAddress8(MMA0_I2C_ADDR, MMA0_CTRL_REG_1, &val);
  if (res!=ERR_OK) {
    return res;
  }
  val &= ~MMA0_ACTIVE_BIT_MASK; /* disable device */
  return GI2C0_WriteByteAddress8(MMA0_I2C_ADDR, MMA0_CTRL_REG_1, val);
}

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
byte MMA0_isEnabled(bool *isEnabled)
{
  uint8_t val, res;

  res = GI2C0_ReadByteAddress8(MMA0_I2C_ADDR, MMA0_CTRL_REG_1, &val);
  if (res!=ERR_OK) {
    return ERR_FAILED;
  }
  *isEnabled = (val&MMA0_ACTIVE_BIT_MASK)!=0; /* TRUE if bit is set, FALSE otherwise */
  return ERR_OK;
}

/* END MMA0. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
