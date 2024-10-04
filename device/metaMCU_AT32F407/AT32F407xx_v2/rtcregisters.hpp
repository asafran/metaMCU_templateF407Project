/*******************************************************************************
* Filename      : rtcregisters.hpp
*
* Details       : Real time clock. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(RTCREGISTERS_HPP)
#define RTCREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct RTC
    {
        struct CTRLH : public Register<0x40002800, 32, ReadWriteMode>
        {
            struct OVFIEN : public RegisterField<CTRLH, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFIEN, 0U>;
                using Value1 = FieldValue<OVFIEN, 1U>;
            };

            struct TAIEN : public RegisterField<CTRLH, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TAIEN, 0U>;
                using Value1 = FieldValue<TAIEN, 1U>;
            };

            struct TSIEN : public RegisterField<CTRLH, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TSIEN, 0U>;
                using Value1 = FieldValue<TSIEN, 1U>;
            };

        };

        struct CTRLL : public Register<0x40002804, 32, ReadWriteMode>
        {
            struct TSF : public RegisterField<CTRLL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TSF, 0U>;
                using Value1 = FieldValue<TSF, 1U>;
            };

            struct TAF : public RegisterField<CTRLL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TAF, 0U>;
                using Value1 = FieldValue<TAF, 1U>;
            };

            struct OVFF : public RegisterField<CTRLL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFF, 0U>;
                using Value1 = FieldValue<OVFF, 1U>;
            };

            struct UPDF : public RegisterField<CTRLL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UPDF, 0U>;
                using Value1 = FieldValue<UPDF, 1U>;
            };

            struct CFGEN : public RegisterField<CTRLL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CFGEN, 0U>;
                using Value1 = FieldValue<CFGEN, 1U>;
            };

            struct CFGF : public RegisterField<CTRLL, 5, 1, ReadMode>
            {
                using Value0 = FieldValue<CFGF, 0U>;
                using Value1 = FieldValue<CFGF, 1U>;
            };

        };

        struct DIVH : public Register<0x40002808, 32, WriteMode>
        {
            struct DIV : public RegisterField<DIVH, 0, 4, WriteMode>
            {
                using Value0 = FieldValue<DIV, 0U>;
                using Value1 = FieldValue<DIV, 1U>;
                using Value2 = FieldValue<DIV, 2U>;
                using Value3 = FieldValue<DIV, 3U>;
                using Value4 = FieldValue<DIV, 4U>;
                using Value5 = FieldValue<DIV, 5U>;
                using Value6 = FieldValue<DIV, 6U>;
                using Value7 = FieldValue<DIV, 7U>;
                using Value8 = FieldValue<DIV, 8U>;
                using Value9 = FieldValue<DIV, 9U>;
                using Value10 = FieldValue<DIV, 10U>;
                using Value11 = FieldValue<DIV, 11U>;
                using Value12 = FieldValue<DIV, 12U>;
                using Value13 = FieldValue<DIV, 13U>;
                using Value14 = FieldValue<DIV, 14U>;
                using Value15 = FieldValue<DIV, 15U>;
            };

        };

        struct DIVL : public Register<0x4000280C, 32, WriteMode>
        {
            struct DIV : public RegisterField<DIVL, 0, 16, WriteMode>
            {
            };

        };

        struct DIVCNTH : public Register<0x40002810, 32, ReadWriteMode>
        {
            struct DIVCNT : public RegisterField<DIVCNTH, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<DIVCNT, 0U>;
                using Value1 = FieldValue<DIVCNT, 1U>;
                using Value2 = FieldValue<DIVCNT, 2U>;
                using Value3 = FieldValue<DIVCNT, 3U>;
                using Value4 = FieldValue<DIVCNT, 4U>;
                using Value5 = FieldValue<DIVCNT, 5U>;
                using Value6 = FieldValue<DIVCNT, 6U>;
                using Value7 = FieldValue<DIVCNT, 7U>;
                using Value8 = FieldValue<DIVCNT, 8U>;
                using Value9 = FieldValue<DIVCNT, 9U>;
                using Value10 = FieldValue<DIVCNT, 10U>;
                using Value11 = FieldValue<DIVCNT, 11U>;
                using Value12 = FieldValue<DIVCNT, 12U>;
                using Value13 = FieldValue<DIVCNT, 13U>;
                using Value14 = FieldValue<DIVCNT, 14U>;
                using Value15 = FieldValue<DIVCNT, 15U>;
            };

        };

        struct DIVCNTL : public Register<0x40002814, 32, ReadWriteMode>
        {
            struct DIVCNT : public RegisterField<DIVCNTL, 0, 16, ReadWriteMode>
            {
            };

        };

        struct CNTH : public Register<0x40002818, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<CNTH, 0, 16, ReadWriteMode>
            {
            };

        };

        struct CNTL : public Register<0x4000281C, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<CNTL, 0, 16, ReadWriteMode>
            {
            };

        };

        struct TAH : public Register<0x40002820, 32, WriteMode>
        {
            struct TA : public RegisterField<TAH, 0, 16, WriteMode>
            {
            };

        };

        struct TAL : public Register<0x40002824, 32, WriteMode>
        {
            struct TA : public RegisterField<TAL, 0, 16, WriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(RTCREGISTERS_HPP)
