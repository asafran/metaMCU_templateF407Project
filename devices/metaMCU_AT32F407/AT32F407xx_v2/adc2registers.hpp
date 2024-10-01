/*******************************************************************************
* Filename      : adc2registers.hpp
*
* Details       : Analog to digital converter. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(ADC2REGISTERS_HPP)
#define ADC2REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct ADC2
    {
        struct STS : public Register<0x40012800, 32, ReadWriteMode>
        {
            struct OCCS : public RegisterField<STS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OCCS, 0U>;
                using Value1 = FieldValue<OCCS, 1U>;
            };

            struct PCCS : public RegisterField<STS, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCCS, 0U>;
                using Value1 = FieldValue<PCCS, 1U>;
            };

            struct PCCE : public RegisterField<STS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCCE, 0U>;
                using Value1 = FieldValue<PCCE, 1U>;
            };

            struct CCE : public RegisterField<STS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CCE, 0U>;
                using Value1 = FieldValue<CCE, 1U>;
            };

            struct VMOR : public RegisterField<STS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<VMOR, 0U>;
                using Value1 = FieldValue<VMOR, 1U>;
            };

        };

        struct CTRL1 : public Register<0x40012804, 32, ReadWriteMode>
        {
            struct OCVMEN : public RegisterField<CTRL1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OCVMEN, 0U>;
                using Value1 = FieldValue<OCVMEN, 1U>;
            };

            struct PCVMEN : public RegisterField<CTRL1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCVMEN, 0U>;
                using Value1 = FieldValue<PCVMEN, 1U>;
            };

            struct OCPCNT : public RegisterField<CTRL1, 13, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<OCPCNT, 0U>;
                using Value1 = FieldValue<OCPCNT, 1U>;
                using Value2 = FieldValue<OCPCNT, 2U>;
                using Value3 = FieldValue<OCPCNT, 3U>;
                using Value4 = FieldValue<OCPCNT, 4U>;
                using Value5 = FieldValue<OCPCNT, 5U>;
                using Value6 = FieldValue<OCPCNT, 6U>;
                using Value7 = FieldValue<OCPCNT, 7U>;
            };

            struct PCPEN : public RegisterField<CTRL1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCPEN, 0U>;
                using Value1 = FieldValue<PCPEN, 1U>;
            };

            struct OCPEN : public RegisterField<CTRL1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OCPEN, 0U>;
                using Value1 = FieldValue<OCPEN, 1U>;
            };

            struct PCAUTOEN : public RegisterField<CTRL1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCAUTOEN, 0U>;
                using Value1 = FieldValue<PCAUTOEN, 1U>;
            };

            struct VMSGEN : public RegisterField<CTRL1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<VMSGEN, 0U>;
                using Value1 = FieldValue<VMSGEN, 1U>;
            };

            struct SQEN : public RegisterField<CTRL1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SQEN, 0U>;
                using Value1 = FieldValue<SQEN, 1U>;
            };

            struct PCCEIEN : public RegisterField<CTRL1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCCEIEN, 0U>;
                using Value1 = FieldValue<PCCEIEN, 1U>;
            };

            struct VMORIEN : public RegisterField<CTRL1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<VMORIEN, 0U>;
                using Value1 = FieldValue<VMORIEN, 1U>;
            };

            struct CCEIEN : public RegisterField<CTRL1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CCEIEN, 0U>;
                using Value1 = FieldValue<CCEIEN, 1U>;
            };

            struct VMCSEL : public RegisterField<CTRL1, 0, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<VMCSEL, 0U>;
                using Value1 = FieldValue<VMCSEL, 1U>;
                using Value2 = FieldValue<VMCSEL, 2U>;
                using Value3 = FieldValue<VMCSEL, 3U>;
                using Value4 = FieldValue<VMCSEL, 4U>;
                using Value5 = FieldValue<VMCSEL, 5U>;
                using Value6 = FieldValue<VMCSEL, 6U>;
                using Value7 = FieldValue<VMCSEL, 7U>;
                using Value8 = FieldValue<VMCSEL, 8U>;
                using Value9 = FieldValue<VMCSEL, 9U>;
                using Value10 = FieldValue<VMCSEL, 10U>;
                using Value11 = FieldValue<VMCSEL, 11U>;
                using Value12 = FieldValue<VMCSEL, 12U>;
                using Value13 = FieldValue<VMCSEL, 13U>;
                using Value14 = FieldValue<VMCSEL, 14U>;
                using Value15 = FieldValue<VMCSEL, 15U>;
                using Value16 = FieldValue<VMCSEL, 16U>;
                using Value17 = FieldValue<VMCSEL, 17U>;
                using Value18 = FieldValue<VMCSEL, 18U>;
                using Value19 = FieldValue<VMCSEL, 19U>;
                using Value20 = FieldValue<VMCSEL, 20U>;
                using Value21 = FieldValue<VMCSEL, 21U>;
                using Value22 = FieldValue<VMCSEL, 22U>;
                using Value23 = FieldValue<VMCSEL, 23U>;
                using Value24 = FieldValue<VMCSEL, 24U>;
                using Value25 = FieldValue<VMCSEL, 25U>;
                using Value26 = FieldValue<VMCSEL, 26U>;
                using Value27 = FieldValue<VMCSEL, 27U>;
                using Value28 = FieldValue<VMCSEL, 28U>;
                using Value29 = FieldValue<VMCSEL, 29U>;
                using Value30 = FieldValue<VMCSEL, 30U>;
                using Value31 = FieldValue<VMCSEL, 31U>;
            };

        };

        struct CTRL2 : public Register<0x40012808, 32, ReadWriteMode>
        {
            struct OCTESEL_H : public RegisterField<CTRL2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OCTESEL_H, 0U>;
                using Value1 = FieldValue<OCTESEL_H, 1U>;
            };

            struct PCTESEL_H : public RegisterField<CTRL2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCTESEL_H, 0U>;
                using Value1 = FieldValue<PCTESEL_H, 1U>;
            };

            struct OCSWTRG : public RegisterField<CTRL2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OCSWTRG, 0U>;
                using Value1 = FieldValue<OCSWTRG, 1U>;
            };

            struct PCSWTRG : public RegisterField<CTRL2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCSWTRG, 0U>;
                using Value1 = FieldValue<PCSWTRG, 1U>;
            };

            struct OCTEN : public RegisterField<CTRL2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OCTEN, 0U>;
                using Value1 = FieldValue<OCTEN, 1U>;
            };

            struct OCTESEL_L : public RegisterField<CTRL2, 17, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<OCTESEL_L, 0U>;
                using Value1 = FieldValue<OCTESEL_L, 1U>;
                using Value2 = FieldValue<OCTESEL_L, 2U>;
                using Value3 = FieldValue<OCTESEL_L, 3U>;
                using Value4 = FieldValue<OCTESEL_L, 4U>;
                using Value5 = FieldValue<OCTESEL_L, 5U>;
                using Value6 = FieldValue<OCTESEL_L, 6U>;
                using Value7 = FieldValue<OCTESEL_L, 7U>;
            };

            struct PCTEN : public RegisterField<CTRL2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCTEN, 0U>;
                using Value1 = FieldValue<PCTEN, 1U>;
            };

            struct PCTESEL_L : public RegisterField<CTRL2, 12, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<PCTESEL_L, 0U>;
                using Value1 = FieldValue<PCTESEL_L, 1U>;
                using Value2 = FieldValue<PCTESEL_L, 2U>;
                using Value3 = FieldValue<PCTESEL_L, 3U>;
                using Value4 = FieldValue<PCTESEL_L, 4U>;
                using Value5 = FieldValue<PCTESEL_L, 5U>;
                using Value6 = FieldValue<PCTESEL_L, 6U>;
                using Value7 = FieldValue<PCTESEL_L, 7U>;
            };

            struct DTALIGN : public RegisterField<CTRL2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTALIGN, 0U>;
                using Value1 = FieldValue<DTALIGN, 1U>;
            };

            struct ADCALINIT : public RegisterField<CTRL2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADCALINIT, 0U>;
                using Value1 = FieldValue<ADCALINIT, 1U>;
            };

            struct ADCAL : public RegisterField<CTRL2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADCAL, 0U>;
                using Value1 = FieldValue<ADCAL, 1U>;
            };

            struct RPEN : public RegisterField<CTRL2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RPEN, 0U>;
                using Value1 = FieldValue<RPEN, 1U>;
            };

            struct ADCEN : public RegisterField<CTRL2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADCEN, 0U>;
                using Value1 = FieldValue<ADCEN, 1U>;
            };

        };

        struct SPT1 : public Register<0x4001280C, 32, ReadWriteMode>
        {
            struct CSPT17 : public RegisterField<SPT1, 21, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT17, 0U>;
                using Value1 = FieldValue<CSPT17, 1U>;
                using Value2 = FieldValue<CSPT17, 2U>;
                using Value3 = FieldValue<CSPT17, 3U>;
                using Value4 = FieldValue<CSPT17, 4U>;
                using Value5 = FieldValue<CSPT17, 5U>;
                using Value6 = FieldValue<CSPT17, 6U>;
                using Value7 = FieldValue<CSPT17, 7U>;
            };

            struct CSPT16 : public RegisterField<SPT1, 18, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT16, 0U>;
                using Value1 = FieldValue<CSPT16, 1U>;
                using Value2 = FieldValue<CSPT16, 2U>;
                using Value3 = FieldValue<CSPT16, 3U>;
                using Value4 = FieldValue<CSPT16, 4U>;
                using Value5 = FieldValue<CSPT16, 5U>;
                using Value6 = FieldValue<CSPT16, 6U>;
                using Value7 = FieldValue<CSPT16, 7U>;
            };

            struct CSPT15 : public RegisterField<SPT1, 15, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT15, 0U>;
                using Value1 = FieldValue<CSPT15, 1U>;
                using Value2 = FieldValue<CSPT15, 2U>;
                using Value3 = FieldValue<CSPT15, 3U>;
                using Value4 = FieldValue<CSPT15, 4U>;
                using Value5 = FieldValue<CSPT15, 5U>;
                using Value6 = FieldValue<CSPT15, 6U>;
                using Value7 = FieldValue<CSPT15, 7U>;
            };

            struct CSPT14 : public RegisterField<SPT1, 12, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT14, 0U>;
                using Value1 = FieldValue<CSPT14, 1U>;
                using Value2 = FieldValue<CSPT14, 2U>;
                using Value3 = FieldValue<CSPT14, 3U>;
                using Value4 = FieldValue<CSPT14, 4U>;
                using Value5 = FieldValue<CSPT14, 5U>;
                using Value6 = FieldValue<CSPT14, 6U>;
                using Value7 = FieldValue<CSPT14, 7U>;
            };

            struct CSPT13 : public RegisterField<SPT1, 9, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT13, 0U>;
                using Value1 = FieldValue<CSPT13, 1U>;
                using Value2 = FieldValue<CSPT13, 2U>;
                using Value3 = FieldValue<CSPT13, 3U>;
                using Value4 = FieldValue<CSPT13, 4U>;
                using Value5 = FieldValue<CSPT13, 5U>;
                using Value6 = FieldValue<CSPT13, 6U>;
                using Value7 = FieldValue<CSPT13, 7U>;
            };

            struct CSPT12 : public RegisterField<SPT1, 6, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT12, 0U>;
                using Value1 = FieldValue<CSPT12, 1U>;
                using Value2 = FieldValue<CSPT12, 2U>;
                using Value3 = FieldValue<CSPT12, 3U>;
                using Value4 = FieldValue<CSPT12, 4U>;
                using Value5 = FieldValue<CSPT12, 5U>;
                using Value6 = FieldValue<CSPT12, 6U>;
                using Value7 = FieldValue<CSPT12, 7U>;
            };

            struct CSPT11 : public RegisterField<SPT1, 3, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT11, 0U>;
                using Value1 = FieldValue<CSPT11, 1U>;
                using Value2 = FieldValue<CSPT11, 2U>;
                using Value3 = FieldValue<CSPT11, 3U>;
                using Value4 = FieldValue<CSPT11, 4U>;
                using Value5 = FieldValue<CSPT11, 5U>;
                using Value6 = FieldValue<CSPT11, 6U>;
                using Value7 = FieldValue<CSPT11, 7U>;
            };

            struct CSPT10 : public RegisterField<SPT1, 0, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT10, 0U>;
                using Value1 = FieldValue<CSPT10, 1U>;
                using Value2 = FieldValue<CSPT10, 2U>;
                using Value3 = FieldValue<CSPT10, 3U>;
                using Value4 = FieldValue<CSPT10, 4U>;
                using Value5 = FieldValue<CSPT10, 5U>;
                using Value6 = FieldValue<CSPT10, 6U>;
                using Value7 = FieldValue<CSPT10, 7U>;
            };

        };

        struct SPT2 : public Register<0x40012810, 32, ReadWriteMode>
        {
            struct CSPT9 : public RegisterField<SPT2, 27, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT9, 0U>;
                using Value1 = FieldValue<CSPT9, 1U>;
                using Value2 = FieldValue<CSPT9, 2U>;
                using Value3 = FieldValue<CSPT9, 3U>;
                using Value4 = FieldValue<CSPT9, 4U>;
                using Value5 = FieldValue<CSPT9, 5U>;
                using Value6 = FieldValue<CSPT9, 6U>;
                using Value7 = FieldValue<CSPT9, 7U>;
            };

            struct CSPT8 : public RegisterField<SPT2, 24, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT8, 0U>;
                using Value1 = FieldValue<CSPT8, 1U>;
                using Value2 = FieldValue<CSPT8, 2U>;
                using Value3 = FieldValue<CSPT8, 3U>;
                using Value4 = FieldValue<CSPT8, 4U>;
                using Value5 = FieldValue<CSPT8, 5U>;
                using Value6 = FieldValue<CSPT8, 6U>;
                using Value7 = FieldValue<CSPT8, 7U>;
            };

            struct CSPT7 : public RegisterField<SPT2, 21, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT7, 0U>;
                using Value1 = FieldValue<CSPT7, 1U>;
                using Value2 = FieldValue<CSPT7, 2U>;
                using Value3 = FieldValue<CSPT7, 3U>;
                using Value4 = FieldValue<CSPT7, 4U>;
                using Value5 = FieldValue<CSPT7, 5U>;
                using Value6 = FieldValue<CSPT7, 6U>;
                using Value7 = FieldValue<CSPT7, 7U>;
            };

            struct CSPT6 : public RegisterField<SPT2, 18, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT6, 0U>;
                using Value1 = FieldValue<CSPT6, 1U>;
                using Value2 = FieldValue<CSPT6, 2U>;
                using Value3 = FieldValue<CSPT6, 3U>;
                using Value4 = FieldValue<CSPT6, 4U>;
                using Value5 = FieldValue<CSPT6, 5U>;
                using Value6 = FieldValue<CSPT6, 6U>;
                using Value7 = FieldValue<CSPT6, 7U>;
            };

            struct CSPT5 : public RegisterField<SPT2, 15, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT5, 0U>;
                using Value1 = FieldValue<CSPT5, 1U>;
                using Value2 = FieldValue<CSPT5, 2U>;
                using Value3 = FieldValue<CSPT5, 3U>;
                using Value4 = FieldValue<CSPT5, 4U>;
                using Value5 = FieldValue<CSPT5, 5U>;
                using Value6 = FieldValue<CSPT5, 6U>;
                using Value7 = FieldValue<CSPT5, 7U>;
            };

            struct CSPT4 : public RegisterField<SPT2, 12, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT4, 0U>;
                using Value1 = FieldValue<CSPT4, 1U>;
                using Value2 = FieldValue<CSPT4, 2U>;
                using Value3 = FieldValue<CSPT4, 3U>;
                using Value4 = FieldValue<CSPT4, 4U>;
                using Value5 = FieldValue<CSPT4, 5U>;
                using Value6 = FieldValue<CSPT4, 6U>;
                using Value7 = FieldValue<CSPT4, 7U>;
            };

            struct CSPT3 : public RegisterField<SPT2, 9, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT3, 0U>;
                using Value1 = FieldValue<CSPT3, 1U>;
                using Value2 = FieldValue<CSPT3, 2U>;
                using Value3 = FieldValue<CSPT3, 3U>;
                using Value4 = FieldValue<CSPT3, 4U>;
                using Value5 = FieldValue<CSPT3, 5U>;
                using Value6 = FieldValue<CSPT3, 6U>;
                using Value7 = FieldValue<CSPT3, 7U>;
            };

            struct CSPT2 : public RegisterField<SPT2, 6, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT2, 0U>;
                using Value1 = FieldValue<CSPT2, 1U>;
                using Value2 = FieldValue<CSPT2, 2U>;
                using Value3 = FieldValue<CSPT2, 3U>;
                using Value4 = FieldValue<CSPT2, 4U>;
                using Value5 = FieldValue<CSPT2, 5U>;
                using Value6 = FieldValue<CSPT2, 6U>;
                using Value7 = FieldValue<CSPT2, 7U>;
            };

            struct CSPT1 : public RegisterField<SPT2, 3, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT1, 0U>;
                using Value1 = FieldValue<CSPT1, 1U>;
                using Value2 = FieldValue<CSPT1, 2U>;
                using Value3 = FieldValue<CSPT1, 3U>;
                using Value4 = FieldValue<CSPT1, 4U>;
                using Value5 = FieldValue<CSPT1, 5U>;
                using Value6 = FieldValue<CSPT1, 6U>;
                using Value7 = FieldValue<CSPT1, 7U>;
            };

            struct CSPT0 : public RegisterField<SPT2, 0, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CSPT0, 0U>;
                using Value1 = FieldValue<CSPT0, 1U>;
                using Value2 = FieldValue<CSPT0, 2U>;
                using Value3 = FieldValue<CSPT0, 3U>;
                using Value4 = FieldValue<CSPT0, 4U>;
                using Value5 = FieldValue<CSPT0, 5U>;
                using Value6 = FieldValue<CSPT0, 6U>;
                using Value7 = FieldValue<CSPT0, 7U>;
            };

        };

        struct PCDTO1 : public Register<0x40012814, 32, ReadWriteMode>
        {
            struct PCDTO1Field : public RegisterField<PCDTO1, 0, 12, ReadWriteMode>
            {
            };

        };

        struct PCDTO2 : public Register<0x40012818, 32, ReadWriteMode>
        {
            struct PCDTO2Field : public RegisterField<PCDTO2, 0, 12, ReadWriteMode>
            {
            };

        };

        struct PCDTO3 : public Register<0x4001281C, 32, ReadWriteMode>
        {
            struct PCDTO3Field : public RegisterField<PCDTO3, 0, 12, ReadWriteMode>
            {
            };

        };

        struct PCDTO4 : public Register<0x40012820, 32, ReadWriteMode>
        {
            struct PCDTO4Field : public RegisterField<PCDTO4, 0, 12, ReadWriteMode>
            {
            };

        };

        struct VMHB : public Register<0x40012824, 32, ReadWriteMode>
        {
            struct VMHBField : public RegisterField<VMHB, 0, 12, ReadWriteMode>
            {
            };

        };

        struct VMLB : public Register<0x40012828, 32, ReadWriteMode>
        {
            struct VMLBField : public RegisterField<VMLB, 0, 12, ReadWriteMode>
            {
            };

        };

        struct OSQ1 : public Register<0x4001282C, 32, ReadWriteMode>
        {
            struct OCLEN : public RegisterField<OSQ1, 20, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<OCLEN, 0U>;
                using Value1 = FieldValue<OCLEN, 1U>;
                using Value2 = FieldValue<OCLEN, 2U>;
                using Value3 = FieldValue<OCLEN, 3U>;
                using Value4 = FieldValue<OCLEN, 4U>;
                using Value5 = FieldValue<OCLEN, 5U>;
                using Value6 = FieldValue<OCLEN, 6U>;
                using Value7 = FieldValue<OCLEN, 7U>;
                using Value8 = FieldValue<OCLEN, 8U>;
                using Value9 = FieldValue<OCLEN, 9U>;
                using Value10 = FieldValue<OCLEN, 10U>;
                using Value11 = FieldValue<OCLEN, 11U>;
                using Value12 = FieldValue<OCLEN, 12U>;
                using Value13 = FieldValue<OCLEN, 13U>;
                using Value14 = FieldValue<OCLEN, 14U>;
                using Value15 = FieldValue<OCLEN, 15U>;
            };

            struct OSN16 : public RegisterField<OSQ1, 15, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN16, 0U>;
                using Value1 = FieldValue<OSN16, 1U>;
                using Value2 = FieldValue<OSN16, 2U>;
                using Value3 = FieldValue<OSN16, 3U>;
                using Value4 = FieldValue<OSN16, 4U>;
                using Value5 = FieldValue<OSN16, 5U>;
                using Value6 = FieldValue<OSN16, 6U>;
                using Value7 = FieldValue<OSN16, 7U>;
                using Value8 = FieldValue<OSN16, 8U>;
                using Value9 = FieldValue<OSN16, 9U>;
                using Value10 = FieldValue<OSN16, 10U>;
                using Value11 = FieldValue<OSN16, 11U>;
                using Value12 = FieldValue<OSN16, 12U>;
                using Value13 = FieldValue<OSN16, 13U>;
                using Value14 = FieldValue<OSN16, 14U>;
                using Value15 = FieldValue<OSN16, 15U>;
                using Value16 = FieldValue<OSN16, 16U>;
                using Value17 = FieldValue<OSN16, 17U>;
                using Value18 = FieldValue<OSN16, 18U>;
                using Value19 = FieldValue<OSN16, 19U>;
                using Value20 = FieldValue<OSN16, 20U>;
                using Value21 = FieldValue<OSN16, 21U>;
                using Value22 = FieldValue<OSN16, 22U>;
                using Value23 = FieldValue<OSN16, 23U>;
                using Value24 = FieldValue<OSN16, 24U>;
                using Value25 = FieldValue<OSN16, 25U>;
                using Value26 = FieldValue<OSN16, 26U>;
                using Value27 = FieldValue<OSN16, 27U>;
                using Value28 = FieldValue<OSN16, 28U>;
                using Value29 = FieldValue<OSN16, 29U>;
                using Value30 = FieldValue<OSN16, 30U>;
                using Value31 = FieldValue<OSN16, 31U>;
            };

            struct OSN15 : public RegisterField<OSQ1, 10, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN15, 0U>;
                using Value1 = FieldValue<OSN15, 1U>;
                using Value2 = FieldValue<OSN15, 2U>;
                using Value3 = FieldValue<OSN15, 3U>;
                using Value4 = FieldValue<OSN15, 4U>;
                using Value5 = FieldValue<OSN15, 5U>;
                using Value6 = FieldValue<OSN15, 6U>;
                using Value7 = FieldValue<OSN15, 7U>;
                using Value8 = FieldValue<OSN15, 8U>;
                using Value9 = FieldValue<OSN15, 9U>;
                using Value10 = FieldValue<OSN15, 10U>;
                using Value11 = FieldValue<OSN15, 11U>;
                using Value12 = FieldValue<OSN15, 12U>;
                using Value13 = FieldValue<OSN15, 13U>;
                using Value14 = FieldValue<OSN15, 14U>;
                using Value15 = FieldValue<OSN15, 15U>;
                using Value16 = FieldValue<OSN15, 16U>;
                using Value17 = FieldValue<OSN15, 17U>;
                using Value18 = FieldValue<OSN15, 18U>;
                using Value19 = FieldValue<OSN15, 19U>;
                using Value20 = FieldValue<OSN15, 20U>;
                using Value21 = FieldValue<OSN15, 21U>;
                using Value22 = FieldValue<OSN15, 22U>;
                using Value23 = FieldValue<OSN15, 23U>;
                using Value24 = FieldValue<OSN15, 24U>;
                using Value25 = FieldValue<OSN15, 25U>;
                using Value26 = FieldValue<OSN15, 26U>;
                using Value27 = FieldValue<OSN15, 27U>;
                using Value28 = FieldValue<OSN15, 28U>;
                using Value29 = FieldValue<OSN15, 29U>;
                using Value30 = FieldValue<OSN15, 30U>;
                using Value31 = FieldValue<OSN15, 31U>;
            };

            struct OSN14 : public RegisterField<OSQ1, 5, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN14, 0U>;
                using Value1 = FieldValue<OSN14, 1U>;
                using Value2 = FieldValue<OSN14, 2U>;
                using Value3 = FieldValue<OSN14, 3U>;
                using Value4 = FieldValue<OSN14, 4U>;
                using Value5 = FieldValue<OSN14, 5U>;
                using Value6 = FieldValue<OSN14, 6U>;
                using Value7 = FieldValue<OSN14, 7U>;
                using Value8 = FieldValue<OSN14, 8U>;
                using Value9 = FieldValue<OSN14, 9U>;
                using Value10 = FieldValue<OSN14, 10U>;
                using Value11 = FieldValue<OSN14, 11U>;
                using Value12 = FieldValue<OSN14, 12U>;
                using Value13 = FieldValue<OSN14, 13U>;
                using Value14 = FieldValue<OSN14, 14U>;
                using Value15 = FieldValue<OSN14, 15U>;
                using Value16 = FieldValue<OSN14, 16U>;
                using Value17 = FieldValue<OSN14, 17U>;
                using Value18 = FieldValue<OSN14, 18U>;
                using Value19 = FieldValue<OSN14, 19U>;
                using Value20 = FieldValue<OSN14, 20U>;
                using Value21 = FieldValue<OSN14, 21U>;
                using Value22 = FieldValue<OSN14, 22U>;
                using Value23 = FieldValue<OSN14, 23U>;
                using Value24 = FieldValue<OSN14, 24U>;
                using Value25 = FieldValue<OSN14, 25U>;
                using Value26 = FieldValue<OSN14, 26U>;
                using Value27 = FieldValue<OSN14, 27U>;
                using Value28 = FieldValue<OSN14, 28U>;
                using Value29 = FieldValue<OSN14, 29U>;
                using Value30 = FieldValue<OSN14, 30U>;
                using Value31 = FieldValue<OSN14, 31U>;
            };

            struct OSN13 : public RegisterField<OSQ1, 0, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN13, 0U>;
                using Value1 = FieldValue<OSN13, 1U>;
                using Value2 = FieldValue<OSN13, 2U>;
                using Value3 = FieldValue<OSN13, 3U>;
                using Value4 = FieldValue<OSN13, 4U>;
                using Value5 = FieldValue<OSN13, 5U>;
                using Value6 = FieldValue<OSN13, 6U>;
                using Value7 = FieldValue<OSN13, 7U>;
                using Value8 = FieldValue<OSN13, 8U>;
                using Value9 = FieldValue<OSN13, 9U>;
                using Value10 = FieldValue<OSN13, 10U>;
                using Value11 = FieldValue<OSN13, 11U>;
                using Value12 = FieldValue<OSN13, 12U>;
                using Value13 = FieldValue<OSN13, 13U>;
                using Value14 = FieldValue<OSN13, 14U>;
                using Value15 = FieldValue<OSN13, 15U>;
                using Value16 = FieldValue<OSN13, 16U>;
                using Value17 = FieldValue<OSN13, 17U>;
                using Value18 = FieldValue<OSN13, 18U>;
                using Value19 = FieldValue<OSN13, 19U>;
                using Value20 = FieldValue<OSN13, 20U>;
                using Value21 = FieldValue<OSN13, 21U>;
                using Value22 = FieldValue<OSN13, 22U>;
                using Value23 = FieldValue<OSN13, 23U>;
                using Value24 = FieldValue<OSN13, 24U>;
                using Value25 = FieldValue<OSN13, 25U>;
                using Value26 = FieldValue<OSN13, 26U>;
                using Value27 = FieldValue<OSN13, 27U>;
                using Value28 = FieldValue<OSN13, 28U>;
                using Value29 = FieldValue<OSN13, 29U>;
                using Value30 = FieldValue<OSN13, 30U>;
                using Value31 = FieldValue<OSN13, 31U>;
            };

        };

        struct OSQ2 : public Register<0x40012830, 32, ReadWriteMode>
        {
            struct OSN12 : public RegisterField<OSQ2, 25, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN12, 0U>;
                using Value1 = FieldValue<OSN12, 1U>;
                using Value2 = FieldValue<OSN12, 2U>;
                using Value3 = FieldValue<OSN12, 3U>;
                using Value4 = FieldValue<OSN12, 4U>;
                using Value5 = FieldValue<OSN12, 5U>;
                using Value6 = FieldValue<OSN12, 6U>;
                using Value7 = FieldValue<OSN12, 7U>;
                using Value8 = FieldValue<OSN12, 8U>;
                using Value9 = FieldValue<OSN12, 9U>;
                using Value10 = FieldValue<OSN12, 10U>;
                using Value11 = FieldValue<OSN12, 11U>;
                using Value12 = FieldValue<OSN12, 12U>;
                using Value13 = FieldValue<OSN12, 13U>;
                using Value14 = FieldValue<OSN12, 14U>;
                using Value15 = FieldValue<OSN12, 15U>;
                using Value16 = FieldValue<OSN12, 16U>;
                using Value17 = FieldValue<OSN12, 17U>;
                using Value18 = FieldValue<OSN12, 18U>;
                using Value19 = FieldValue<OSN12, 19U>;
                using Value20 = FieldValue<OSN12, 20U>;
                using Value21 = FieldValue<OSN12, 21U>;
                using Value22 = FieldValue<OSN12, 22U>;
                using Value23 = FieldValue<OSN12, 23U>;
                using Value24 = FieldValue<OSN12, 24U>;
                using Value25 = FieldValue<OSN12, 25U>;
                using Value26 = FieldValue<OSN12, 26U>;
                using Value27 = FieldValue<OSN12, 27U>;
                using Value28 = FieldValue<OSN12, 28U>;
                using Value29 = FieldValue<OSN12, 29U>;
                using Value30 = FieldValue<OSN12, 30U>;
                using Value31 = FieldValue<OSN12, 31U>;
            };

            struct OSN11 : public RegisterField<OSQ2, 20, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN11, 0U>;
                using Value1 = FieldValue<OSN11, 1U>;
                using Value2 = FieldValue<OSN11, 2U>;
                using Value3 = FieldValue<OSN11, 3U>;
                using Value4 = FieldValue<OSN11, 4U>;
                using Value5 = FieldValue<OSN11, 5U>;
                using Value6 = FieldValue<OSN11, 6U>;
                using Value7 = FieldValue<OSN11, 7U>;
                using Value8 = FieldValue<OSN11, 8U>;
                using Value9 = FieldValue<OSN11, 9U>;
                using Value10 = FieldValue<OSN11, 10U>;
                using Value11 = FieldValue<OSN11, 11U>;
                using Value12 = FieldValue<OSN11, 12U>;
                using Value13 = FieldValue<OSN11, 13U>;
                using Value14 = FieldValue<OSN11, 14U>;
                using Value15 = FieldValue<OSN11, 15U>;
                using Value16 = FieldValue<OSN11, 16U>;
                using Value17 = FieldValue<OSN11, 17U>;
                using Value18 = FieldValue<OSN11, 18U>;
                using Value19 = FieldValue<OSN11, 19U>;
                using Value20 = FieldValue<OSN11, 20U>;
                using Value21 = FieldValue<OSN11, 21U>;
                using Value22 = FieldValue<OSN11, 22U>;
                using Value23 = FieldValue<OSN11, 23U>;
                using Value24 = FieldValue<OSN11, 24U>;
                using Value25 = FieldValue<OSN11, 25U>;
                using Value26 = FieldValue<OSN11, 26U>;
                using Value27 = FieldValue<OSN11, 27U>;
                using Value28 = FieldValue<OSN11, 28U>;
                using Value29 = FieldValue<OSN11, 29U>;
                using Value30 = FieldValue<OSN11, 30U>;
                using Value31 = FieldValue<OSN11, 31U>;
            };

            struct OSN10 : public RegisterField<OSQ2, 15, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN10, 0U>;
                using Value1 = FieldValue<OSN10, 1U>;
                using Value2 = FieldValue<OSN10, 2U>;
                using Value3 = FieldValue<OSN10, 3U>;
                using Value4 = FieldValue<OSN10, 4U>;
                using Value5 = FieldValue<OSN10, 5U>;
                using Value6 = FieldValue<OSN10, 6U>;
                using Value7 = FieldValue<OSN10, 7U>;
                using Value8 = FieldValue<OSN10, 8U>;
                using Value9 = FieldValue<OSN10, 9U>;
                using Value10 = FieldValue<OSN10, 10U>;
                using Value11 = FieldValue<OSN10, 11U>;
                using Value12 = FieldValue<OSN10, 12U>;
                using Value13 = FieldValue<OSN10, 13U>;
                using Value14 = FieldValue<OSN10, 14U>;
                using Value15 = FieldValue<OSN10, 15U>;
                using Value16 = FieldValue<OSN10, 16U>;
                using Value17 = FieldValue<OSN10, 17U>;
                using Value18 = FieldValue<OSN10, 18U>;
                using Value19 = FieldValue<OSN10, 19U>;
                using Value20 = FieldValue<OSN10, 20U>;
                using Value21 = FieldValue<OSN10, 21U>;
                using Value22 = FieldValue<OSN10, 22U>;
                using Value23 = FieldValue<OSN10, 23U>;
                using Value24 = FieldValue<OSN10, 24U>;
                using Value25 = FieldValue<OSN10, 25U>;
                using Value26 = FieldValue<OSN10, 26U>;
                using Value27 = FieldValue<OSN10, 27U>;
                using Value28 = FieldValue<OSN10, 28U>;
                using Value29 = FieldValue<OSN10, 29U>;
                using Value30 = FieldValue<OSN10, 30U>;
                using Value31 = FieldValue<OSN10, 31U>;
            };

            struct OSN9 : public RegisterField<OSQ2, 10, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN9, 0U>;
                using Value1 = FieldValue<OSN9, 1U>;
                using Value2 = FieldValue<OSN9, 2U>;
                using Value3 = FieldValue<OSN9, 3U>;
                using Value4 = FieldValue<OSN9, 4U>;
                using Value5 = FieldValue<OSN9, 5U>;
                using Value6 = FieldValue<OSN9, 6U>;
                using Value7 = FieldValue<OSN9, 7U>;
                using Value8 = FieldValue<OSN9, 8U>;
                using Value9 = FieldValue<OSN9, 9U>;
                using Value10 = FieldValue<OSN9, 10U>;
                using Value11 = FieldValue<OSN9, 11U>;
                using Value12 = FieldValue<OSN9, 12U>;
                using Value13 = FieldValue<OSN9, 13U>;
                using Value14 = FieldValue<OSN9, 14U>;
                using Value15 = FieldValue<OSN9, 15U>;
                using Value16 = FieldValue<OSN9, 16U>;
                using Value17 = FieldValue<OSN9, 17U>;
                using Value18 = FieldValue<OSN9, 18U>;
                using Value19 = FieldValue<OSN9, 19U>;
                using Value20 = FieldValue<OSN9, 20U>;
                using Value21 = FieldValue<OSN9, 21U>;
                using Value22 = FieldValue<OSN9, 22U>;
                using Value23 = FieldValue<OSN9, 23U>;
                using Value24 = FieldValue<OSN9, 24U>;
                using Value25 = FieldValue<OSN9, 25U>;
                using Value26 = FieldValue<OSN9, 26U>;
                using Value27 = FieldValue<OSN9, 27U>;
                using Value28 = FieldValue<OSN9, 28U>;
                using Value29 = FieldValue<OSN9, 29U>;
                using Value30 = FieldValue<OSN9, 30U>;
                using Value31 = FieldValue<OSN9, 31U>;
            };

            struct OSN8 : public RegisterField<OSQ2, 5, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN8, 0U>;
                using Value1 = FieldValue<OSN8, 1U>;
                using Value2 = FieldValue<OSN8, 2U>;
                using Value3 = FieldValue<OSN8, 3U>;
                using Value4 = FieldValue<OSN8, 4U>;
                using Value5 = FieldValue<OSN8, 5U>;
                using Value6 = FieldValue<OSN8, 6U>;
                using Value7 = FieldValue<OSN8, 7U>;
                using Value8 = FieldValue<OSN8, 8U>;
                using Value9 = FieldValue<OSN8, 9U>;
                using Value10 = FieldValue<OSN8, 10U>;
                using Value11 = FieldValue<OSN8, 11U>;
                using Value12 = FieldValue<OSN8, 12U>;
                using Value13 = FieldValue<OSN8, 13U>;
                using Value14 = FieldValue<OSN8, 14U>;
                using Value15 = FieldValue<OSN8, 15U>;
                using Value16 = FieldValue<OSN8, 16U>;
                using Value17 = FieldValue<OSN8, 17U>;
                using Value18 = FieldValue<OSN8, 18U>;
                using Value19 = FieldValue<OSN8, 19U>;
                using Value20 = FieldValue<OSN8, 20U>;
                using Value21 = FieldValue<OSN8, 21U>;
                using Value22 = FieldValue<OSN8, 22U>;
                using Value23 = FieldValue<OSN8, 23U>;
                using Value24 = FieldValue<OSN8, 24U>;
                using Value25 = FieldValue<OSN8, 25U>;
                using Value26 = FieldValue<OSN8, 26U>;
                using Value27 = FieldValue<OSN8, 27U>;
                using Value28 = FieldValue<OSN8, 28U>;
                using Value29 = FieldValue<OSN8, 29U>;
                using Value30 = FieldValue<OSN8, 30U>;
                using Value31 = FieldValue<OSN8, 31U>;
            };

            struct OSN7 : public RegisterField<OSQ2, 0, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN7, 0U>;
                using Value1 = FieldValue<OSN7, 1U>;
                using Value2 = FieldValue<OSN7, 2U>;
                using Value3 = FieldValue<OSN7, 3U>;
                using Value4 = FieldValue<OSN7, 4U>;
                using Value5 = FieldValue<OSN7, 5U>;
                using Value6 = FieldValue<OSN7, 6U>;
                using Value7 = FieldValue<OSN7, 7U>;
                using Value8 = FieldValue<OSN7, 8U>;
                using Value9 = FieldValue<OSN7, 9U>;
                using Value10 = FieldValue<OSN7, 10U>;
                using Value11 = FieldValue<OSN7, 11U>;
                using Value12 = FieldValue<OSN7, 12U>;
                using Value13 = FieldValue<OSN7, 13U>;
                using Value14 = FieldValue<OSN7, 14U>;
                using Value15 = FieldValue<OSN7, 15U>;
                using Value16 = FieldValue<OSN7, 16U>;
                using Value17 = FieldValue<OSN7, 17U>;
                using Value18 = FieldValue<OSN7, 18U>;
                using Value19 = FieldValue<OSN7, 19U>;
                using Value20 = FieldValue<OSN7, 20U>;
                using Value21 = FieldValue<OSN7, 21U>;
                using Value22 = FieldValue<OSN7, 22U>;
                using Value23 = FieldValue<OSN7, 23U>;
                using Value24 = FieldValue<OSN7, 24U>;
                using Value25 = FieldValue<OSN7, 25U>;
                using Value26 = FieldValue<OSN7, 26U>;
                using Value27 = FieldValue<OSN7, 27U>;
                using Value28 = FieldValue<OSN7, 28U>;
                using Value29 = FieldValue<OSN7, 29U>;
                using Value30 = FieldValue<OSN7, 30U>;
                using Value31 = FieldValue<OSN7, 31U>;
            };

        };

        struct OSQ3 : public Register<0x40012834, 32, ReadWriteMode>
        {
            struct OSN6 : public RegisterField<OSQ3, 25, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN6, 0U>;
                using Value1 = FieldValue<OSN6, 1U>;
                using Value2 = FieldValue<OSN6, 2U>;
                using Value3 = FieldValue<OSN6, 3U>;
                using Value4 = FieldValue<OSN6, 4U>;
                using Value5 = FieldValue<OSN6, 5U>;
                using Value6 = FieldValue<OSN6, 6U>;
                using Value7 = FieldValue<OSN6, 7U>;
                using Value8 = FieldValue<OSN6, 8U>;
                using Value9 = FieldValue<OSN6, 9U>;
                using Value10 = FieldValue<OSN6, 10U>;
                using Value11 = FieldValue<OSN6, 11U>;
                using Value12 = FieldValue<OSN6, 12U>;
                using Value13 = FieldValue<OSN6, 13U>;
                using Value14 = FieldValue<OSN6, 14U>;
                using Value15 = FieldValue<OSN6, 15U>;
                using Value16 = FieldValue<OSN6, 16U>;
                using Value17 = FieldValue<OSN6, 17U>;
                using Value18 = FieldValue<OSN6, 18U>;
                using Value19 = FieldValue<OSN6, 19U>;
                using Value20 = FieldValue<OSN6, 20U>;
                using Value21 = FieldValue<OSN6, 21U>;
                using Value22 = FieldValue<OSN6, 22U>;
                using Value23 = FieldValue<OSN6, 23U>;
                using Value24 = FieldValue<OSN6, 24U>;
                using Value25 = FieldValue<OSN6, 25U>;
                using Value26 = FieldValue<OSN6, 26U>;
                using Value27 = FieldValue<OSN6, 27U>;
                using Value28 = FieldValue<OSN6, 28U>;
                using Value29 = FieldValue<OSN6, 29U>;
                using Value30 = FieldValue<OSN6, 30U>;
                using Value31 = FieldValue<OSN6, 31U>;
            };

            struct OSN5 : public RegisterField<OSQ3, 20, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN5, 0U>;
                using Value1 = FieldValue<OSN5, 1U>;
                using Value2 = FieldValue<OSN5, 2U>;
                using Value3 = FieldValue<OSN5, 3U>;
                using Value4 = FieldValue<OSN5, 4U>;
                using Value5 = FieldValue<OSN5, 5U>;
                using Value6 = FieldValue<OSN5, 6U>;
                using Value7 = FieldValue<OSN5, 7U>;
                using Value8 = FieldValue<OSN5, 8U>;
                using Value9 = FieldValue<OSN5, 9U>;
                using Value10 = FieldValue<OSN5, 10U>;
                using Value11 = FieldValue<OSN5, 11U>;
                using Value12 = FieldValue<OSN5, 12U>;
                using Value13 = FieldValue<OSN5, 13U>;
                using Value14 = FieldValue<OSN5, 14U>;
                using Value15 = FieldValue<OSN5, 15U>;
                using Value16 = FieldValue<OSN5, 16U>;
                using Value17 = FieldValue<OSN5, 17U>;
                using Value18 = FieldValue<OSN5, 18U>;
                using Value19 = FieldValue<OSN5, 19U>;
                using Value20 = FieldValue<OSN5, 20U>;
                using Value21 = FieldValue<OSN5, 21U>;
                using Value22 = FieldValue<OSN5, 22U>;
                using Value23 = FieldValue<OSN5, 23U>;
                using Value24 = FieldValue<OSN5, 24U>;
                using Value25 = FieldValue<OSN5, 25U>;
                using Value26 = FieldValue<OSN5, 26U>;
                using Value27 = FieldValue<OSN5, 27U>;
                using Value28 = FieldValue<OSN5, 28U>;
                using Value29 = FieldValue<OSN5, 29U>;
                using Value30 = FieldValue<OSN5, 30U>;
                using Value31 = FieldValue<OSN5, 31U>;
            };

            struct OSN4 : public RegisterField<OSQ3, 15, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN4, 0U>;
                using Value1 = FieldValue<OSN4, 1U>;
                using Value2 = FieldValue<OSN4, 2U>;
                using Value3 = FieldValue<OSN4, 3U>;
                using Value4 = FieldValue<OSN4, 4U>;
                using Value5 = FieldValue<OSN4, 5U>;
                using Value6 = FieldValue<OSN4, 6U>;
                using Value7 = FieldValue<OSN4, 7U>;
                using Value8 = FieldValue<OSN4, 8U>;
                using Value9 = FieldValue<OSN4, 9U>;
                using Value10 = FieldValue<OSN4, 10U>;
                using Value11 = FieldValue<OSN4, 11U>;
                using Value12 = FieldValue<OSN4, 12U>;
                using Value13 = FieldValue<OSN4, 13U>;
                using Value14 = FieldValue<OSN4, 14U>;
                using Value15 = FieldValue<OSN4, 15U>;
                using Value16 = FieldValue<OSN4, 16U>;
                using Value17 = FieldValue<OSN4, 17U>;
                using Value18 = FieldValue<OSN4, 18U>;
                using Value19 = FieldValue<OSN4, 19U>;
                using Value20 = FieldValue<OSN4, 20U>;
                using Value21 = FieldValue<OSN4, 21U>;
                using Value22 = FieldValue<OSN4, 22U>;
                using Value23 = FieldValue<OSN4, 23U>;
                using Value24 = FieldValue<OSN4, 24U>;
                using Value25 = FieldValue<OSN4, 25U>;
                using Value26 = FieldValue<OSN4, 26U>;
                using Value27 = FieldValue<OSN4, 27U>;
                using Value28 = FieldValue<OSN4, 28U>;
                using Value29 = FieldValue<OSN4, 29U>;
                using Value30 = FieldValue<OSN4, 30U>;
                using Value31 = FieldValue<OSN4, 31U>;
            };

            struct OSN3 : public RegisterField<OSQ3, 10, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN3, 0U>;
                using Value1 = FieldValue<OSN3, 1U>;
                using Value2 = FieldValue<OSN3, 2U>;
                using Value3 = FieldValue<OSN3, 3U>;
                using Value4 = FieldValue<OSN3, 4U>;
                using Value5 = FieldValue<OSN3, 5U>;
                using Value6 = FieldValue<OSN3, 6U>;
                using Value7 = FieldValue<OSN3, 7U>;
                using Value8 = FieldValue<OSN3, 8U>;
                using Value9 = FieldValue<OSN3, 9U>;
                using Value10 = FieldValue<OSN3, 10U>;
                using Value11 = FieldValue<OSN3, 11U>;
                using Value12 = FieldValue<OSN3, 12U>;
                using Value13 = FieldValue<OSN3, 13U>;
                using Value14 = FieldValue<OSN3, 14U>;
                using Value15 = FieldValue<OSN3, 15U>;
                using Value16 = FieldValue<OSN3, 16U>;
                using Value17 = FieldValue<OSN3, 17U>;
                using Value18 = FieldValue<OSN3, 18U>;
                using Value19 = FieldValue<OSN3, 19U>;
                using Value20 = FieldValue<OSN3, 20U>;
                using Value21 = FieldValue<OSN3, 21U>;
                using Value22 = FieldValue<OSN3, 22U>;
                using Value23 = FieldValue<OSN3, 23U>;
                using Value24 = FieldValue<OSN3, 24U>;
                using Value25 = FieldValue<OSN3, 25U>;
                using Value26 = FieldValue<OSN3, 26U>;
                using Value27 = FieldValue<OSN3, 27U>;
                using Value28 = FieldValue<OSN3, 28U>;
                using Value29 = FieldValue<OSN3, 29U>;
                using Value30 = FieldValue<OSN3, 30U>;
                using Value31 = FieldValue<OSN3, 31U>;
            };

            struct OSN2 : public RegisterField<OSQ3, 5, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN2, 0U>;
                using Value1 = FieldValue<OSN2, 1U>;
                using Value2 = FieldValue<OSN2, 2U>;
                using Value3 = FieldValue<OSN2, 3U>;
                using Value4 = FieldValue<OSN2, 4U>;
                using Value5 = FieldValue<OSN2, 5U>;
                using Value6 = FieldValue<OSN2, 6U>;
                using Value7 = FieldValue<OSN2, 7U>;
                using Value8 = FieldValue<OSN2, 8U>;
                using Value9 = FieldValue<OSN2, 9U>;
                using Value10 = FieldValue<OSN2, 10U>;
                using Value11 = FieldValue<OSN2, 11U>;
                using Value12 = FieldValue<OSN2, 12U>;
                using Value13 = FieldValue<OSN2, 13U>;
                using Value14 = FieldValue<OSN2, 14U>;
                using Value15 = FieldValue<OSN2, 15U>;
                using Value16 = FieldValue<OSN2, 16U>;
                using Value17 = FieldValue<OSN2, 17U>;
                using Value18 = FieldValue<OSN2, 18U>;
                using Value19 = FieldValue<OSN2, 19U>;
                using Value20 = FieldValue<OSN2, 20U>;
                using Value21 = FieldValue<OSN2, 21U>;
                using Value22 = FieldValue<OSN2, 22U>;
                using Value23 = FieldValue<OSN2, 23U>;
                using Value24 = FieldValue<OSN2, 24U>;
                using Value25 = FieldValue<OSN2, 25U>;
                using Value26 = FieldValue<OSN2, 26U>;
                using Value27 = FieldValue<OSN2, 27U>;
                using Value28 = FieldValue<OSN2, 28U>;
                using Value29 = FieldValue<OSN2, 29U>;
                using Value30 = FieldValue<OSN2, 30U>;
                using Value31 = FieldValue<OSN2, 31U>;
            };

            struct OSN1 : public RegisterField<OSQ3, 0, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<OSN1, 0U>;
                using Value1 = FieldValue<OSN1, 1U>;
                using Value2 = FieldValue<OSN1, 2U>;
                using Value3 = FieldValue<OSN1, 3U>;
                using Value4 = FieldValue<OSN1, 4U>;
                using Value5 = FieldValue<OSN1, 5U>;
                using Value6 = FieldValue<OSN1, 6U>;
                using Value7 = FieldValue<OSN1, 7U>;
                using Value8 = FieldValue<OSN1, 8U>;
                using Value9 = FieldValue<OSN1, 9U>;
                using Value10 = FieldValue<OSN1, 10U>;
                using Value11 = FieldValue<OSN1, 11U>;
                using Value12 = FieldValue<OSN1, 12U>;
                using Value13 = FieldValue<OSN1, 13U>;
                using Value14 = FieldValue<OSN1, 14U>;
                using Value15 = FieldValue<OSN1, 15U>;
                using Value16 = FieldValue<OSN1, 16U>;
                using Value17 = FieldValue<OSN1, 17U>;
                using Value18 = FieldValue<OSN1, 18U>;
                using Value19 = FieldValue<OSN1, 19U>;
                using Value20 = FieldValue<OSN1, 20U>;
                using Value21 = FieldValue<OSN1, 21U>;
                using Value22 = FieldValue<OSN1, 22U>;
                using Value23 = FieldValue<OSN1, 23U>;
                using Value24 = FieldValue<OSN1, 24U>;
                using Value25 = FieldValue<OSN1, 25U>;
                using Value26 = FieldValue<OSN1, 26U>;
                using Value27 = FieldValue<OSN1, 27U>;
                using Value28 = FieldValue<OSN1, 28U>;
                using Value29 = FieldValue<OSN1, 29U>;
                using Value30 = FieldValue<OSN1, 30U>;
                using Value31 = FieldValue<OSN1, 31U>;
            };

        };

        struct PSQ : public Register<0x40012838, 32, ReadWriteMode>
        {
            struct PCLEN : public RegisterField<PSQ, 20, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PCLEN, 0U>;
                using Value1 = FieldValue<PCLEN, 1U>;
                using Value2 = FieldValue<PCLEN, 2U>;
                using Value3 = FieldValue<PCLEN, 3U>;
            };

            struct PSN4 : public RegisterField<PSQ, 15, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<PSN4, 0U>;
                using Value1 = FieldValue<PSN4, 1U>;
                using Value2 = FieldValue<PSN4, 2U>;
                using Value3 = FieldValue<PSN4, 3U>;
                using Value4 = FieldValue<PSN4, 4U>;
                using Value5 = FieldValue<PSN4, 5U>;
                using Value6 = FieldValue<PSN4, 6U>;
                using Value7 = FieldValue<PSN4, 7U>;
                using Value8 = FieldValue<PSN4, 8U>;
                using Value9 = FieldValue<PSN4, 9U>;
                using Value10 = FieldValue<PSN4, 10U>;
                using Value11 = FieldValue<PSN4, 11U>;
                using Value12 = FieldValue<PSN4, 12U>;
                using Value13 = FieldValue<PSN4, 13U>;
                using Value14 = FieldValue<PSN4, 14U>;
                using Value15 = FieldValue<PSN4, 15U>;
                using Value16 = FieldValue<PSN4, 16U>;
                using Value17 = FieldValue<PSN4, 17U>;
                using Value18 = FieldValue<PSN4, 18U>;
                using Value19 = FieldValue<PSN4, 19U>;
                using Value20 = FieldValue<PSN4, 20U>;
                using Value21 = FieldValue<PSN4, 21U>;
                using Value22 = FieldValue<PSN4, 22U>;
                using Value23 = FieldValue<PSN4, 23U>;
                using Value24 = FieldValue<PSN4, 24U>;
                using Value25 = FieldValue<PSN4, 25U>;
                using Value26 = FieldValue<PSN4, 26U>;
                using Value27 = FieldValue<PSN4, 27U>;
                using Value28 = FieldValue<PSN4, 28U>;
                using Value29 = FieldValue<PSN4, 29U>;
                using Value30 = FieldValue<PSN4, 30U>;
                using Value31 = FieldValue<PSN4, 31U>;
            };

            struct PSN3 : public RegisterField<PSQ, 10, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<PSN3, 0U>;
                using Value1 = FieldValue<PSN3, 1U>;
                using Value2 = FieldValue<PSN3, 2U>;
                using Value3 = FieldValue<PSN3, 3U>;
                using Value4 = FieldValue<PSN3, 4U>;
                using Value5 = FieldValue<PSN3, 5U>;
                using Value6 = FieldValue<PSN3, 6U>;
                using Value7 = FieldValue<PSN3, 7U>;
                using Value8 = FieldValue<PSN3, 8U>;
                using Value9 = FieldValue<PSN3, 9U>;
                using Value10 = FieldValue<PSN3, 10U>;
                using Value11 = FieldValue<PSN3, 11U>;
                using Value12 = FieldValue<PSN3, 12U>;
                using Value13 = FieldValue<PSN3, 13U>;
                using Value14 = FieldValue<PSN3, 14U>;
                using Value15 = FieldValue<PSN3, 15U>;
                using Value16 = FieldValue<PSN3, 16U>;
                using Value17 = FieldValue<PSN3, 17U>;
                using Value18 = FieldValue<PSN3, 18U>;
                using Value19 = FieldValue<PSN3, 19U>;
                using Value20 = FieldValue<PSN3, 20U>;
                using Value21 = FieldValue<PSN3, 21U>;
                using Value22 = FieldValue<PSN3, 22U>;
                using Value23 = FieldValue<PSN3, 23U>;
                using Value24 = FieldValue<PSN3, 24U>;
                using Value25 = FieldValue<PSN3, 25U>;
                using Value26 = FieldValue<PSN3, 26U>;
                using Value27 = FieldValue<PSN3, 27U>;
                using Value28 = FieldValue<PSN3, 28U>;
                using Value29 = FieldValue<PSN3, 29U>;
                using Value30 = FieldValue<PSN3, 30U>;
                using Value31 = FieldValue<PSN3, 31U>;
            };

            struct PSN2 : public RegisterField<PSQ, 5, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<PSN2, 0U>;
                using Value1 = FieldValue<PSN2, 1U>;
                using Value2 = FieldValue<PSN2, 2U>;
                using Value3 = FieldValue<PSN2, 3U>;
                using Value4 = FieldValue<PSN2, 4U>;
                using Value5 = FieldValue<PSN2, 5U>;
                using Value6 = FieldValue<PSN2, 6U>;
                using Value7 = FieldValue<PSN2, 7U>;
                using Value8 = FieldValue<PSN2, 8U>;
                using Value9 = FieldValue<PSN2, 9U>;
                using Value10 = FieldValue<PSN2, 10U>;
                using Value11 = FieldValue<PSN2, 11U>;
                using Value12 = FieldValue<PSN2, 12U>;
                using Value13 = FieldValue<PSN2, 13U>;
                using Value14 = FieldValue<PSN2, 14U>;
                using Value15 = FieldValue<PSN2, 15U>;
                using Value16 = FieldValue<PSN2, 16U>;
                using Value17 = FieldValue<PSN2, 17U>;
                using Value18 = FieldValue<PSN2, 18U>;
                using Value19 = FieldValue<PSN2, 19U>;
                using Value20 = FieldValue<PSN2, 20U>;
                using Value21 = FieldValue<PSN2, 21U>;
                using Value22 = FieldValue<PSN2, 22U>;
                using Value23 = FieldValue<PSN2, 23U>;
                using Value24 = FieldValue<PSN2, 24U>;
                using Value25 = FieldValue<PSN2, 25U>;
                using Value26 = FieldValue<PSN2, 26U>;
                using Value27 = FieldValue<PSN2, 27U>;
                using Value28 = FieldValue<PSN2, 28U>;
                using Value29 = FieldValue<PSN2, 29U>;
                using Value30 = FieldValue<PSN2, 30U>;
                using Value31 = FieldValue<PSN2, 31U>;
            };

            struct PSN1 : public RegisterField<PSQ, 0, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<PSN1, 0U>;
                using Value1 = FieldValue<PSN1, 1U>;
                using Value2 = FieldValue<PSN1, 2U>;
                using Value3 = FieldValue<PSN1, 3U>;
                using Value4 = FieldValue<PSN1, 4U>;
                using Value5 = FieldValue<PSN1, 5U>;
                using Value6 = FieldValue<PSN1, 6U>;
                using Value7 = FieldValue<PSN1, 7U>;
                using Value8 = FieldValue<PSN1, 8U>;
                using Value9 = FieldValue<PSN1, 9U>;
                using Value10 = FieldValue<PSN1, 10U>;
                using Value11 = FieldValue<PSN1, 11U>;
                using Value12 = FieldValue<PSN1, 12U>;
                using Value13 = FieldValue<PSN1, 13U>;
                using Value14 = FieldValue<PSN1, 14U>;
                using Value15 = FieldValue<PSN1, 15U>;
                using Value16 = FieldValue<PSN1, 16U>;
                using Value17 = FieldValue<PSN1, 17U>;
                using Value18 = FieldValue<PSN1, 18U>;
                using Value19 = FieldValue<PSN1, 19U>;
                using Value20 = FieldValue<PSN1, 20U>;
                using Value21 = FieldValue<PSN1, 21U>;
                using Value22 = FieldValue<PSN1, 22U>;
                using Value23 = FieldValue<PSN1, 23U>;
                using Value24 = FieldValue<PSN1, 24U>;
                using Value25 = FieldValue<PSN1, 25U>;
                using Value26 = FieldValue<PSN1, 26U>;
                using Value27 = FieldValue<PSN1, 27U>;
                using Value28 = FieldValue<PSN1, 28U>;
                using Value29 = FieldValue<PSN1, 29U>;
                using Value30 = FieldValue<PSN1, 30U>;
                using Value31 = FieldValue<PSN1, 31U>;
            };

        };

        struct PDT1 : public Register<0x4001283C, 32, ReadMode>
        {
            struct PDT1Field : public RegisterField<PDT1, 0, 16, ReadMode>
            {
            };

        };

        struct PDT2 : public Register<0x40012840, 32, ReadMode>
        {
            struct PDT2Field : public RegisterField<PDT2, 0, 16, ReadMode>
            {
            };

        };

        struct PDT3 : public Register<0x40012844, 32, ReadMode>
        {
            struct PDT3Field : public RegisterField<PDT3, 0, 16, ReadMode>
            {
            };

        };

        struct PDT4 : public Register<0x40012848, 32, ReadMode>
        {
            struct PDT4Field : public RegisterField<PDT4, 0, 16, ReadMode>
            {
            };

        };

        struct ODT : public Register<0x4001284C, 32, ReadMode>
        {
            struct ODTField : public RegisterField<ODT, 0, 16, ReadMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(ADC2REGISTERS_HPP)
