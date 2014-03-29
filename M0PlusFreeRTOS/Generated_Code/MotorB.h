/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : MotorB.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : BitsIO_LDD
**     Version     : Component 01.029, Driver 01.05, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-03-28, 22:15, # CodeGen: 115
**     Abstract    :
**         The HAL BitsIO component provides a low level API for unified
**         access to general purpose digital input/output 32 pins across
**         various device designs.
**
**         RTOS drivers using HAL BitsIO API are simpler and more
**         portable to various microprocessors.
**     Settings    :
**          Component name                                 : MotorB
**          Port                                           : PTC
**          Pins                                           : 2
**            Pin0                                         : 
**              Pin                                        : PTC12/TPM_CLKIN0
**              Pin signal                                 : 
**            Pin1                                         : 
**              Pin                                        : PTC13/TPM_CLKIN1
**              Pin signal                                 : 
**          Direction                                      : Output
**          Initialization                                 : 
**            Init. direction                              : Output
**            Init. value                                  : 0
**            Auto initialization                          : yes
**          Safe mode                                      : no
**     Contents    :
**         Init   - LDD_TDeviceData* MotorB_Init(LDD_TUserData *UserDataPtr);
**         GetVal - uint32_t MotorB_GetVal(LDD_TDeviceData *DeviceDataPtr);
**         PutVal - void MotorB_PutVal(LDD_TDeviceData *DeviceDataPtr, uint32_t Val);
**         GetBit - LDD_TError MotorB_GetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool...
**         PutBit - LDD_TError MotorB_PutBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool Val);
**         SetBit - LDD_TError MotorB_SetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);
**         ClrBit - LDD_TError MotorB_ClrBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);
**
**     (c) 2012 by Freescale
** ###################################################################*/
/*!
** @file MotorB.h
** @version 01.05
** @brief
**         The HAL BitsIO component provides a low level API for unified
**         access to general purpose digital input/output 32 pins across
**         various device designs.
**
**         RTOS drivers using HAL BitsIO API are simpler and more
**         portable to various microprocessors.
*/         
/*!
**  @addtogroup MotorB_module MotorB module documentation
**  @{
*/         

#ifndef __MotorB_H
#define __MotorB_H

/* MODULE MotorB. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "IO_Map.h"
#include "GPIO_PDD.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 



/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define MotorB_PRPH_BASE_ADDRESS  0x400FF080U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define MotorB_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_MotorB_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define MotorB_Init_METHOD_ENABLED     /*!< Init method of the component MotorB is enabled (generated) */
#define MotorB_GetVal_METHOD_ENABLED   /*!< GetVal method of the component MotorB is enabled (generated) */
#define MotorB_PutVal_METHOD_ENABLED   /*!< PutVal method of the component MotorB is enabled (generated) */
#define MotorB_GetBit_METHOD_ENABLED   /*!< GetBit method of the component MotorB is enabled (generated) */
#define MotorB_PutBit_METHOD_ENABLED   /*!< PutBit method of the component MotorB is enabled (generated) */
#define MotorB_SetBit_METHOD_ENABLED   /*!< SetBit method of the component MotorB is enabled (generated) */
#define MotorB_ClrBit_METHOD_ENABLED   /*!< ClrBit method of the component MotorB is enabled (generated) */

/* Definition of implementation constants */
#define MotorB_MODULE_BASE_ADDRESS FPTC_BASE_PTR /*!< Name of macro used as the base address */
#define MotorB_PORTCONTROL_BASE_ADDRESS PORTC_BASE_PTR /*!< Name of macro used as the base address */
#define MotorB_PORT_MASK 0x3000U       /*!< Mask of the allocated pin from the port */
#define MotorB_PORT_VALID_VALUE_MASK 0x03 /*!< Mask of the allocated pins from the port as the first pin would be zero i.e. valid bits to be set in method PutVal */
#define MotorB_PIN_ALLOC_0_MASK 0x1000 /*!< Mask of the first allocated pin from the port */
#define MotorB_PIN_ALLOC_0_INDEX 12U   /*!< The index of the first allocated pin from the port */



