/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : MotorA.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : BitsIO_LDD
**     Version     : Component 01.029, Driver 01.05, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-05-06, 18:10, # CodeGen: 158
**     Abstract    :
**         The HAL BitsIO component provides a low level API for unified
**         access to general purpose digital input/output 32 pins across
**         various device designs.
**
**         RTOS drivers using HAL BitsIO API are simpler and more
**         portable to various microprocessors.
**     Settings    :
**          Component name                                 : MotorA
**          Port                                           : PTC
**          Pins                                           : 2
**            Pin0                                         : 
**              Pin                                        : PTC16
**              Pin signal                                 : 
**            Pin1                                         : 
**              Pin                                        : PTC17
**              Pin signal                                 : 
**          Direction                                      : Output
**          Initialization                                 : 
**            Init. direction                              : Output
**            Init. value                                  : 0
**            Auto initialization                          : yes
**          Safe mode                                      : no
**     Contents    :
**         Init   - LDD_TDeviceData* MotorA_Init(LDD_TUserData *UserDataPtr);
**         GetVal - uint32_t MotorA_GetVal(LDD_TDeviceData *DeviceDataPtr);
**         PutVal - void MotorA_PutVal(LDD_TDeviceData *DeviceDataPtr, uint32_t Val);
**         GetBit - LDD_TError MotorA_GetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool...
**         PutBit - LDD_TError MotorA_PutBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool Val);
**         SetBit - LDD_TError MotorA_SetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);
**         ClrBit - LDD_TError MotorA_ClrBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);
**
**     (c) 2012 by Freescale
** ###################################################################*/
/*!
** @file MotorA.c
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
**  @addtogroup MotorA_module MotorA module documentation
**  @{
*/         

/* MODULE MotorA. */

#include "FreeRTOS.h" /* FreeRTOS interface */
#include "MotorA.h"

#ifdef __cplusplus
extern "C" {
#endif 

typedef struct {
  LDD_TUserData *UserDataPtr;          /* Pointer to user data */
} MotorA_TDeviceData;                  /* Device data structure type */

typedef MotorA_TDeviceData *MotorA_TDeviceDataPtr ; /* Pointer to the device data structure. */

static const uint32_t MotorA_PIN_MASK_MAP[2U] = {
   0x00010000U, 0x00020000U
};                                     /* Map of masks for each pin */

/* {FreeRTOS RTOS Adapter} Static object used for simulation of dynamic driver memory allocation */
static MotorA_TDeviceData DeviceDataPrv__DEFAULT_RTOS_ALLOC;


/*
** ===================================================================
**     Method      :  MotorA_Init (component BitsIO_LDD)
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
LDD_TDeviceData* MotorA_Init(LDD_TUserData *UserDataPtr)
{
  /* Allocate device structure */
  MotorA_TDeviceDataPtr DeviceDataPrv;

  /* {FreeRTOS RTOS Adapter} Driver memory allocation: Dynamic allocation is simulated by a pointer to the static object */
  DeviceDataPrv = &DeviceDataPrv__DEFAULT_RTOS_ALLOC;
  DeviceDataPrv->UserDataPtr = UserDataPtr; /* Store the RTOS device structure */
  /* Configure pin directions */
  /* GPIOC_PDDR: PDD|=0x00030000 */
  GPIOC_PDDR |= GPIO_PDDR_PDD(0x00030000);
  /* Set initialization value */
  /* GPIOC_PDOR: PDO&=~0x00030000 */
  GPIOC_PDOR &= (uint32_t)~(uint32_t)(GPIO_PDOR_PDO(0x00030000));
  /* Initialization of Port Control register */
  /* PORTC_PCR16: ISF=0,MUX=1 */
  PORTC_PCR16 = (uint32_t)((PORTC_PCR16 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x06)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x01)
                ));
  /* PORTC_PCR17: ISF=0,MUX=1 */
  PORTC_PCR17 = (uint32_t)((PORTC_PCR17 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x06)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x01)
                ));
  /* Registration of the device structure */
  PE_LDD_RegisterDeviceStructure(PE_LDD_COMPONENT_MotorA_ID,DeviceDataPrv);
  return ((LDD_TDeviceData *)DeviceDataPrv);
}

/*
** ===================================================================
**     Method      :  MotorA_GetVal (component BitsIO_LDD)
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
uint32_t MotorA_GetVal(LDD_TDeviceData *DeviceDataPtr)
{
  uint32_t PortData;

  (void)DeviceDataPtr;                 /* Parameter is not used, suppress unused argument warning */
  PortData = GPIO_PDD_GetPortDataOutput(MotorA_MODULE_BASE_ADDRESS) & MotorA_PORT_MASK;
  return PortData >> MotorA_PIN_ALLOC_0_INDEX; /* Return port data shifted with the offset of the first allocated pin*/
}

