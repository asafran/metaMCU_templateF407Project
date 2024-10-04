/*******************************************************************************
* Filename      : debugregisters.hpp
*
* Details       : Debug support. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(DEBUGREGISTERS_HPP)
#define DEBUGREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct DEBUG
    {
        struct IDCODE : public Register<0xE0042000, 32, ReadMode>
        {
            struct PID : public RegisterField<IDCODE, 0, 32, ReadMode>
            {
            };

        };

        struct CTRL : public Register<0xE0042004, 32, ReadWriteMode>
        {
            struct SLEEP_DEBUG : public RegisterField<CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SLEEP_DEBUG, 0U>;
                using Value1 = FieldValue<SLEEP_DEBUG, 1U>;
            };

            struct DEEPSLEEP_DEBUG : public RegisterField<CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DEEPSLEEP_DEBUG, 0U>;
                using Value1 = FieldValue<DEEPSLEEP_DEBUG, 1U>;
            };

            struct STANDBY_DEBUG : public RegisterField<CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<STANDBY_DEBUG, 0U>;
                using Value1 = FieldValue<STANDBY_DEBUG, 1U>;
            };

            struct TRACE_IOEN : public RegisterField<CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TRACE_IOEN, 0U>;
                using Value1 = FieldValue<TRACE_IOEN, 1U>;
            };

            struct TRACE_MODE : public RegisterField<CTRL, 6, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TRACE_MODE, 0U>;
                using Value1 = FieldValue<TRACE_MODE, 1U>;
                using Value2 = FieldValue<TRACE_MODE, 2U>;
                using Value3 = FieldValue<TRACE_MODE, 3U>;
            };

            struct WDT_PAUSE : public RegisterField<CTRL, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WDT_PAUSE, 0U>;
                using Value1 = FieldValue<WDT_PAUSE, 1U>;
            };

            struct WWDT_PAUSE : public RegisterField<CTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WWDT_PAUSE, 0U>;
                using Value1 = FieldValue<WWDT_PAUSE, 1U>;
            };

            struct TMR1_PAUSE : public RegisterField<CTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR1_PAUSE, 0U>;
                using Value1 = FieldValue<TMR1_PAUSE, 1U>;
            };

            struct TMR2_PAUSE : public RegisterField<CTRL, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR2_PAUSE, 0U>;
                using Value1 = FieldValue<TMR2_PAUSE, 1U>;
            };

            struct TMR3_PAUSE : public RegisterField<CTRL, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR3_PAUSE, 0U>;
                using Value1 = FieldValue<TMR3_PAUSE, 1U>;
            };

            struct TMR4_PAUSE : public RegisterField<CTRL, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR4_PAUSE, 0U>;
                using Value1 = FieldValue<TMR4_PAUSE, 1U>;
            };

            struct CAN1_PAUSE : public RegisterField<CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN1_PAUSE, 0U>;
                using Value1 = FieldValue<CAN1_PAUSE, 1U>;
            };

            struct I2C1_SMBUS_TIMEOUT : public RegisterField<CTRL, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C1_SMBUS_TIMEOUT, 0U>;
                using Value1 = FieldValue<I2C1_SMBUS_TIMEOUT, 1U>;
            };

            struct I2C2_SMBUS_TIMEOUT : public RegisterField<CTRL, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C2_SMBUS_TIMEOUT, 0U>;
                using Value1 = FieldValue<I2C2_SMBUS_TIMEOUT, 1U>;
            };

            struct TMR8_PAUSE : public RegisterField<CTRL, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR8_PAUSE, 0U>;
                using Value1 = FieldValue<TMR8_PAUSE, 1U>;
            };

            struct TMR5_PAUSE : public RegisterField<CTRL, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR5_PAUSE, 0U>;
                using Value1 = FieldValue<TMR5_PAUSE, 1U>;
            };

            struct TMR6_PAUSE : public RegisterField<CTRL, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR6_PAUSE, 0U>;
                using Value1 = FieldValue<TMR6_PAUSE, 1U>;
            };

            struct TMR7_PAUSE : public RegisterField<CTRL, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR7_PAUSE, 0U>;
                using Value1 = FieldValue<TMR7_PAUSE, 1U>;
            };

            struct CAN2_PAUSE : public RegisterField<CTRL, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN2_PAUSE, 0U>;
                using Value1 = FieldValue<CAN2_PAUSE, 1U>;
            };

            struct TMR12_PAUSE : public RegisterField<CTRL, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR12_PAUSE, 0U>;
                using Value1 = FieldValue<TMR12_PAUSE, 1U>;
            };

            struct TMR13_PAUSE : public RegisterField<CTRL, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR13_PAUSE, 0U>;
                using Value1 = FieldValue<TMR13_PAUSE, 1U>;
            };

            struct TMR14_PAUSE : public RegisterField<CTRL, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR14_PAUSE, 0U>;
                using Value1 = FieldValue<TMR14_PAUSE, 1U>;
            };

            struct TMR9_PAUSE : public RegisterField<CTRL, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR9_PAUSE, 0U>;
                using Value1 = FieldValue<TMR9_PAUSE, 1U>;
            };

            struct TMR10_PAUSE : public RegisterField<CTRL, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR10_PAUSE, 0U>;
                using Value1 = FieldValue<TMR10_PAUSE, 1U>;
            };

            struct TMR11_PAUSE : public RegisterField<CTRL, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR11_PAUSE, 0U>;
                using Value1 = FieldValue<TMR11_PAUSE, 1U>;
            };

            struct I2C3_SMBUS_TIMEOUT : public RegisterField<CTRL, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C3_SMBUS_TIMEOUT, 0U>;
                using Value1 = FieldValue<I2C3_SMBUS_TIMEOUT, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(DEBUGREGISTERS_HPP)
