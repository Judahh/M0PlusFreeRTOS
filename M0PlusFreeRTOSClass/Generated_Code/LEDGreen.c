/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : LEDGreen.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : LED
**     Version     : Component 01.062, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-05-27, 17:58, # CodeGen: 188
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LEDGreen
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Disabled
**     Contents    :
**         Init       - void LEDGreen_Init(void);
**         Deinit     - void LEDGreen_Deinit(void);
**         On         - void LEDGreen_On(void);
**         Off        - void LEDGreen_Off(void);
**         Neg        - void LEDGreen_Neg(void);
**         Get        - byte LEDGreen_Get(void);
**         Put        - void LEDGreen_Put(byte val);
**         SetRatio16 - void LEDGreen_SetRatio16(word ratio);
**
**     License   : Open Source (LGPL)
**     Copyright : Erich Styger, 2013, all rights reserved.
**     Web       : www.mcuoneclipse.com
**     This an open source software implementing a driver using Processor Expert.
**     This is a free software and is opened for education, research and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file LEDGreen.c
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LEDGreen_module LEDGreen module documentation
**  @{
*/         

/* MODULE LEDGreen. */

#include "LEDGreen.h"

/*
** ===================================================================
**     Method      :  LEDGreen_On (component LED)
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
** ===================================================================
**     Method      :  LEDGreen_Off (component LED)
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LEDGreen_Off(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LEDGreen_Neg (component LED)
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LEDGreen_Neg(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LEDGreen_Get (component LED)
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/
/*
byte LEDGreen_Get(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LEDGreen_Init (component LED)
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void LEDGreen_Init(void)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LEDGreen_Put (component LED)
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/
/*
void LEDGreen_Put(byte val)
{
  *** This method is implemented as macro in the header file
}
*/

/*
** ===================================================================
**     Method      :  LEDGreen_Deinit (component LED)
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void LEDGreen_Deinit(void)
{
}

/*
** ===================================================================
**     Method      :  LEDGreen_SetRatio16 (component LED)
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/
void LEDGreen_SetRatio16(word ratio)
{
  /* on/off LED: binary on or off */
  if (ratio<(0xffff/2)) {
    LEDGreen_Off();
  } else {
    LEDGreen_On();
  }
}

/* END LEDGreen. */

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