/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : AdcLdd1.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : ADC_LDD
**     Version     : Component 01.182, Driver 01.08, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-03-09, 19:00, # CodeGen: 97
**     Abstract    :
**         This device "ADC_LDD" implements an A/D converter,
**         its control methods and interrupt/event handling procedure.
**     Settings    :
**          Component name                                 : AdcLdd1
**          A/D converter                                  : ADC0
**          Discontinuous mode                             : no
**          Interrupt service/event                        : Disabled
**          DMA                                            : Disabled
**          A/D channel list                               : 6
**            Channel 0                                    : 
**              Channel mode                               : Single Ended
**                Input                                    : 
**                  A/D channel (pin)                      : ADC0_SE8/TSI0_CH0/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0
**                  A/D channel (pin) signal               : 
**            Channel 1                                    : 
**              Channel mode                               : Single Ended
**                Input                                    : 
**                  A/D channel (pin)                      : ADC0_SE9/TSI0_CH6/PTB1/I2C0_SDA/TPM1_CH1
**                  A/D channel (pin) signal               : 
**            Channel 2                                    : 
**              Channel mode                               : Single Ended
**                Input                                    : 
**                  A/D channel (pin)                      : ADC0_SE12/TSI0_CH7/PTB2/I2C0_SCL/TPM2_CH0
**                  A/D channel (pin) signal               : 
**            Channel 3                                    : 
**              Channel mode                               : Single Ended
**                Input                                    : 
**                  A/D channel (pin)                      : ADC0_SE13/TSI0_CH8/PTB3/I2C0_SDA/TPM2_CH1
**                  A/D channel (pin) signal               : 
**            Channel 4                                    : 
**              Channel mode                               : Single Ended
**                Input                                    : 
**                  A/D channel (pin)                      : ADC0_SE11/TSI0_CH15/PTC2/I2C1_SDA/TPM0_CH1
**                  A/D channel (pin) signal               : 
**            Channel 5                                    : 
**              Channel mode                               : Single Ended
**                Input                                    : 
**                  A/D channel (pin)                      : ADC0_SE15/TSI0_CH14/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0
**                  A/D channel (pin) signal               : 
**          Static sample groups                           : Disabled
**          A/D resolution                                 : Autoselect
**          Low-power mode                                 : Disabled
**          High-speed conversion mode                     : Disabled
**          Asynchro clock output                          : Disabled
**          Sample time                                    : 4 clock periods
**          Number of conversions                          : 1
**          Conversion time                                : 9.536743 �s
**          ADC clock                                      : 2.621 MHz (381.47 ns)
**          Single conversion time - Single-ended          : 11.682 us
**          Single conversion time - Differential          : 15.115 us
**          Additional conversion time - Single-ended      : 9.536 us
**          Additional conversion time - Differential      : 12.969 us
**          Result type                                    : unsigned 16 bits, right justified
**          Trigger                                        : Disabled
**          Voltage reference                              : 
**            High voltage reference                       : 
**              Volt. ref. pin                             : VREFH
**              Volt. ref pin signal                       : 
**            Low voltage reference                        : 
**              Volt. ref. pin                             : VREFL
**              Volt. ref pin signal                       : 
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Auto initialization                          : no
**            Event mask                                   : 
**              OnMeasurementComplete                      : Disabled
**              OnError                                    : Disabled
**          CPU clock/configuration selection              : 
**            Clock configuration 0                        : This component enabled
**            Clock configuration 1                        : This component disabled
**            Clock configuration 2                        : This component disabled
**            Clock configuration 3                        : This component disabled
**            Clock configuration 4                        : This component disabled
**            Clock configuration 5                        : This component disabled
**            Clock configuration 6                        : This component disabled
**            Clock configuration 7                        : This component disabled
**     Contents    :
**         Init                         - LDD_TDeviceData* AdcLdd1_Init(LDD_TUserData *UserDataPtr);
**         StartSingleMeasurement       - LDD_TError AdcLdd1_StartSingleMeasurement(LDD_TDeviceData *DeviceDataPtr);
**         GetMeasuredValues            - LDD_TError AdcLdd1_GetMeasuredValues(LDD_TDeviceData *DeviceDataPtr,...
**         CreateSampleGroup            - LDD_TError AdcLdd1_CreateSampleGroup(LDD_TDeviceData *DeviceDataPtr,...
**         GetMeasurementCompleteStatus - bool AdcLdd1_GetMeasurementCompleteStatus(LDD_TDeviceData *DeviceDataPtr);
**         StartCalibration             - LDD_TError AdcLdd1_StartCalibration(LDD_TDeviceData *DeviceDataPtr);
**         GetCalibrationResultStatus   - LDD_TError AdcLdd1_GetCalibrationResultStatus(LDD_TDeviceData *DeviceDataPtr);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file AdcLdd1.h
** @version 01.08
** @brief
**         This device "ADC_LDD" implements an A/D converter,
**         its control methods and interrupt/event handling procedure.
*/         
/*!
**  @addtogroup AdcLdd1_module AdcLdd1 module documentation
**  @{
*/         

#ifndef __AdcLdd1_H
#define __AdcLdd1_H

/* MODULE AdcLdd1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */

#include "IO_Map.h"
#include "Cpu.h"

#include "ADC_PDD.h"

#ifdef __cplusplus
extern "C" { 
#endif


/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define AdcLdd1_PRPH_BASE_ADDRESS  0x4003B000U
  
/* Methods configuration constants - generated for all enabled component's methods */
#define AdcLdd1_Init_METHOD_ENABLED    /*!< Init method of the component AdcLdd1 is enabled (generated) */
#define AdcLdd1_StartSingleMeasurement_METHOD_ENABLED /*!< StartSingleMeasurement method of the component AdcLdd1 is enabled (generated) */
#define AdcLdd1_GetMeasuredValues_METHOD_ENABLED /*!< GetMeasuredValues method of the component AdcLdd1 is enabled (generated) */
#define AdcLdd1_CreateSampleGroup_METHOD_ENABLED /*!< CreateSampleGroup method of the component AdcLdd1 is enabled (generated) */
#define AdcLdd1_GetMeasurementCompleteStatus_METHOD_ENABLED /*!< GetMeasurementCompleteStatus method of the component AdcLdd1 is enabled (generated) */
#define AdcLdd1_StartCalibration_METHOD_ENABLED /*!< StartCalibration method of the component AdcLdd1 is enabled (generated) */
#define AdcLdd1_GetCalibrationResultStatus_METHOD_ENABLED /*!< GetCalibrationResultStatus method of the component AdcLdd1 is enabled (generated) */

/* Events configuration constants - generated for all enabled component's events */


/* Component specific public constants */

/* Driver mode */

/* A/D resolution of the component (the count of bits) */
#define AdcLdd1_ADC_RESOLUTION          16

/* Name of AD channel. If the "A/D channel (pin) signal" property in the channel
   pin group is not empty the constant "ComponentName_Signal" with the value of the channel
   index is generated, where the ComponentName = value of the "Component name" property
   and "Signal" is the value of the " A/D channel (pin) signal" property. This constant
   can be used in the method CreateSampleGroup() to specify required channel.
   (See ComponentName_TSample struct) */

/* This constant contains the number of channels in the "A/D channel list"
   group */
#define AdcLdd1_CHANNEL_COUNT           6u

/* This constant can be used in the sample array to create a gap in sample group.
   It is intended to disable a measurement of a sample */
#define AdcLdd1_NO_CHANNEL              0x1FU


/* HW specific public constants */

/* Maximal number of samples in one sample group. This constant is HW specific.
   The CreateSampleGroup() method returns ERR_PARAM_SAMPLE_COUNT if the SampleCount parameter
   is greater then this constant. The value of this constant depends on the number
   of samples the HW is capable to measure in one measurement cycle. */
#define AdcLdd1_MAX_HW_SAMPLE_COUNT     1U

/* This constant informs about the actual width of results. */
#define AdcLdd1_RESULT_WIDTH            16U

/* This constant informs about the native size of result in bytes */
#define AdcLdd1_RESULT_WIDTH_BYTES      2U

/* This parameter informs about the type of results. */
#define AdcLdd1_RESULT_TYPE_UNSIGNED

/* Measurement result data type. Definition of the type depends
   on "Result type" property value. */
typedef uint16_t AdcLdd1_TResultData;


/*
** ===================================================================
**     Method      :  AdcLdd1_Init (component ADC_LDD)
*/
/*!
**     @brief
**         Initializes the device. Allocates memory for the device data
**         structure, allocates interrupt vectors and sets interrupt
**         priority, sets pin routing, sets timing, etc.
**         If the "Enable in init. code" is set to "yes" value then the
**         device is also enabled(see the description of the Enable()
**         method). In this case the Enable() method is not necessary
**         and needn't to be generated. 
**         This method can be called only once. Before the second call
**         of Init() the Deinit() must be called first.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Device data structure pointer.
*/
/* ===================================================================*/
LDD_TDeviceData* AdcLdd1_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  AdcLdd1_StartSingleMeasurement (component ADC_LDD)
*/
/*!
**     @brief
**         This method starts one measurement of the selected group of
**         samples and exits immediately. This is ADC SW trigger method.
**         The group of samples for measurement is specified by
**         preceding call to [SelectSampleGroup()] or
**         [CreateSampleGroup] method. 
**         DMA disabled: The [OnMeasurementComplete() ] event is
**         invoked after the measurement is done and if the event is
**         enabled. Results of the measurement can be read by the
**         [GetMeasuredValues()] method. 
**         DMA enabled: DMA request from configured ADC is enabled
**         automatically. The [OnMeasurementComplete() ] event is
**         invoked after the requested number of results are
**         transferred to destination buffer by DMA and if the event is
**         enabled. [GetMeasuredValues()] method is not available if
**         DMA mode is enabled. If the DMA transfer was completed
**         before and DMA is not recofingured, DMA error can occur. See
**         also [SetBuffer()] method. 
**         The state of the measurement can be also polled by the
**         [GetMeasurementCompleteStatus()] method. The [Discontinuous
**         mode] doesn't support this method.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - The device doesn't work in the
**                           active clock configuration
**                           ERR_DISABLED - Component is disabled
**                           ERR_BUSY - A measurement is in progress 
*/
/* ===================================================================*/
LDD_TError AdcLdd1_StartSingleMeasurement(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  AdcLdd1_CreateSampleGroup (component ADC_LDD)
*/
/*!
**     @brief
**         This method prepares HW for next measurement according to
**         array of samples defined during run-time. The array of
**         samples should be prepared prior to calling this method.
**         Pointer to the array is passed into this method in parameter
**         SampleGroupPtr. The number of samples is defined by
**         parameter SampleCount. Once any group is prepared, the
**         measurement can be started multiple times. Note: This method
**         works only with the sample groups defined during run-time.
**         For design-time defined groups use [SelectSampleGroup()]
**         method.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         SampleGroupPtr  - Pointer to the
**                           sample definition array. This array can be
**                           released as soon as the method ends.
**     @param
**         SampleCount     - Number of items in the
**                           sample definition array. Must be less than
**                           or equal to
**                           ComponentName_MAX_HW_SAMPLE_COUNT.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - The device doesn't work in the
**                           active clock configuration
**                           ERR_DISABLED - Component is disabled
**                           ERR_PARAM_INDEX - Channel index in
**                           SampleGroup structure is out of range
**                           ERR_PARAM_SAMPLE_COUNT - SampleCount
**                           variable value is out of range
**                           ERR_BUSY - Measurement is in progress 
*/
/* ===================================================================*/
LDD_TError AdcLdd1_CreateSampleGroup(LDD_TDeviceData *DeviceDataPtr, LDD_ADC_TSample *SampleGroupPtr, uint8_t SampleCount);

/*
** ===================================================================
**     Method      :  AdcLdd1_GetMeasuredValues (component ADC_LDD)
*/
/*!
**     @brief
**         This method copies results of the last measurement to the
**         user supplied buffer. Data size depends on the size of
**         measured sample group (see [SelectSampleGroup()] or
**         [CreateSampleGroup()] method). Data representation is
**         defined by the [Result type] property. Typically this method
**         is called from [OnMeasurementComplete] event to get results
**         of the last measurement. This method is not available if DMA
**         is enabled.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         BufferPtr       - Pointer to the start of the
**                           buffer for new results. Count of stored
**                           measured values equals to the count of the
**                           samples in the active sample group. It is
**                           in the user responsibility to provide
**                           buffer with appropriate size.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - The device doesn't work in the
**                           active clock configuration
**                           ERR_DISABLED - Component is disabled
*/
/* ===================================================================*/
LDD_TError AdcLdd1_GetMeasuredValues(LDD_TDeviceData *DeviceDataPtr, LDD_TData *BufferPtr);

/*
** ===================================================================
**     Method      :  AdcLdd1_GetMeasurementCompleteStatus (component ADC_LDD)
*/
/*!
**     @brief
**         Returns whether the measurement is done and the results can
**         be read by the user. It can be used to poll the state of
**         measurement if [Interrupt service/event] is disabled or if
**         [OnMeasurementComplete] event is disabled by the
**         [SetEventMask()] methods.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code
**                           true - Measurement is done
**                           false - Measurement is in progress
*/
/* ===================================================================*/
bool AdcLdd1_GetMeasurementCompleteStatus(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  AdcLdd1_StartCalibration (component ADC_LDD)
*/
/*!
**     @brief
**         This method starts self calibration process. Calibration is
**         typically used to remove the effects of the gain and offset
**         from a specific reading.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code
**                           ERR_OK - OK
**                           ERR_SPEED - The device doesn't work in the
**                           active clock configuration
**                           ERR_DISABLED - Component is disabled
**                           ERR_BUSY - A conversion is already running 
*/
/* ===================================================================*/
LDD_TError AdcLdd1_StartCalibration(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  AdcLdd1_GetCalibrationResultStatus (component ADC_LDD)
*/
/*!
**     @brief
**         This method should be used for check the last calibration
**         result. If calibration completed normally the method finish
**         calibration process by writing gain calibration values.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code
**                           ERR_OK - OK 
**                           ERR_FAILED - Last calibration hasn't been
**                           finished correctly
*/
/* ===================================================================*/
LDD_TError AdcLdd1_GetCalibrationResultStatus(LDD_TDeviceData *DeviceDataPtr);

/* END AdcLdd1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __AdcLdd1_H */
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