/*
** ===================================================================
**     Method      :  MotorB_Init (component BitsIO_LDD)
*/
/*!
**     @brief
**         This method initializes the associated peripheral(s) and the
**         component internal variables. The method is called
**         automatically as a part of the application initialization
**         code.
**     @param
**         UserDataPtr     - Pointer to the RTOS device
**                           structure. This pointer will be passed to
**                           all events as parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* MotorB_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  MotorB_GetVal (component BitsIO_LDD)
*/
/*!
**     @brief
**         Returns the value of the Input/Output component. If the
**         direction is [input] then reads the input value of the pins
**         and returns it. If the direction is [output] then returns
**         the last written value (see [Safe mode] property for
**         limitations).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Input value
*/
/* ===================================================================*/
uint32_t MotorB_GetVal(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  MotorB_PutVal (component BitsIO_LDD)
*/
/*!
**     @brief
**         Specified value is passed to the Input/Output component. If
**         the direction is [input] saves the value to a memory or a
**         register, this value will be written to the pins after
**         switching to the output mode - using [SetDir(TRUE)] (see
**         [Safe mode] property for limitations). If the direction is
**         [output] it writes the value to the pins. (Method is
**         available only if the Direction = _[output]_ or
**         _[input/output]_).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Val             - Output value
*/
/* ===================================================================*/
void MotorB_PutVal(LDD_TDeviceData *DeviceDataPtr, uint32_t Val);

/*
** ===================================================================
**     Method      :  MotorB_GetBit (component BitsIO_LDD)
*/
/*!
**     @brief
**         Returns the value of the specified bit/pin of the
**         Input/Output component. If the direction is [input] then it
**         reads the input value of the pin and returns it. If the
**         direction is [output] then it returns the last written value
**         (see [Safe mode] property for limitations).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Bit             - Bit/pin number to read
**     @param
**         BitVal          - The returned value: 
**                           [false] - logical "0" (Low level)
**                           [true] - logical "1" (High level)
**     @return
**                         - Error code, possible values:
**                           ERR_OK - OK
**                           ERR_PARAM_INDEX - Invalid pin index
**                           ERR_PARAM_VALUE - Invalid output parameter
*/
/* ===================================================================*/
LDD_TError MotorB_GetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool *BitVal);

/*
** ===================================================================
**     Method      :  MotorB_PutBit (component BitsIO_LDD)
*/
/*!
**     @brief
**         Specified value is passed to the specified bit/pin of the
**         Input/Output component. If the direction is [input] it saves
**         the value to a memory or register, this value will be
**         written to the pin after switching to the output mode -
**         using [SetDir(TRUE)] (see [Safe mode] property for
**         limitations). If the direction is [output] it writes the
**         value to the pin. (Method is available only if the Direction
**         = _[output]_ or _[input/output]_).
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure pointer.
**     @param
**         Bit             - Bit/pin number
**     @param
**         Val             - A new bit value. Possible values:
**                           [false] - logical "0" (Low level)
**                           [true] - logical "1" (High level)
**     @return
**                         - Error code, possible values:
**                           ERR_OK - OK
**                           ERR_PARAM_INDEX - Invalid pin index
*/
/* ===================================================================*/
LDD_TError MotorB_PutBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool Val);

/*
** ===================================================================
**     Method      :  MotorB_SetBit (component BitsIO_LDD)
*/
/*!
**     @brief
**         Sets (to one) the specified bit of the Input/Output
**         component. It is the same as [PutBit(Bit, TRUE)]. (Method is
**         available only if the Direction = _[output]_ or
**         _[input/output]_).
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure pointer.
**     @param
**         Bit             - Bit/pin number to set
**     @return
**                         - Error code, possible values:
**                           ERR_OK - OK
**                           ERR_PARAM_INDEX - Invalid pin index
*/
/* ===================================================================*/
LDD_TError MotorB_SetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);

/*
** ===================================================================
**     Method      :  MotorB_ClrBit (component BitsIO_LDD)
*/
/*!
**     @brief
**         Clears (sets to zero) the specified bit of the Input/Output
**         component. It is the same as [PutBit(Bit, FALSE)]. (Method
**         is available only if the Direction = _[output]_ or
**         _[input/output]_).
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure pointer.
**     @param
**         Bit             - Bit/pin number to clear
**     @return
**                         - Error code, possible values:
**                           ERR_OK - OK
**                           ERR_PARAM_INDEX - Invalid pin index
*/
/* ===================================================================*/
LDD_TError MotorB_ClrBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);

/* END MotorB. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __MotorB_H */
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
