/*******************************************************************************
* Filename      : iomuxregisters.hpp
*
* Details       : IO MUX function. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(IOMUXREGISTERS_HPP)
#define IOMUXREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct IOMUX
    {
        struct EVTOUT : public Register<0x40010000, 32, ReadWriteMode>
        {
            struct SELPIN : public RegisterField<EVTOUT, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<SELPIN, 0U>;
                using Value1 = FieldValue<SELPIN, 1U>;
                using Value2 = FieldValue<SELPIN, 2U>;
                using Value3 = FieldValue<SELPIN, 3U>;
                using Value4 = FieldValue<SELPIN, 4U>;
                using Value5 = FieldValue<SELPIN, 5U>;
                using Value6 = FieldValue<SELPIN, 6U>;
                using Value7 = FieldValue<SELPIN, 7U>;
                using Value8 = FieldValue<SELPIN, 8U>;
                using Value9 = FieldValue<SELPIN, 9U>;
                using Value10 = FieldValue<SELPIN, 10U>;
                using Value11 = FieldValue<SELPIN, 11U>;
                using Value12 = FieldValue<SELPIN, 12U>;
                using Value13 = FieldValue<SELPIN, 13U>;
                using Value14 = FieldValue<SELPIN, 14U>;
                using Value15 = FieldValue<SELPIN, 15U>;
            };

            struct SELPORT : public RegisterField<EVTOUT, 4, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<SELPORT, 0U>;
                using Value1 = FieldValue<SELPORT, 1U>;
                using Value2 = FieldValue<SELPORT, 2U>;
                using Value3 = FieldValue<SELPORT, 3U>;
                using Value4 = FieldValue<SELPORT, 4U>;
                using Value5 = FieldValue<SELPORT, 5U>;
                using Value6 = FieldValue<SELPORT, 6U>;
                using Value7 = FieldValue<SELPORT, 7U>;
            };

            struct EVOEN : public RegisterField<EVTOUT, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVOEN, 0U>;
                using Value1 = FieldValue<EVOEN, 1U>;
            };

        };

        struct REMAP : public Register<0x40010004, 32, ReadWriteMode>
        {
            struct SPI1_MUX0 : public RegisterField<REMAP, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI1_MUX0, 0U>;
                using Value1 = FieldValue<SPI1_MUX0, 1U>;
            };

            struct I2C1_MUX : public RegisterField<REMAP, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C1_MUX, 0U>;
                using Value1 = FieldValue<I2C1_MUX, 1U>;
            };

            struct USART1_MUX : public RegisterField<REMAP, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART1_MUX, 0U>;
                using Value1 = FieldValue<USART1_MUX, 1U>;
            };

            struct USART2_MUX : public RegisterField<REMAP, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART2_MUX, 0U>;
                using Value1 = FieldValue<USART2_MUX, 1U>;
            };

            struct USART3_MUX : public RegisterField<REMAP, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<USART3_MUX, 0U>;
                using Value1 = FieldValue<USART3_MUX, 1U>;
                using Value2 = FieldValue<USART3_MUX, 2U>;
                using Value3 = FieldValue<USART3_MUX, 3U>;
            };

            struct TMR1_MUX : public RegisterField<REMAP, 6, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR1_MUX, 0U>;
                using Value1 = FieldValue<TMR1_MUX, 1U>;
                using Value2 = FieldValue<TMR1_MUX, 2U>;
                using Value3 = FieldValue<TMR1_MUX, 3U>;
            };

            struct TMR2_MUX : public RegisterField<REMAP, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR2_MUX, 0U>;
                using Value1 = FieldValue<TMR2_MUX, 1U>;
                using Value2 = FieldValue<TMR2_MUX, 2U>;
                using Value3 = FieldValue<TMR2_MUX, 3U>;
            };

            struct TMR3_MUX : public RegisterField<REMAP, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR3_MUX, 0U>;
                using Value1 = FieldValue<TMR3_MUX, 1U>;
                using Value2 = FieldValue<TMR3_MUX, 2U>;
                using Value3 = FieldValue<TMR3_MUX, 3U>;
            };

            struct TMR4_MUX : public RegisterField<REMAP, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR4_MUX, 0U>;
                using Value1 = FieldValue<TMR4_MUX, 1U>;
            };

            struct CAN_MUX : public RegisterField<REMAP, 13, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN_MUX, 0U>;
                using Value1 = FieldValue<CAN_MUX, 1U>;
                using Value2 = FieldValue<CAN_MUX, 2U>;
                using Value3 = FieldValue<CAN_MUX, 3U>;
            };

            struct PD01_MUX : public RegisterField<REMAP, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PD01_MUX, 0U>;
                using Value1 = FieldValue<PD01_MUX, 1U>;
            };

            struct TMR5CH4_MUX : public RegisterField<REMAP, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR5CH4_MUX, 0U>;
                using Value1 = FieldValue<TMR5CH4_MUX, 1U>;
            };

            struct ADC1_ETP_MUX : public RegisterField<REMAP, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC1_ETP_MUX, 0U>;
                using Value1 = FieldValue<ADC1_ETP_MUX, 1U>;
            };

            struct ADC1_ETO_MUX : public RegisterField<REMAP, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC1_ETO_MUX, 0U>;
                using Value1 = FieldValue<ADC1_ETO_MUX, 1U>;
            };

            struct ADC2_ETP_MUX : public RegisterField<REMAP, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC2_ETP_MUX, 0U>;
                using Value1 = FieldValue<ADC2_ETP_MUX, 1U>;
            };

            struct ADC2_ETO_MUX : public RegisterField<REMAP, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC2_ETO_MUX, 0U>;
                using Value1 = FieldValue<ADC2_ETO_MUX, 1U>;
            };

            struct EMAC_MUX : public RegisterField<REMAP, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMAC_MUX, 0U>;
                using Value1 = FieldValue<EMAC_MUX, 1U>;
            };

            struct CAN2_MUX : public RegisterField<REMAP, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN2_MUX, 0U>;
                using Value1 = FieldValue<CAN2_MUX, 1U>;
            };

            struct MII_RMII_SEL_MUX : public RegisterField<REMAP, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MII_RMII_SEL_MUX, 0U>;
                using Value1 = FieldValue<MII_RMII_SEL_MUX, 1U>;
            };

            struct SWJTAG_MUX : public RegisterField<REMAP, 24, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<SWJTAG_MUX, 0U>;
                using Value1 = FieldValue<SWJTAG_MUX, 1U>;
                using Value2 = FieldValue<SWJTAG_MUX, 2U>;
                using Value3 = FieldValue<SWJTAG_MUX, 3U>;
                using Value4 = FieldValue<SWJTAG_MUX, 4U>;
                using Value5 = FieldValue<SWJTAG_MUX, 5U>;
                using Value6 = FieldValue<SWJTAG_MUX, 6U>;
                using Value7 = FieldValue<SWJTAG_MUX, 7U>;
            };

            struct SPI3_MUX : public RegisterField<REMAP, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI3_MUX, 0U>;
                using Value1 = FieldValue<SPI3_MUX, 1U>;
            };

            struct TMR2ITR1_MUX : public RegisterField<REMAP, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR2ITR1_MUX, 0U>;
                using Value1 = FieldValue<TMR2ITR1_MUX, 1U>;
            };

            struct PTP_PPS_MUX : public RegisterField<REMAP, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PTP_PPS_MUX, 0U>;
                using Value1 = FieldValue<PTP_PPS_MUX, 1U>;
            };

            struct SPI1_MUX1 : public RegisterField<REMAP, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI1_MUX1, 0U>;
                using Value1 = FieldValue<SPI1_MUX1, 1U>;
            };

        };

        struct EXINTC1 : public Register<0x40010008, 32, ReadWriteMode>
        {
            struct EXINT0 : public RegisterField<EXINTC1, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT0, 0U>;
                using Value1 = FieldValue<EXINT0, 1U>;
                using Value2 = FieldValue<EXINT0, 2U>;
                using Value3 = FieldValue<EXINT0, 3U>;
                using Value4 = FieldValue<EXINT0, 4U>;
                using Value5 = FieldValue<EXINT0, 5U>;
                using Value6 = FieldValue<EXINT0, 6U>;
                using Value7 = FieldValue<EXINT0, 7U>;
                using Value8 = FieldValue<EXINT0, 8U>;
                using Value9 = FieldValue<EXINT0, 9U>;
                using Value10 = FieldValue<EXINT0, 10U>;
                using Value11 = FieldValue<EXINT0, 11U>;
                using Value12 = FieldValue<EXINT0, 12U>;
                using Value13 = FieldValue<EXINT0, 13U>;
                using Value14 = FieldValue<EXINT0, 14U>;
                using Value15 = FieldValue<EXINT0, 15U>;
            };

            struct EXINT1 : public RegisterField<EXINTC1, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT1, 0U>;
                using Value1 = FieldValue<EXINT1, 1U>;
                using Value2 = FieldValue<EXINT1, 2U>;
                using Value3 = FieldValue<EXINT1, 3U>;
                using Value4 = FieldValue<EXINT1, 4U>;
                using Value5 = FieldValue<EXINT1, 5U>;
                using Value6 = FieldValue<EXINT1, 6U>;
                using Value7 = FieldValue<EXINT1, 7U>;
                using Value8 = FieldValue<EXINT1, 8U>;
                using Value9 = FieldValue<EXINT1, 9U>;
                using Value10 = FieldValue<EXINT1, 10U>;
                using Value11 = FieldValue<EXINT1, 11U>;
                using Value12 = FieldValue<EXINT1, 12U>;
                using Value13 = FieldValue<EXINT1, 13U>;
                using Value14 = FieldValue<EXINT1, 14U>;
                using Value15 = FieldValue<EXINT1, 15U>;
            };

            struct EXINT2 : public RegisterField<EXINTC1, 8, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT2, 0U>;
                using Value1 = FieldValue<EXINT2, 1U>;
                using Value2 = FieldValue<EXINT2, 2U>;
                using Value3 = FieldValue<EXINT2, 3U>;
                using Value4 = FieldValue<EXINT2, 4U>;
                using Value5 = FieldValue<EXINT2, 5U>;
                using Value6 = FieldValue<EXINT2, 6U>;
                using Value7 = FieldValue<EXINT2, 7U>;
                using Value8 = FieldValue<EXINT2, 8U>;
                using Value9 = FieldValue<EXINT2, 9U>;
                using Value10 = FieldValue<EXINT2, 10U>;
                using Value11 = FieldValue<EXINT2, 11U>;
                using Value12 = FieldValue<EXINT2, 12U>;
                using Value13 = FieldValue<EXINT2, 13U>;
                using Value14 = FieldValue<EXINT2, 14U>;
                using Value15 = FieldValue<EXINT2, 15U>;
            };

            struct EXINT3 : public RegisterField<EXINTC1, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT3, 0U>;
                using Value1 = FieldValue<EXINT3, 1U>;
                using Value2 = FieldValue<EXINT3, 2U>;
                using Value3 = FieldValue<EXINT3, 3U>;
                using Value4 = FieldValue<EXINT3, 4U>;
                using Value5 = FieldValue<EXINT3, 5U>;
                using Value6 = FieldValue<EXINT3, 6U>;
                using Value7 = FieldValue<EXINT3, 7U>;
                using Value8 = FieldValue<EXINT3, 8U>;
                using Value9 = FieldValue<EXINT3, 9U>;
                using Value10 = FieldValue<EXINT3, 10U>;
                using Value11 = FieldValue<EXINT3, 11U>;
                using Value12 = FieldValue<EXINT3, 12U>;
                using Value13 = FieldValue<EXINT3, 13U>;
                using Value14 = FieldValue<EXINT3, 14U>;
                using Value15 = FieldValue<EXINT3, 15U>;
            };

        };

        struct EXINTC2 : public Register<0x4001000C, 32, ReadWriteMode>
        {
            struct EXINT4 : public RegisterField<EXINTC2, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT4, 0U>;
                using Value1 = FieldValue<EXINT4, 1U>;
                using Value2 = FieldValue<EXINT4, 2U>;
                using Value3 = FieldValue<EXINT4, 3U>;
                using Value4 = FieldValue<EXINT4, 4U>;
                using Value5 = FieldValue<EXINT4, 5U>;
                using Value6 = FieldValue<EXINT4, 6U>;
                using Value7 = FieldValue<EXINT4, 7U>;
                using Value8 = FieldValue<EXINT4, 8U>;
                using Value9 = FieldValue<EXINT4, 9U>;
                using Value10 = FieldValue<EXINT4, 10U>;
                using Value11 = FieldValue<EXINT4, 11U>;
                using Value12 = FieldValue<EXINT4, 12U>;
                using Value13 = FieldValue<EXINT4, 13U>;
                using Value14 = FieldValue<EXINT4, 14U>;
                using Value15 = FieldValue<EXINT4, 15U>;
            };

            struct EXINT5 : public RegisterField<EXINTC2, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT5, 0U>;
                using Value1 = FieldValue<EXINT5, 1U>;
                using Value2 = FieldValue<EXINT5, 2U>;
                using Value3 = FieldValue<EXINT5, 3U>;
                using Value4 = FieldValue<EXINT5, 4U>;
                using Value5 = FieldValue<EXINT5, 5U>;
                using Value6 = FieldValue<EXINT5, 6U>;
                using Value7 = FieldValue<EXINT5, 7U>;
                using Value8 = FieldValue<EXINT5, 8U>;
                using Value9 = FieldValue<EXINT5, 9U>;
                using Value10 = FieldValue<EXINT5, 10U>;
                using Value11 = FieldValue<EXINT5, 11U>;
                using Value12 = FieldValue<EXINT5, 12U>;
                using Value13 = FieldValue<EXINT5, 13U>;
                using Value14 = FieldValue<EXINT5, 14U>;
                using Value15 = FieldValue<EXINT5, 15U>;
            };

            struct EXINT6 : public RegisterField<EXINTC2, 8, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT6, 0U>;
                using Value1 = FieldValue<EXINT6, 1U>;
                using Value2 = FieldValue<EXINT6, 2U>;
                using Value3 = FieldValue<EXINT6, 3U>;
                using Value4 = FieldValue<EXINT6, 4U>;
                using Value5 = FieldValue<EXINT6, 5U>;
                using Value6 = FieldValue<EXINT6, 6U>;
                using Value7 = FieldValue<EXINT6, 7U>;
                using Value8 = FieldValue<EXINT6, 8U>;
                using Value9 = FieldValue<EXINT6, 9U>;
                using Value10 = FieldValue<EXINT6, 10U>;
                using Value11 = FieldValue<EXINT6, 11U>;
                using Value12 = FieldValue<EXINT6, 12U>;
                using Value13 = FieldValue<EXINT6, 13U>;
                using Value14 = FieldValue<EXINT6, 14U>;
                using Value15 = FieldValue<EXINT6, 15U>;
            };

            struct EXINT7 : public RegisterField<EXINTC2, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT7, 0U>;
                using Value1 = FieldValue<EXINT7, 1U>;
                using Value2 = FieldValue<EXINT7, 2U>;
                using Value3 = FieldValue<EXINT7, 3U>;
                using Value4 = FieldValue<EXINT7, 4U>;
                using Value5 = FieldValue<EXINT7, 5U>;
                using Value6 = FieldValue<EXINT7, 6U>;
                using Value7 = FieldValue<EXINT7, 7U>;
                using Value8 = FieldValue<EXINT7, 8U>;
                using Value9 = FieldValue<EXINT7, 9U>;
                using Value10 = FieldValue<EXINT7, 10U>;
                using Value11 = FieldValue<EXINT7, 11U>;
                using Value12 = FieldValue<EXINT7, 12U>;
                using Value13 = FieldValue<EXINT7, 13U>;
                using Value14 = FieldValue<EXINT7, 14U>;
                using Value15 = FieldValue<EXINT7, 15U>;
            };

        };

        struct EXINTC3 : public Register<0x40010010, 32, ReadWriteMode>
        {
            struct EXINT8 : public RegisterField<EXINTC3, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT8, 0U>;
                using Value1 = FieldValue<EXINT8, 1U>;
                using Value2 = FieldValue<EXINT8, 2U>;
                using Value3 = FieldValue<EXINT8, 3U>;
                using Value4 = FieldValue<EXINT8, 4U>;
                using Value5 = FieldValue<EXINT8, 5U>;
                using Value6 = FieldValue<EXINT8, 6U>;
                using Value7 = FieldValue<EXINT8, 7U>;
                using Value8 = FieldValue<EXINT8, 8U>;
                using Value9 = FieldValue<EXINT8, 9U>;
                using Value10 = FieldValue<EXINT8, 10U>;
                using Value11 = FieldValue<EXINT8, 11U>;
                using Value12 = FieldValue<EXINT8, 12U>;
                using Value13 = FieldValue<EXINT8, 13U>;
                using Value14 = FieldValue<EXINT8, 14U>;
                using Value15 = FieldValue<EXINT8, 15U>;
            };

            struct EXINT9 : public RegisterField<EXINTC3, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT9, 0U>;
                using Value1 = FieldValue<EXINT9, 1U>;
                using Value2 = FieldValue<EXINT9, 2U>;
                using Value3 = FieldValue<EXINT9, 3U>;
                using Value4 = FieldValue<EXINT9, 4U>;
                using Value5 = FieldValue<EXINT9, 5U>;
                using Value6 = FieldValue<EXINT9, 6U>;
                using Value7 = FieldValue<EXINT9, 7U>;
                using Value8 = FieldValue<EXINT9, 8U>;
                using Value9 = FieldValue<EXINT9, 9U>;
                using Value10 = FieldValue<EXINT9, 10U>;
                using Value11 = FieldValue<EXINT9, 11U>;
                using Value12 = FieldValue<EXINT9, 12U>;
                using Value13 = FieldValue<EXINT9, 13U>;
                using Value14 = FieldValue<EXINT9, 14U>;
                using Value15 = FieldValue<EXINT9, 15U>;
            };

            struct EXINT10 : public RegisterField<EXINTC3, 8, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT10, 0U>;
                using Value1 = FieldValue<EXINT10, 1U>;
                using Value2 = FieldValue<EXINT10, 2U>;
                using Value3 = FieldValue<EXINT10, 3U>;
                using Value4 = FieldValue<EXINT10, 4U>;
                using Value5 = FieldValue<EXINT10, 5U>;
                using Value6 = FieldValue<EXINT10, 6U>;
                using Value7 = FieldValue<EXINT10, 7U>;
                using Value8 = FieldValue<EXINT10, 8U>;
                using Value9 = FieldValue<EXINT10, 9U>;
                using Value10 = FieldValue<EXINT10, 10U>;
                using Value11 = FieldValue<EXINT10, 11U>;
                using Value12 = FieldValue<EXINT10, 12U>;
                using Value13 = FieldValue<EXINT10, 13U>;
                using Value14 = FieldValue<EXINT10, 14U>;
                using Value15 = FieldValue<EXINT10, 15U>;
            };

            struct EXINT11 : public RegisterField<EXINTC3, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT11, 0U>;
                using Value1 = FieldValue<EXINT11, 1U>;
                using Value2 = FieldValue<EXINT11, 2U>;
                using Value3 = FieldValue<EXINT11, 3U>;
                using Value4 = FieldValue<EXINT11, 4U>;
                using Value5 = FieldValue<EXINT11, 5U>;
                using Value6 = FieldValue<EXINT11, 6U>;
                using Value7 = FieldValue<EXINT11, 7U>;
                using Value8 = FieldValue<EXINT11, 8U>;
                using Value9 = FieldValue<EXINT11, 9U>;
                using Value10 = FieldValue<EXINT11, 10U>;
                using Value11 = FieldValue<EXINT11, 11U>;
                using Value12 = FieldValue<EXINT11, 12U>;
                using Value13 = FieldValue<EXINT11, 13U>;
                using Value14 = FieldValue<EXINT11, 14U>;
                using Value15 = FieldValue<EXINT11, 15U>;
            };

        };

        struct EXINTC4 : public Register<0x40010014, 32, ReadWriteMode>
        {
            struct EXINT12 : public RegisterField<EXINTC4, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT12, 0U>;
                using Value1 = FieldValue<EXINT12, 1U>;
                using Value2 = FieldValue<EXINT12, 2U>;
                using Value3 = FieldValue<EXINT12, 3U>;
                using Value4 = FieldValue<EXINT12, 4U>;
                using Value5 = FieldValue<EXINT12, 5U>;
                using Value6 = FieldValue<EXINT12, 6U>;
                using Value7 = FieldValue<EXINT12, 7U>;
                using Value8 = FieldValue<EXINT12, 8U>;
                using Value9 = FieldValue<EXINT12, 9U>;
                using Value10 = FieldValue<EXINT12, 10U>;
                using Value11 = FieldValue<EXINT12, 11U>;
                using Value12 = FieldValue<EXINT12, 12U>;
                using Value13 = FieldValue<EXINT12, 13U>;
                using Value14 = FieldValue<EXINT12, 14U>;
                using Value15 = FieldValue<EXINT12, 15U>;
            };

            struct EXINT13 : public RegisterField<EXINTC4, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT13, 0U>;
                using Value1 = FieldValue<EXINT13, 1U>;
                using Value2 = FieldValue<EXINT13, 2U>;
                using Value3 = FieldValue<EXINT13, 3U>;
                using Value4 = FieldValue<EXINT13, 4U>;
                using Value5 = FieldValue<EXINT13, 5U>;
                using Value6 = FieldValue<EXINT13, 6U>;
                using Value7 = FieldValue<EXINT13, 7U>;
                using Value8 = FieldValue<EXINT13, 8U>;
                using Value9 = FieldValue<EXINT13, 9U>;
                using Value10 = FieldValue<EXINT13, 10U>;
                using Value11 = FieldValue<EXINT13, 11U>;
                using Value12 = FieldValue<EXINT13, 12U>;
                using Value13 = FieldValue<EXINT13, 13U>;
                using Value14 = FieldValue<EXINT13, 14U>;
                using Value15 = FieldValue<EXINT13, 15U>;
            };

            struct EXINT14 : public RegisterField<EXINTC4, 8, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT14, 0U>;
                using Value1 = FieldValue<EXINT14, 1U>;
                using Value2 = FieldValue<EXINT14, 2U>;
                using Value3 = FieldValue<EXINT14, 3U>;
                using Value4 = FieldValue<EXINT14, 4U>;
                using Value5 = FieldValue<EXINT14, 5U>;
                using Value6 = FieldValue<EXINT14, 6U>;
                using Value7 = FieldValue<EXINT14, 7U>;
                using Value8 = FieldValue<EXINT14, 8U>;
                using Value9 = FieldValue<EXINT14, 9U>;
                using Value10 = FieldValue<EXINT14, 10U>;
                using Value11 = FieldValue<EXINT14, 11U>;
                using Value12 = FieldValue<EXINT14, 12U>;
                using Value13 = FieldValue<EXINT14, 13U>;
                using Value14 = FieldValue<EXINT14, 14U>;
                using Value15 = FieldValue<EXINT14, 15U>;
            };

            struct EXINT15 : public RegisterField<EXINTC4, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINT15, 0U>;
                using Value1 = FieldValue<EXINT15, 1U>;
                using Value2 = FieldValue<EXINT15, 2U>;
                using Value3 = FieldValue<EXINT15, 3U>;
                using Value4 = FieldValue<EXINT15, 4U>;
                using Value5 = FieldValue<EXINT15, 5U>;
                using Value6 = FieldValue<EXINT15, 6U>;
                using Value7 = FieldValue<EXINT15, 7U>;
                using Value8 = FieldValue<EXINT15, 8U>;
                using Value9 = FieldValue<EXINT15, 9U>;
                using Value10 = FieldValue<EXINT15, 10U>;
                using Value11 = FieldValue<EXINT15, 11U>;
                using Value12 = FieldValue<EXINT15, 12U>;
                using Value13 = FieldValue<EXINT15, 13U>;
                using Value14 = FieldValue<EXINT15, 14U>;
                using Value15 = FieldValue<EXINT15, 15U>;
            };

        };

        struct REMAP2 : public Register<0x4001001C, 32, ReadWriteMode>
        {
            struct TMR9_MUX : public RegisterField<REMAP2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR9_MUX, 0U>;
                using Value1 = FieldValue<TMR9_MUX, 1U>;
            };

            struct XMC_NADV_MUX : public RegisterField<REMAP2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<XMC_NADV_MUX, 0U>;
                using Value1 = FieldValue<XMC_NADV_MUX, 1U>;
            };

            struct SPI4_MUX : public RegisterField<REMAP2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI4_MUX, 0U>;
                using Value1 = FieldValue<SPI4_MUX, 1U>;
            };

            struct I2C3_MUX : public RegisterField<REMAP2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C3_MUX, 0U>;
                using Value1 = FieldValue<I2C3_MUX, 1U>;
            };

            struct SDIO2_MUX : public RegisterField<REMAP2, 19, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<SDIO2_MUX, 0U>;
                using Value1 = FieldValue<SDIO2_MUX, 1U>;
                using Value2 = FieldValue<SDIO2_MUX, 2U>;
                using Value3 = FieldValue<SDIO2_MUX, 3U>;
            };

            struct EXT_SPIM_EN_MUX : public RegisterField<REMAP2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXT_SPIM_EN_MUX, 0U>;
                using Value1 = FieldValue<EXT_SPIM_EN_MUX, 1U>;
            };

        };

        struct REMAP3 : public Register<0x40010020, 32, ReadWriteMode>
        {
            struct TMR9_GMUX : public RegisterField<REMAP3, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR9_GMUX, 0U>;
                using Value1 = FieldValue<TMR9_GMUX, 1U>;
                using Value2 = FieldValue<TMR9_GMUX, 2U>;
                using Value3 = FieldValue<TMR9_GMUX, 3U>;
                using Value4 = FieldValue<TMR9_GMUX, 4U>;
                using Value5 = FieldValue<TMR9_GMUX, 5U>;
                using Value6 = FieldValue<TMR9_GMUX, 6U>;
                using Value7 = FieldValue<TMR9_GMUX, 7U>;
                using Value8 = FieldValue<TMR9_GMUX, 8U>;
                using Value9 = FieldValue<TMR9_GMUX, 9U>;
                using Value10 = FieldValue<TMR9_GMUX, 10U>;
                using Value11 = FieldValue<TMR9_GMUX, 11U>;
                using Value12 = FieldValue<TMR9_GMUX, 12U>;
                using Value13 = FieldValue<TMR9_GMUX, 13U>;
                using Value14 = FieldValue<TMR9_GMUX, 14U>;
                using Value15 = FieldValue<TMR9_GMUX, 15U>;
            };

        };

        struct REMAP4 : public Register<0x40010024, 32, ReadWriteMode>
        {
            struct TMR1_GMUX : public RegisterField<REMAP4, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR1_GMUX, 0U>;
                using Value1 = FieldValue<TMR1_GMUX, 1U>;
                using Value2 = FieldValue<TMR1_GMUX, 2U>;
                using Value3 = FieldValue<TMR1_GMUX, 3U>;
                using Value4 = FieldValue<TMR1_GMUX, 4U>;
                using Value5 = FieldValue<TMR1_GMUX, 5U>;
                using Value6 = FieldValue<TMR1_GMUX, 6U>;
                using Value7 = FieldValue<TMR1_GMUX, 7U>;
                using Value8 = FieldValue<TMR1_GMUX, 8U>;
                using Value9 = FieldValue<TMR1_GMUX, 9U>;
                using Value10 = FieldValue<TMR1_GMUX, 10U>;
                using Value11 = FieldValue<TMR1_GMUX, 11U>;
                using Value12 = FieldValue<TMR1_GMUX, 12U>;
                using Value13 = FieldValue<TMR1_GMUX, 13U>;
                using Value14 = FieldValue<TMR1_GMUX, 14U>;
                using Value15 = FieldValue<TMR1_GMUX, 15U>;
            };

            struct TMR2_GMUX : public RegisterField<REMAP4, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR2_GMUX, 0U>;
                using Value1 = FieldValue<TMR2_GMUX, 1U>;
                using Value2 = FieldValue<TMR2_GMUX, 2U>;
                using Value3 = FieldValue<TMR2_GMUX, 3U>;
            };

            struct TMR2ITR1_GMUX : public RegisterField<REMAP4, 6, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR2ITR1_GMUX, 0U>;
                using Value1 = FieldValue<TMR2ITR1_GMUX, 1U>;
                using Value2 = FieldValue<TMR2ITR1_GMUX, 2U>;
                using Value3 = FieldValue<TMR2ITR1_GMUX, 3U>;
            };

            struct TMR3_GMUX : public RegisterField<REMAP4, 8, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR3_GMUX, 0U>;
                using Value1 = FieldValue<TMR3_GMUX, 1U>;
                using Value2 = FieldValue<TMR3_GMUX, 2U>;
                using Value3 = FieldValue<TMR3_GMUX, 3U>;
                using Value4 = FieldValue<TMR3_GMUX, 4U>;
                using Value5 = FieldValue<TMR3_GMUX, 5U>;
                using Value6 = FieldValue<TMR3_GMUX, 6U>;
                using Value7 = FieldValue<TMR3_GMUX, 7U>;
                using Value8 = FieldValue<TMR3_GMUX, 8U>;
                using Value9 = FieldValue<TMR3_GMUX, 9U>;
                using Value10 = FieldValue<TMR3_GMUX, 10U>;
                using Value11 = FieldValue<TMR3_GMUX, 11U>;
                using Value12 = FieldValue<TMR3_GMUX, 12U>;
                using Value13 = FieldValue<TMR3_GMUX, 13U>;
                using Value14 = FieldValue<TMR3_GMUX, 14U>;
                using Value15 = FieldValue<TMR3_GMUX, 15U>;
            };

            struct TMR4_GMUX : public RegisterField<REMAP4, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR4_GMUX, 0U>;
                using Value1 = FieldValue<TMR4_GMUX, 1U>;
                using Value2 = FieldValue<TMR4_GMUX, 2U>;
                using Value3 = FieldValue<TMR4_GMUX, 3U>;
                using Value4 = FieldValue<TMR4_GMUX, 4U>;
                using Value5 = FieldValue<TMR4_GMUX, 5U>;
                using Value6 = FieldValue<TMR4_GMUX, 6U>;
                using Value7 = FieldValue<TMR4_GMUX, 7U>;
                using Value8 = FieldValue<TMR4_GMUX, 8U>;
                using Value9 = FieldValue<TMR4_GMUX, 9U>;
                using Value10 = FieldValue<TMR4_GMUX, 10U>;
                using Value11 = FieldValue<TMR4_GMUX, 11U>;
                using Value12 = FieldValue<TMR4_GMUX, 12U>;
                using Value13 = FieldValue<TMR4_GMUX, 13U>;
                using Value14 = FieldValue<TMR4_GMUX, 14U>;
                using Value15 = FieldValue<TMR4_GMUX, 15U>;
            };

            struct TMR5CH4_GMUX : public RegisterField<REMAP4, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR5CH4_GMUX, 0U>;
                using Value1 = FieldValue<TMR5CH4_GMUX, 1U>;
            };

        };

        struct REMAP5 : public Register<0x40010028, 32, ReadWriteMode>
        {
            struct USART5_GMUX : public RegisterField<REMAP5, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<USART5_GMUX, 0U>;
                using Value1 = FieldValue<USART5_GMUX, 1U>;
                using Value2 = FieldValue<USART5_GMUX, 2U>;
                using Value3 = FieldValue<USART5_GMUX, 3U>;
                using Value4 = FieldValue<USART5_GMUX, 4U>;
                using Value5 = FieldValue<USART5_GMUX, 5U>;
                using Value6 = FieldValue<USART5_GMUX, 6U>;
                using Value7 = FieldValue<USART5_GMUX, 7U>;
                using Value8 = FieldValue<USART5_GMUX, 8U>;
                using Value9 = FieldValue<USART5_GMUX, 9U>;
                using Value10 = FieldValue<USART5_GMUX, 10U>;
                using Value11 = FieldValue<USART5_GMUX, 11U>;
                using Value12 = FieldValue<USART5_GMUX, 12U>;
                using Value13 = FieldValue<USART5_GMUX, 13U>;
                using Value14 = FieldValue<USART5_GMUX, 14U>;
                using Value15 = FieldValue<USART5_GMUX, 15U>;
            };

            struct I2C1_GMUX : public RegisterField<REMAP5, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C1_GMUX, 0U>;
                using Value1 = FieldValue<I2C1_GMUX, 1U>;
                using Value2 = FieldValue<I2C1_GMUX, 2U>;
                using Value3 = FieldValue<I2C1_GMUX, 3U>;
                using Value4 = FieldValue<I2C1_GMUX, 4U>;
                using Value5 = FieldValue<I2C1_GMUX, 5U>;
                using Value6 = FieldValue<I2C1_GMUX, 6U>;
                using Value7 = FieldValue<I2C1_GMUX, 7U>;
                using Value8 = FieldValue<I2C1_GMUX, 8U>;
                using Value9 = FieldValue<I2C1_GMUX, 9U>;
                using Value10 = FieldValue<I2C1_GMUX, 10U>;
                using Value11 = FieldValue<I2C1_GMUX, 11U>;
                using Value12 = FieldValue<I2C1_GMUX, 12U>;
                using Value13 = FieldValue<I2C1_GMUX, 13U>;
                using Value14 = FieldValue<I2C1_GMUX, 14U>;
                using Value15 = FieldValue<I2C1_GMUX, 15U>;
            };

            struct I2C3_GMUX : public RegisterField<REMAP5, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C3_GMUX, 0U>;
                using Value1 = FieldValue<I2C3_GMUX, 1U>;
                using Value2 = FieldValue<I2C3_GMUX, 2U>;
                using Value3 = FieldValue<I2C3_GMUX, 3U>;
                using Value4 = FieldValue<I2C3_GMUX, 4U>;
                using Value5 = FieldValue<I2C3_GMUX, 5U>;
                using Value6 = FieldValue<I2C3_GMUX, 6U>;
                using Value7 = FieldValue<I2C3_GMUX, 7U>;
                using Value8 = FieldValue<I2C3_GMUX, 8U>;
                using Value9 = FieldValue<I2C3_GMUX, 9U>;
                using Value10 = FieldValue<I2C3_GMUX, 10U>;
                using Value11 = FieldValue<I2C3_GMUX, 11U>;
                using Value12 = FieldValue<I2C3_GMUX, 12U>;
                using Value13 = FieldValue<I2C3_GMUX, 13U>;
                using Value14 = FieldValue<I2C3_GMUX, 14U>;
                using Value15 = FieldValue<I2C3_GMUX, 15U>;
            };

            struct SPI1_GMUX : public RegisterField<REMAP5, 16, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI1_GMUX, 0U>;
                using Value1 = FieldValue<SPI1_GMUX, 1U>;
                using Value2 = FieldValue<SPI1_GMUX, 2U>;
                using Value3 = FieldValue<SPI1_GMUX, 3U>;
                using Value4 = FieldValue<SPI1_GMUX, 4U>;
                using Value5 = FieldValue<SPI1_GMUX, 5U>;
                using Value6 = FieldValue<SPI1_GMUX, 6U>;
                using Value7 = FieldValue<SPI1_GMUX, 7U>;
                using Value8 = FieldValue<SPI1_GMUX, 8U>;
                using Value9 = FieldValue<SPI1_GMUX, 9U>;
                using Value10 = FieldValue<SPI1_GMUX, 10U>;
                using Value11 = FieldValue<SPI1_GMUX, 11U>;
                using Value12 = FieldValue<SPI1_GMUX, 12U>;
                using Value13 = FieldValue<SPI1_GMUX, 13U>;
                using Value14 = FieldValue<SPI1_GMUX, 14U>;
                using Value15 = FieldValue<SPI1_GMUX, 15U>;
            };

            struct SPI2_GMUX : public RegisterField<REMAP5, 20, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI2_GMUX, 0U>;
                using Value1 = FieldValue<SPI2_GMUX, 1U>;
                using Value2 = FieldValue<SPI2_GMUX, 2U>;
                using Value3 = FieldValue<SPI2_GMUX, 3U>;
                using Value4 = FieldValue<SPI2_GMUX, 4U>;
                using Value5 = FieldValue<SPI2_GMUX, 5U>;
                using Value6 = FieldValue<SPI2_GMUX, 6U>;
                using Value7 = FieldValue<SPI2_GMUX, 7U>;
                using Value8 = FieldValue<SPI2_GMUX, 8U>;
                using Value9 = FieldValue<SPI2_GMUX, 9U>;
                using Value10 = FieldValue<SPI2_GMUX, 10U>;
                using Value11 = FieldValue<SPI2_GMUX, 11U>;
                using Value12 = FieldValue<SPI2_GMUX, 12U>;
                using Value13 = FieldValue<SPI2_GMUX, 13U>;
                using Value14 = FieldValue<SPI2_GMUX, 14U>;
                using Value15 = FieldValue<SPI2_GMUX, 15U>;
            };

            struct SPI3_GMUX : public RegisterField<REMAP5, 24, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI3_GMUX, 0U>;
                using Value1 = FieldValue<SPI3_GMUX, 1U>;
                using Value2 = FieldValue<SPI3_GMUX, 2U>;
                using Value3 = FieldValue<SPI3_GMUX, 3U>;
                using Value4 = FieldValue<SPI3_GMUX, 4U>;
                using Value5 = FieldValue<SPI3_GMUX, 5U>;
                using Value6 = FieldValue<SPI3_GMUX, 6U>;
                using Value7 = FieldValue<SPI3_GMUX, 7U>;
                using Value8 = FieldValue<SPI3_GMUX, 8U>;
                using Value9 = FieldValue<SPI3_GMUX, 9U>;
                using Value10 = FieldValue<SPI3_GMUX, 10U>;
                using Value11 = FieldValue<SPI3_GMUX, 11U>;
                using Value12 = FieldValue<SPI3_GMUX, 12U>;
                using Value13 = FieldValue<SPI3_GMUX, 13U>;
                using Value14 = FieldValue<SPI3_GMUX, 14U>;
                using Value15 = FieldValue<SPI3_GMUX, 15U>;
            };

            struct SPI4_GMUX : public RegisterField<REMAP5, 28, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI4_GMUX, 0U>;
                using Value1 = FieldValue<SPI4_GMUX, 1U>;
                using Value2 = FieldValue<SPI4_GMUX, 2U>;
                using Value3 = FieldValue<SPI4_GMUX, 3U>;
                using Value4 = FieldValue<SPI4_GMUX, 4U>;
                using Value5 = FieldValue<SPI4_GMUX, 5U>;
                using Value6 = FieldValue<SPI4_GMUX, 6U>;
                using Value7 = FieldValue<SPI4_GMUX, 7U>;
                using Value8 = FieldValue<SPI4_GMUX, 8U>;
                using Value9 = FieldValue<SPI4_GMUX, 9U>;
                using Value10 = FieldValue<SPI4_GMUX, 10U>;
                using Value11 = FieldValue<SPI4_GMUX, 11U>;
                using Value12 = FieldValue<SPI4_GMUX, 12U>;
                using Value13 = FieldValue<SPI4_GMUX, 13U>;
                using Value14 = FieldValue<SPI4_GMUX, 14U>;
                using Value15 = FieldValue<SPI4_GMUX, 15U>;
            };

        };

        struct REMAP6 : public Register<0x4001002C, 32, ReadWriteMode>
        {
            struct CAN1_GMUX : public RegisterField<REMAP6, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN1_GMUX, 0U>;
                using Value1 = FieldValue<CAN1_GMUX, 1U>;
                using Value2 = FieldValue<CAN1_GMUX, 2U>;
                using Value3 = FieldValue<CAN1_GMUX, 3U>;
                using Value4 = FieldValue<CAN1_GMUX, 4U>;
                using Value5 = FieldValue<CAN1_GMUX, 5U>;
                using Value6 = FieldValue<CAN1_GMUX, 6U>;
                using Value7 = FieldValue<CAN1_GMUX, 7U>;
                using Value8 = FieldValue<CAN1_GMUX, 8U>;
                using Value9 = FieldValue<CAN1_GMUX, 9U>;
                using Value10 = FieldValue<CAN1_GMUX, 10U>;
                using Value11 = FieldValue<CAN1_GMUX, 11U>;
                using Value12 = FieldValue<CAN1_GMUX, 12U>;
                using Value13 = FieldValue<CAN1_GMUX, 13U>;
                using Value14 = FieldValue<CAN1_GMUX, 14U>;
                using Value15 = FieldValue<CAN1_GMUX, 15U>;
            };

            struct CAN2_GMUX : public RegisterField<REMAP6, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN2_GMUX, 0U>;
                using Value1 = FieldValue<CAN2_GMUX, 1U>;
                using Value2 = FieldValue<CAN2_GMUX, 2U>;
                using Value3 = FieldValue<CAN2_GMUX, 3U>;
                using Value4 = FieldValue<CAN2_GMUX, 4U>;
                using Value5 = FieldValue<CAN2_GMUX, 5U>;
                using Value6 = FieldValue<CAN2_GMUX, 6U>;
                using Value7 = FieldValue<CAN2_GMUX, 7U>;
                using Value8 = FieldValue<CAN2_GMUX, 8U>;
                using Value9 = FieldValue<CAN2_GMUX, 9U>;
                using Value10 = FieldValue<CAN2_GMUX, 10U>;
                using Value11 = FieldValue<CAN2_GMUX, 11U>;
                using Value12 = FieldValue<CAN2_GMUX, 12U>;
                using Value13 = FieldValue<CAN2_GMUX, 13U>;
                using Value14 = FieldValue<CAN2_GMUX, 14U>;
                using Value15 = FieldValue<CAN2_GMUX, 15U>;
            };

            struct SDIO2_GMUX : public RegisterField<REMAP6, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<SDIO2_GMUX, 0U>;
                using Value1 = FieldValue<SDIO2_GMUX, 1U>;
                using Value2 = FieldValue<SDIO2_GMUX, 2U>;
                using Value3 = FieldValue<SDIO2_GMUX, 3U>;
                using Value4 = FieldValue<SDIO2_GMUX, 4U>;
                using Value5 = FieldValue<SDIO2_GMUX, 5U>;
                using Value6 = FieldValue<SDIO2_GMUX, 6U>;
                using Value7 = FieldValue<SDIO2_GMUX, 7U>;
                using Value8 = FieldValue<SDIO2_GMUX, 8U>;
                using Value9 = FieldValue<SDIO2_GMUX, 9U>;
                using Value10 = FieldValue<SDIO2_GMUX, 10U>;
                using Value11 = FieldValue<SDIO2_GMUX, 11U>;
                using Value12 = FieldValue<SDIO2_GMUX, 12U>;
                using Value13 = FieldValue<SDIO2_GMUX, 13U>;
                using Value14 = FieldValue<SDIO2_GMUX, 14U>;
                using Value15 = FieldValue<SDIO2_GMUX, 15U>;
            };

            struct USART1_GMUX : public RegisterField<REMAP6, 16, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<USART1_GMUX, 0U>;
                using Value1 = FieldValue<USART1_GMUX, 1U>;
                using Value2 = FieldValue<USART1_GMUX, 2U>;
                using Value3 = FieldValue<USART1_GMUX, 3U>;
                using Value4 = FieldValue<USART1_GMUX, 4U>;
                using Value5 = FieldValue<USART1_GMUX, 5U>;
                using Value6 = FieldValue<USART1_GMUX, 6U>;
                using Value7 = FieldValue<USART1_GMUX, 7U>;
                using Value8 = FieldValue<USART1_GMUX, 8U>;
                using Value9 = FieldValue<USART1_GMUX, 9U>;
                using Value10 = FieldValue<USART1_GMUX, 10U>;
                using Value11 = FieldValue<USART1_GMUX, 11U>;
                using Value12 = FieldValue<USART1_GMUX, 12U>;
                using Value13 = FieldValue<USART1_GMUX, 13U>;
                using Value14 = FieldValue<USART1_GMUX, 14U>;
                using Value15 = FieldValue<USART1_GMUX, 15U>;
            };

            struct USART2_GMUX : public RegisterField<REMAP6, 20, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<USART2_GMUX, 0U>;
                using Value1 = FieldValue<USART2_GMUX, 1U>;
                using Value2 = FieldValue<USART2_GMUX, 2U>;
                using Value3 = FieldValue<USART2_GMUX, 3U>;
                using Value4 = FieldValue<USART2_GMUX, 4U>;
                using Value5 = FieldValue<USART2_GMUX, 5U>;
                using Value6 = FieldValue<USART2_GMUX, 6U>;
                using Value7 = FieldValue<USART2_GMUX, 7U>;
                using Value8 = FieldValue<USART2_GMUX, 8U>;
                using Value9 = FieldValue<USART2_GMUX, 9U>;
                using Value10 = FieldValue<USART2_GMUX, 10U>;
                using Value11 = FieldValue<USART2_GMUX, 11U>;
                using Value12 = FieldValue<USART2_GMUX, 12U>;
                using Value13 = FieldValue<USART2_GMUX, 13U>;
                using Value14 = FieldValue<USART2_GMUX, 14U>;
                using Value15 = FieldValue<USART2_GMUX, 15U>;
            };

            struct USART3_GMUX : public RegisterField<REMAP6, 24, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<USART3_GMUX, 0U>;
                using Value1 = FieldValue<USART3_GMUX, 1U>;
                using Value2 = FieldValue<USART3_GMUX, 2U>;
                using Value3 = FieldValue<USART3_GMUX, 3U>;
                using Value4 = FieldValue<USART3_GMUX, 4U>;
                using Value5 = FieldValue<USART3_GMUX, 5U>;
                using Value6 = FieldValue<USART3_GMUX, 6U>;
                using Value7 = FieldValue<USART3_GMUX, 7U>;
                using Value8 = FieldValue<USART3_GMUX, 8U>;
                using Value9 = FieldValue<USART3_GMUX, 9U>;
                using Value10 = FieldValue<USART3_GMUX, 10U>;
                using Value11 = FieldValue<USART3_GMUX, 11U>;
                using Value12 = FieldValue<USART3_GMUX, 12U>;
                using Value13 = FieldValue<USART3_GMUX, 13U>;
                using Value14 = FieldValue<USART3_GMUX, 14U>;
                using Value15 = FieldValue<USART3_GMUX, 15U>;
            };

            struct UART4_GMUX : public RegisterField<REMAP6, 28, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<UART4_GMUX, 0U>;
                using Value1 = FieldValue<UART4_GMUX, 1U>;
                using Value2 = FieldValue<UART4_GMUX, 2U>;
                using Value3 = FieldValue<UART4_GMUX, 3U>;
                using Value4 = FieldValue<UART4_GMUX, 4U>;
                using Value5 = FieldValue<UART4_GMUX, 5U>;
                using Value6 = FieldValue<UART4_GMUX, 6U>;
                using Value7 = FieldValue<UART4_GMUX, 7U>;
                using Value8 = FieldValue<UART4_GMUX, 8U>;
                using Value9 = FieldValue<UART4_GMUX, 9U>;
                using Value10 = FieldValue<UART4_GMUX, 10U>;
                using Value11 = FieldValue<UART4_GMUX, 11U>;
                using Value12 = FieldValue<UART4_GMUX, 12U>;
                using Value13 = FieldValue<UART4_GMUX, 13U>;
                using Value14 = FieldValue<UART4_GMUX, 14U>;
                using Value15 = FieldValue<UART4_GMUX, 15U>;
            };

        };

        struct REMAP7 : public Register<0x40010030, 32, ReadWriteMode>
        {
            struct EXT_SPIM_GMUX : public RegisterField<REMAP7, 0, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<EXT_SPIM_GMUX, 0U>;
                using Value1 = FieldValue<EXT_SPIM_GMUX, 1U>;
                using Value2 = FieldValue<EXT_SPIM_GMUX, 2U>;
                using Value3 = FieldValue<EXT_SPIM_GMUX, 3U>;
                using Value4 = FieldValue<EXT_SPIM_GMUX, 4U>;
                using Value5 = FieldValue<EXT_SPIM_GMUX, 5U>;
                using Value6 = FieldValue<EXT_SPIM_GMUX, 6U>;
                using Value7 = FieldValue<EXT_SPIM_GMUX, 7U>;
            };

            struct EXT_SPIM_GEN : public RegisterField<REMAP7, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXT_SPIM_GEN, 0U>;
                using Value1 = FieldValue<EXT_SPIM_GEN, 1U>;
            };

            struct ADC1_ETP_GMUX : public RegisterField<REMAP7, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC1_ETP_GMUX, 0U>;
                using Value1 = FieldValue<ADC1_ETP_GMUX, 1U>;
            };

            struct ADC1_ETO_GMUX : public RegisterField<REMAP7, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC1_ETO_GMUX, 0U>;
                using Value1 = FieldValue<ADC1_ETO_GMUX, 1U>;
            };

            struct ADC2_ETP_GMUX : public RegisterField<REMAP7, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC2_ETP_GMUX, 0U>;
                using Value1 = FieldValue<ADC2_ETP_GMUX, 1U>;
            };

            struct ADC2_ETO_GMUX : public RegisterField<REMAP7, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC2_ETO_GMUX, 0U>;
                using Value1 = FieldValue<ADC2_ETO_GMUX, 1U>;
            };

            struct SWJTAG_GMUX : public RegisterField<REMAP7, 16, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<SWJTAG_GMUX, 0U>;
                using Value1 = FieldValue<SWJTAG_GMUX, 1U>;
                using Value2 = FieldValue<SWJTAG_GMUX, 2U>;
                using Value3 = FieldValue<SWJTAG_GMUX, 3U>;
                using Value4 = FieldValue<SWJTAG_GMUX, 4U>;
                using Value5 = FieldValue<SWJTAG_GMUX, 5U>;
                using Value6 = FieldValue<SWJTAG_GMUX, 6U>;
                using Value7 = FieldValue<SWJTAG_GMUX, 7U>;
            };

            struct PD01_GMUX : public RegisterField<REMAP7, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PD01_GMUX, 0U>;
                using Value1 = FieldValue<PD01_GMUX, 1U>;
            };

            struct XMC_GMUX : public RegisterField<REMAP7, 24, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<XMC_GMUX, 0U>;
                using Value1 = FieldValue<XMC_GMUX, 1U>;
                using Value2 = FieldValue<XMC_GMUX, 2U>;
                using Value3 = FieldValue<XMC_GMUX, 3U>;
                using Value4 = FieldValue<XMC_GMUX, 4U>;
                using Value5 = FieldValue<XMC_GMUX, 5U>;
                using Value6 = FieldValue<XMC_GMUX, 6U>;
                using Value7 = FieldValue<XMC_GMUX, 7U>;
            };

            struct XMC_NADV_GMUX : public RegisterField<REMAP7, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<XMC_NADV_GMUX, 0U>;
                using Value1 = FieldValue<XMC_NADV_GMUX, 1U>;
            };

        };

        struct REMAP8 : public Register<0x40010034, 32, ReadWriteMode>
        {
            struct EMAC_GMUX : public RegisterField<REMAP8, 16, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<EMAC_GMUX, 0U>;
                using Value1 = FieldValue<EMAC_GMUX, 1U>;
                using Value2 = FieldValue<EMAC_GMUX, 2U>;
                using Value3 = FieldValue<EMAC_GMUX, 3U>;
            };

            struct MII_RMII_SEL_GMUX : public RegisterField<REMAP8, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MII_RMII_SEL_GMUX, 0U>;
                using Value1 = FieldValue<MII_RMII_SEL_GMUX, 1U>;
            };

            struct PTP_PPS_GMUX : public RegisterField<REMAP8, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PTP_PPS_GMUX, 0U>;
                using Value1 = FieldValue<PTP_PPS_GMUX, 1U>;
            };

            struct USART6_GMUX : public RegisterField<REMAP8, 20, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<USART6_GMUX, 0U>;
                using Value1 = FieldValue<USART6_GMUX, 1U>;
                using Value2 = FieldValue<USART6_GMUX, 2U>;
                using Value3 = FieldValue<USART6_GMUX, 3U>;
                using Value4 = FieldValue<USART6_GMUX, 4U>;
                using Value5 = FieldValue<USART6_GMUX, 5U>;
                using Value6 = FieldValue<USART6_GMUX, 6U>;
                using Value7 = FieldValue<USART6_GMUX, 7U>;
                using Value8 = FieldValue<USART6_GMUX, 8U>;
                using Value9 = FieldValue<USART6_GMUX, 9U>;
                using Value10 = FieldValue<USART6_GMUX, 10U>;
                using Value11 = FieldValue<USART6_GMUX, 11U>;
                using Value12 = FieldValue<USART6_GMUX, 12U>;
                using Value13 = FieldValue<USART6_GMUX, 13U>;
                using Value14 = FieldValue<USART6_GMUX, 14U>;
                using Value15 = FieldValue<USART6_GMUX, 15U>;
            };

            struct UART7_GMUX : public RegisterField<REMAP8, 24, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<UART7_GMUX, 0U>;
                using Value1 = FieldValue<UART7_GMUX, 1U>;
                using Value2 = FieldValue<UART7_GMUX, 2U>;
                using Value3 = FieldValue<UART7_GMUX, 3U>;
                using Value4 = FieldValue<UART7_GMUX, 4U>;
                using Value5 = FieldValue<UART7_GMUX, 5U>;
                using Value6 = FieldValue<UART7_GMUX, 6U>;
                using Value7 = FieldValue<UART7_GMUX, 7U>;
                using Value8 = FieldValue<UART7_GMUX, 8U>;
                using Value9 = FieldValue<UART7_GMUX, 9U>;
                using Value10 = FieldValue<UART7_GMUX, 10U>;
                using Value11 = FieldValue<UART7_GMUX, 11U>;
                using Value12 = FieldValue<UART7_GMUX, 12U>;
                using Value13 = FieldValue<UART7_GMUX, 13U>;
                using Value14 = FieldValue<UART7_GMUX, 14U>;
                using Value15 = FieldValue<UART7_GMUX, 15U>;
            };

            struct UART8_GMUX : public RegisterField<REMAP8, 28, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<UART8_GMUX, 0U>;
                using Value1 = FieldValue<UART8_GMUX, 1U>;
                using Value2 = FieldValue<UART8_GMUX, 2U>;
                using Value3 = FieldValue<UART8_GMUX, 3U>;
                using Value4 = FieldValue<UART8_GMUX, 4U>;
                using Value5 = FieldValue<UART8_GMUX, 5U>;
                using Value6 = FieldValue<UART8_GMUX, 6U>;
                using Value7 = FieldValue<UART8_GMUX, 7U>;
                using Value8 = FieldValue<UART8_GMUX, 8U>;
                using Value9 = FieldValue<UART8_GMUX, 9U>;
                using Value10 = FieldValue<UART8_GMUX, 10U>;
                using Value11 = FieldValue<UART8_GMUX, 11U>;
                using Value12 = FieldValue<UART8_GMUX, 12U>;
                using Value13 = FieldValue<UART8_GMUX, 13U>;
                using Value14 = FieldValue<UART8_GMUX, 14U>;
                using Value15 = FieldValue<UART8_GMUX, 15U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(IOMUXREGISTERS_HPP)
