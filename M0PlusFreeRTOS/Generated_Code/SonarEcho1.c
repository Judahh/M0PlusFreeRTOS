/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : SonarEcho1.c
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
**          Component name                                 : SonarEcho1
**          Port                                           : PTE
**          Pins                                           : 2
**            Pin0                                         : 
**              Pin                                        : ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/UART0_RX
**              Pin signal                                 : 
**            Pin1                                         : 
**              Pin                                        : ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX
**              Pin signal                                 : 
**          Direction                                      : Input
**          Initialization                                 : 
**            Init. direction                              : Input
**            Init. value                                  : 0
**            Auto initialization                          : yes
**          Safe mode                                      : no
**     Contents    :
**         Init   - LDD_TDeviceData* SonarEcho1_Init(LDD_TUserData *UserDataPtr);
**         GetVal - uint32_t SonarEcho1_GetVal(LDD_TDeviceData *DeviceDataPtr);
**         GetBit - LDD_TError SonarEcho1_GetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit,...
**
**     (c) 2012 by Freescale
** ###################################################################*/
/*!
** @file SonarEcho1.c
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
**  @addtogroup SonarEcho1_module SonarEcho1 module documentation
**  @{
*/         

/* MODULE SonarEcho1. */

#include "FreeRTOS.h" /* FreeRTOS interface */
#include "SonarEcho1.h"

#ifdef __cplusplus
extern "C" {
#endif 

typedef struct {
  LDD_TUserData *UserDataPtr;          /* Pointer to user data */
} SonarEcho1_TDeviceData;              /* Device data structure type */

typedef SonarEcho1_TDeviceData *SonarEcho1_TDeviceDataPtr ; /* Pointer to the device data structure. */

static const uint32_t SonarEcho1_PIN_MASK_MAP[2U] = {
   0x00200000U, 0x00400000U
};                                     /* Map of masks for each pin */

/* {FreeRTOS RTOS Adapter} Static object used for simulation of dynamic driver memory allocation */
static SonarEcho1_TDeviceData DeviceDataPrv__DEFAULT_RTOS_ALLOC;


/*
** ===================================================================
**     Method      :  SonarEcho1_Init (component BitsIO_LDD)
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
LDD_TDeviceData* SonarEcho1_Init(LDD_TUserData *UserDataPtr)
{
  /* Allocate device structure */
  SonarEcho1_TDeviceDataPtr DeviceDataPrv;

  /* {FreeRTOS RTOS Adapter} Driver memory allocation: Dynamic allocation is simulated by a pointer to the static object */
  DeviceDataPrv = &DeviceDataPrv__DEFAULT_RTOS_ALLOC;
  DeviceDataPrv->UserDataPtr = UserDataPtr; /* Store the RTOS device structure */
  /* Configure pin directions */
  /* GPIOE_PDDR: PDD&=~0x00600000 */
  GPIOE_PDDR &= (uint32_t)~(uint32_t)(GPIO_PDDR_PDD(0x00600000));                                   
  /* Initialization of Port Control register */
  /* PORTE_PCR21: ISF=0,MUX=1 */
  PORTE_PCR21 = (uint32_t)((PORTE_PCR21 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x06)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x01)
                ));                                  
  /* PORTE_PCR22: ISF=0,MUX=1 */
  PORTE_PCR22 = (uint32_t)((PORTE_PCR22 & (uint32_t)~(uint32_t)(
                 PORT_PCR_ISF_MASK |
                 PORT_PCR_MUX(0x06)
                )) | (uint32_t)(
                 PORT_PCR_MUX(0x01)
                ));                                  
  /* Registration of the device structure */
  PE_LDD_RegisterDeviceStructure(PE_LDD_COMPONENT_SonarEcho1_ID,DeviceDataPrv);
  return ((LDD_TDeviceData *)DeviceDataPrv);
}

/*
** ===================================================================
**     Method      :  SonarEcho1_GetVal (component BitsIO_LDD)
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
uint32_t SonarEcho1_GetVal(LDD_TDeviceData *DeviceDataPtr)
{
  uint32_t PortData;

  (void)DeviceDataPtr;                 /* Parameter is not used, suppress unused argument warning */
  PortData = GPIO_PDD_GetPortDataInput(SonarEcho1_MODULE_BASE_ADDRESS) & SonarEcho1_PORT_MASK;
  return PortData >> SonarEcho1_PIN_ALLOC_0_INDEX; /* Return port data shifted with the offset of the first allocated pin*/
}

/*
** ===================================================================
**     Method      :  SonarEcho1_GetBit (component BitsIO_LDD)
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
LDD_TError SonarEcho1_GetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool *BitVal)
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
  Mask = SonarEcho1_PIN_MASK_MAP[Bit];
  if ((GPIO_PDD_GetPortDataInput(SonarEcho1_MODULE_BASE_ADDRESS) & Mask) != 0U) {
    *BitVal = (bool)TRUE;
  } else {
    *BitVal = (bool)FALSE;
  }
  return ERR_OK;
}

/* END SonarEcho1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

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