/*
** ===================================================================
**     Method      :  MotorA_PutVal (component BitsIO_LDD)
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
void MotorA_PutVal(LDD_TDeviceData *DeviceDataPtr, uint32_t Val)
{
  /* Store the raw value of the port, set according to the offset of the first allocated pin */
  uint32_t RawVal;

  (void)DeviceDataPtr;                 /* Parameter is not used, suppress unused argument warning */
  /* Calculate the raw data to be set (i.e. shifted to left according to the first allocated pin) */
  RawVal = (Val & MotorA_PORT_VALID_VALUE_MASK) << MotorA_PIN_ALLOC_0_INDEX; /* Mask and shift output value */
  /* Set port data by toggling the different bits only */
  GPIO_PDD_TogglePortDataOutputMask(MotorA_MODULE_BASE_ADDRESS,
      (GPIO_PDD_GetPortDataOutput(MotorA_MODULE_BASE_ADDRESS) ^ RawVal) & MotorA_PORT_MASK);
}

/*
** ===================================================================
**     Method      :  MotorA_GetBit (component BitsIO_LDD)
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
LDD_TError MotorA_GetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool *BitVal)
{
  uint32_t Mask = 0;

  (void)DeviceDataPtr;                 /* Parameter is not used, suppress unused argument warning */
  /* Bit number value - this test can be disabled by setting the "Ignore range checking"
     property to the "yes" value in the "Configuration inspector" */
  if (Bit > 1U) {
    return ERR_PARAM_INDEX;
  }
  /* Bit value returned - this test can be disabled by setting the "Ignore range checking"
     property to the "yes" value in the "Configuration inspector" */
  if (BitVal == NULL) {
    return ERR_PARAM_VALUE;
  }
  Mask = MotorA_PIN_MASK_MAP[Bit];
  if ((GPIO_PDD_GetPortDataOutput(MotorA_MODULE_BASE_ADDRESS) & Mask) != 0U) {
    *BitVal = (bool)TRUE;
  } else {
    *BitVal = (bool)FALSE;
  }
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  MotorA_PutBit (component BitsIO_LDD)
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
LDD_TError MotorA_PutBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool Val)
{
  uint32_t Mask = 0;

  (void)DeviceDataPtr;                 /* Parameter is not used, suppress unused argument warning */
  /* Bit number value - this test can be disabled by setting the "Ignore range checking"
     property to the "yes" value in the "Configuration inspector" */
  if (Bit > 1U) {
    return ERR_PARAM_INDEX;
  }
  Mask = MotorA_PIN_MASK_MAP[Bit];
  if (Val) {
    GPIO_PDD_SetPortDataOutputMask(MotorA_MODULE_BASE_ADDRESS, Mask);
  } else { /* !Val */
    GPIO_PDD_ClearPortDataOutputMask(MotorA_MODULE_BASE_ADDRESS, Mask);
  } /* !Val */
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  MotorA_SetBit (component BitsIO_LDD)
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
LDD_TError MotorA_SetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit)
{
  uint32_t Mask = 0;

  (void)DeviceDataPtr;                 /* Parameter is not used, suppress unused argument warning */
  /* Bit number value - this test can be disabled by setting the "Ignore range checking"
     property to the "yes" value in the "Configuration inspector" */
  if (Bit > 1U) {
    return ERR_PARAM_INDEX;
  }
  Mask = MotorA_PIN_MASK_MAP[Bit];
  GPIO_PDD_SetPortDataOutputMask(MotorA_MODULE_BASE_ADDRESS, Mask);
  return ERR_OK;
}

/*
** ===================================================================
**     Method      :  MotorA_ClrBit (component BitsIO_LDD)
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
LDD_TError MotorA_ClrBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit)
{
  uint32_t Mask = 0;

  (void)DeviceDataPtr;                 /* Parameter is not used, suppress unused argument warning */
  /* Bit number value - this test can be disabled by setting the "Ignore range checking"
     property to the "yes" value in the "Configuration inspector" */
  if (Bit > 1U) {
    return ERR_PARAM_INDEX;
  }
  Mask = MotorA_PIN_MASK_MAP[Bit];
  GPIO_PDD_ClearPortDataOutputMask(MotorA_MODULE_BASE_ADDRESS, Mask);
  return ERR_OK;
}

/* END MotorA. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

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
