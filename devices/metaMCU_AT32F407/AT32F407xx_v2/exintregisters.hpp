/*******************************************************************************
* Filename      : exintregisters.hpp
*
* Details       : EXINT. This header file is auto-generated for AT32F407xx_v2
*                 device.
*
*
*******************************************************************************/

#if !defined(EXINTREGISTERS_HPP)
#define EXINTREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct EXINT
    {
        struct INTEN : public Register<0x40010400, 32, ReadWriteMode>
        {
            struct INTEN0 : public RegisterField<INTEN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN0, 0U>;
                using Value1 = FieldValue<INTEN0, 1U>;
            };

            struct INTEN1 : public RegisterField<INTEN, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN1, 0U>;
                using Value1 = FieldValue<INTEN1, 1U>;
            };

            struct INTEN2 : public RegisterField<INTEN, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN2, 0U>;
                using Value1 = FieldValue<INTEN2, 1U>;
            };

            struct INTEN3 : public RegisterField<INTEN, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN3, 0U>;
                using Value1 = FieldValue<INTEN3, 1U>;
            };

            struct INTEN4 : public RegisterField<INTEN, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN4, 0U>;
                using Value1 = FieldValue<INTEN4, 1U>;
            };

            struct INTEN5 : public RegisterField<INTEN, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN5, 0U>;
                using Value1 = FieldValue<INTEN5, 1U>;
            };

            struct INTEN6 : public RegisterField<INTEN, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN6, 0U>;
                using Value1 = FieldValue<INTEN6, 1U>;
            };

            struct INTEN7 : public RegisterField<INTEN, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN7, 0U>;
                using Value1 = FieldValue<INTEN7, 1U>;
            };

            struct INTEN8 : public RegisterField<INTEN, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN8, 0U>;
                using Value1 = FieldValue<INTEN8, 1U>;
            };

            struct INTEN9 : public RegisterField<INTEN, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN9, 0U>;
                using Value1 = FieldValue<INTEN9, 1U>;
            };

            struct INTEN10 : public RegisterField<INTEN, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN10, 0U>;
                using Value1 = FieldValue<INTEN10, 1U>;
            };

            struct INTEN11 : public RegisterField<INTEN, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN11, 0U>;
                using Value1 = FieldValue<INTEN11, 1U>;
            };

            struct INTEN12 : public RegisterField<INTEN, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN12, 0U>;
                using Value1 = FieldValue<INTEN12, 1U>;
            };

            struct INTEN13 : public RegisterField<INTEN, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN13, 0U>;
                using Value1 = FieldValue<INTEN13, 1U>;
            };

            struct INTEN14 : public RegisterField<INTEN, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN14, 0U>;
                using Value1 = FieldValue<INTEN14, 1U>;
            };

            struct INTEN15 : public RegisterField<INTEN, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN15, 0U>;
                using Value1 = FieldValue<INTEN15, 1U>;
            };

            struct INTEN16 : public RegisterField<INTEN, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN16, 0U>;
                using Value1 = FieldValue<INTEN16, 1U>;
            };

            struct INTEN17 : public RegisterField<INTEN, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN17, 0U>;
                using Value1 = FieldValue<INTEN17, 1U>;
            };

            struct INTEN18 : public RegisterField<INTEN, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN18, 0U>;
                using Value1 = FieldValue<INTEN18, 1U>;
            };

            struct INTEN19 : public RegisterField<INTEN, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTEN19, 0U>;
                using Value1 = FieldValue<INTEN19, 1U>;
            };

        };

        struct EVTEN : public Register<0x40010404, 32, ReadWriteMode>
        {
            struct EVTEN0 : public RegisterField<EVTEN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN0, 0U>;
                using Value1 = FieldValue<EVTEN0, 1U>;
            };

            struct EVTEN1 : public RegisterField<EVTEN, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN1, 0U>;
                using Value1 = FieldValue<EVTEN1, 1U>;
            };

            struct EVTEN2 : public RegisterField<EVTEN, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN2, 0U>;
                using Value1 = FieldValue<EVTEN2, 1U>;
            };

            struct EVTEN3 : public RegisterField<EVTEN, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN3, 0U>;
                using Value1 = FieldValue<EVTEN3, 1U>;
            };

            struct EVTEN4 : public RegisterField<EVTEN, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN4, 0U>;
                using Value1 = FieldValue<EVTEN4, 1U>;
            };

            struct EVTEN5 : public RegisterField<EVTEN, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN5, 0U>;
                using Value1 = FieldValue<EVTEN5, 1U>;
            };

            struct EVTEN6 : public RegisterField<EVTEN, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN6, 0U>;
                using Value1 = FieldValue<EVTEN6, 1U>;
            };

            struct EVTEN7 : public RegisterField<EVTEN, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN7, 0U>;
                using Value1 = FieldValue<EVTEN7, 1U>;
            };

            struct EVTEN8 : public RegisterField<EVTEN, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN8, 0U>;
                using Value1 = FieldValue<EVTEN8, 1U>;
            };

            struct EVTEN9 : public RegisterField<EVTEN, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN9, 0U>;
                using Value1 = FieldValue<EVTEN9, 1U>;
            };

            struct EVTEN10 : public RegisterField<EVTEN, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN10, 0U>;
                using Value1 = FieldValue<EVTEN10, 1U>;
            };

            struct EVTEN11 : public RegisterField<EVTEN, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN11, 0U>;
                using Value1 = FieldValue<EVTEN11, 1U>;
            };

            struct EVTEN12 : public RegisterField<EVTEN, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN12, 0U>;
                using Value1 = FieldValue<EVTEN12, 1U>;
            };

            struct EVTEN13 : public RegisterField<EVTEN, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN13, 0U>;
                using Value1 = FieldValue<EVTEN13, 1U>;
            };

            struct EVTEN14 : public RegisterField<EVTEN, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN14, 0U>;
                using Value1 = FieldValue<EVTEN14, 1U>;
            };

            struct EVTEN15 : public RegisterField<EVTEN, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN15, 0U>;
                using Value1 = FieldValue<EVTEN15, 1U>;
            };

            struct EVTEN16 : public RegisterField<EVTEN, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN16, 0U>;
                using Value1 = FieldValue<EVTEN16, 1U>;
            };

            struct EVTEN17 : public RegisterField<EVTEN, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN17, 0U>;
                using Value1 = FieldValue<EVTEN17, 1U>;
            };

            struct EVTEN18 : public RegisterField<EVTEN, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN18, 0U>;
                using Value1 = FieldValue<EVTEN18, 1U>;
            };

            struct EVTEN19 : public RegisterField<EVTEN, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTEN19, 0U>;
                using Value1 = FieldValue<EVTEN19, 1U>;
            };

        };

        struct POLCFG1 : public Register<0x40010408, 32, ReadWriteMode>
        {
            struct RP0 : public RegisterField<POLCFG1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP0, 0U>;
                using Value1 = FieldValue<RP0, 1U>;
            };

            struct RP1 : public RegisterField<POLCFG1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP1, 0U>;
                using Value1 = FieldValue<RP1, 1U>;
            };

            struct RP2 : public RegisterField<POLCFG1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP2, 0U>;
                using Value1 = FieldValue<RP2, 1U>;
            };

            struct RP3 : public RegisterField<POLCFG1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP3, 0U>;
                using Value1 = FieldValue<RP3, 1U>;
            };

            struct RP4 : public RegisterField<POLCFG1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP4, 0U>;
                using Value1 = FieldValue<RP4, 1U>;
            };

            struct RP5 : public RegisterField<POLCFG1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP5, 0U>;
                using Value1 = FieldValue<RP5, 1U>;
            };

            struct RP6 : public RegisterField<POLCFG1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP6, 0U>;
                using Value1 = FieldValue<RP6, 1U>;
            };

            struct RP7 : public RegisterField<POLCFG1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP7, 0U>;
                using Value1 = FieldValue<RP7, 1U>;
            };

            struct RP8 : public RegisterField<POLCFG1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP8, 0U>;
                using Value1 = FieldValue<RP8, 1U>;
            };

            struct RP9 : public RegisterField<POLCFG1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP9, 0U>;
                using Value1 = FieldValue<RP9, 1U>;
            };

            struct RP10 : public RegisterField<POLCFG1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP10, 0U>;
                using Value1 = FieldValue<RP10, 1U>;
            };

            struct RP11 : public RegisterField<POLCFG1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP11, 0U>;
                using Value1 = FieldValue<RP11, 1U>;
            };

            struct RP12 : public RegisterField<POLCFG1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP12, 0U>;
                using Value1 = FieldValue<RP12, 1U>;
            };

            struct RP13 : public RegisterField<POLCFG1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP13, 0U>;
                using Value1 = FieldValue<RP13, 1U>;
            };

            struct RP14 : public RegisterField<POLCFG1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP14, 0U>;
                using Value1 = FieldValue<RP14, 1U>;
            };

            struct RP15 : public RegisterField<POLCFG1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP15, 0U>;
                using Value1 = FieldValue<RP15, 1U>;
            };

            struct RP16 : public RegisterField<POLCFG1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP16, 0U>;
                using Value1 = FieldValue<RP16, 1U>;
            };

            struct RP17 : public RegisterField<POLCFG1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP17, 0U>;
                using Value1 = FieldValue<RP17, 1U>;
            };

            struct RP18 : public RegisterField<POLCFG1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP18, 0U>;
                using Value1 = FieldValue<RP18, 1U>;
            };

            struct RP19 : public RegisterField<POLCFG1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RP19, 0U>;
                using Value1 = FieldValue<RP19, 1U>;
            };

        };

        struct POLCFG2 : public Register<0x4001040C, 32, ReadWriteMode>
        {
            struct FP0 : public RegisterField<POLCFG2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP0, 0U>;
                using Value1 = FieldValue<FP0, 1U>;
            };

            struct FP1 : public RegisterField<POLCFG2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP1, 0U>;
                using Value1 = FieldValue<FP1, 1U>;
            };

            struct FP2 : public RegisterField<POLCFG2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP2, 0U>;
                using Value1 = FieldValue<FP2, 1U>;
            };

            struct FP3 : public RegisterField<POLCFG2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP3, 0U>;
                using Value1 = FieldValue<FP3, 1U>;
            };

            struct FP4 : public RegisterField<POLCFG2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP4, 0U>;
                using Value1 = FieldValue<FP4, 1U>;
            };

            struct FP5 : public RegisterField<POLCFG2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP5, 0U>;
                using Value1 = FieldValue<FP5, 1U>;
            };

            struct FP6 : public RegisterField<POLCFG2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP6, 0U>;
                using Value1 = FieldValue<FP6, 1U>;
            };

            struct FP7 : public RegisterField<POLCFG2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP7, 0U>;
                using Value1 = FieldValue<FP7, 1U>;
            };

            struct FP8 : public RegisterField<POLCFG2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP8, 0U>;
                using Value1 = FieldValue<FP8, 1U>;
            };

            struct FP9 : public RegisterField<POLCFG2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP9, 0U>;
                using Value1 = FieldValue<FP9, 1U>;
            };

            struct FP10 : public RegisterField<POLCFG2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP10, 0U>;
                using Value1 = FieldValue<FP10, 1U>;
            };

            struct FP11 : public RegisterField<POLCFG2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP11, 0U>;
                using Value1 = FieldValue<FP11, 1U>;
            };

            struct FP12 : public RegisterField<POLCFG2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP12, 0U>;
                using Value1 = FieldValue<FP12, 1U>;
            };

            struct FP13 : public RegisterField<POLCFG2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP13, 0U>;
                using Value1 = FieldValue<FP13, 1U>;
            };

            struct FP14 : public RegisterField<POLCFG2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP14, 0U>;
                using Value1 = FieldValue<FP14, 1U>;
            };

            struct FP15 : public RegisterField<POLCFG2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP15, 0U>;
                using Value1 = FieldValue<FP15, 1U>;
            };

            struct FP16 : public RegisterField<POLCFG2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP16, 0U>;
                using Value1 = FieldValue<FP16, 1U>;
            };

            struct FP17 : public RegisterField<POLCFG2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP17, 0U>;
                using Value1 = FieldValue<FP17, 1U>;
            };

            struct FP18 : public RegisterField<POLCFG2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP18, 0U>;
                using Value1 = FieldValue<FP18, 1U>;
            };

            struct FP19 : public RegisterField<POLCFG2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FP19, 0U>;
                using Value1 = FieldValue<FP19, 1U>;
            };

        };

        struct SWTRG : public Register<0x40010410, 32, ReadWriteMode>
        {
            struct SWT0 : public RegisterField<SWTRG, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT0, 0U>;
                using Value1 = FieldValue<SWT0, 1U>;
            };

            struct SWT1 : public RegisterField<SWTRG, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT1, 0U>;
                using Value1 = FieldValue<SWT1, 1U>;
            };

            struct SWT2 : public RegisterField<SWTRG, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT2, 0U>;
                using Value1 = FieldValue<SWT2, 1U>;
            };

            struct SWT3 : public RegisterField<SWTRG, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT3, 0U>;
                using Value1 = FieldValue<SWT3, 1U>;
            };

            struct SWT4 : public RegisterField<SWTRG, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT4, 0U>;
                using Value1 = FieldValue<SWT4, 1U>;
            };

            struct SWT5 : public RegisterField<SWTRG, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT5, 0U>;
                using Value1 = FieldValue<SWT5, 1U>;
            };

            struct SWT6 : public RegisterField<SWTRG, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT6, 0U>;
                using Value1 = FieldValue<SWT6, 1U>;
            };

            struct SWT7 : public RegisterField<SWTRG, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT7, 0U>;
                using Value1 = FieldValue<SWT7, 1U>;
            };

            struct SWT8 : public RegisterField<SWTRG, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT8, 0U>;
                using Value1 = FieldValue<SWT8, 1U>;
            };

            struct SWT9 : public RegisterField<SWTRG, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT9, 0U>;
                using Value1 = FieldValue<SWT9, 1U>;
            };

            struct SWT10 : public RegisterField<SWTRG, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT10, 0U>;
                using Value1 = FieldValue<SWT10, 1U>;
            };

            struct SWT11 : public RegisterField<SWTRG, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT11, 0U>;
                using Value1 = FieldValue<SWT11, 1U>;
            };

            struct SWT12 : public RegisterField<SWTRG, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT12, 0U>;
                using Value1 = FieldValue<SWT12, 1U>;
            };

            struct SWT13 : public RegisterField<SWTRG, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT13, 0U>;
                using Value1 = FieldValue<SWT13, 1U>;
            };

            struct SWT14 : public RegisterField<SWTRG, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT14, 0U>;
                using Value1 = FieldValue<SWT14, 1U>;
            };

            struct SWT15 : public RegisterField<SWTRG, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT15, 0U>;
                using Value1 = FieldValue<SWT15, 1U>;
            };

            struct SWT16 : public RegisterField<SWTRG, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT16, 0U>;
                using Value1 = FieldValue<SWT16, 1U>;
            };

            struct SWT17 : public RegisterField<SWTRG, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT17, 0U>;
                using Value1 = FieldValue<SWT17, 1U>;
            };

            struct SWT18 : public RegisterField<SWTRG, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT18, 0U>;
                using Value1 = FieldValue<SWT18, 1U>;
            };

            struct SWT19 : public RegisterField<SWTRG, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWT19, 0U>;
                using Value1 = FieldValue<SWT19, 1U>;
            };

        };

        struct INTSTS : public Register<0x40010414, 32, ReadWriteMode>
        {
            struct LINE0 : public RegisterField<INTSTS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE0, 0U>;
                using Value1 = FieldValue<LINE0, 1U>;
            };

            struct LINE1 : public RegisterField<INTSTS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE1, 0U>;
                using Value1 = FieldValue<LINE1, 1U>;
            };

            struct LINE2 : public RegisterField<INTSTS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE2, 0U>;
                using Value1 = FieldValue<LINE2, 1U>;
            };

            struct LINE3 : public RegisterField<INTSTS, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE3, 0U>;
                using Value1 = FieldValue<LINE3, 1U>;
            };

            struct LINE4 : public RegisterField<INTSTS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE4, 0U>;
                using Value1 = FieldValue<LINE4, 1U>;
            };

            struct LINE5 : public RegisterField<INTSTS, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE5, 0U>;
                using Value1 = FieldValue<LINE5, 1U>;
            };

            struct LINE6 : public RegisterField<INTSTS, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE6, 0U>;
                using Value1 = FieldValue<LINE6, 1U>;
            };

            struct LINE7 : public RegisterField<INTSTS, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE7, 0U>;
                using Value1 = FieldValue<LINE7, 1U>;
            };

            struct LINE8 : public RegisterField<INTSTS, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE8, 0U>;
                using Value1 = FieldValue<LINE8, 1U>;
            };

            struct LINE9 : public RegisterField<INTSTS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE9, 0U>;
                using Value1 = FieldValue<LINE9, 1U>;
            };

            struct LINE10 : public RegisterField<INTSTS, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE10, 0U>;
                using Value1 = FieldValue<LINE10, 1U>;
            };

            struct LINE11 : public RegisterField<INTSTS, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE11, 0U>;
                using Value1 = FieldValue<LINE11, 1U>;
            };

            struct LINE12 : public RegisterField<INTSTS, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE12, 0U>;
                using Value1 = FieldValue<LINE12, 1U>;
            };

            struct LINE13 : public RegisterField<INTSTS, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE13, 0U>;
                using Value1 = FieldValue<LINE13, 1U>;
            };

            struct LINE14 : public RegisterField<INTSTS, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE14, 0U>;
                using Value1 = FieldValue<LINE14, 1U>;
            };

            struct LINE15 : public RegisterField<INTSTS, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE15, 0U>;
                using Value1 = FieldValue<LINE15, 1U>;
            };

            struct LINE16 : public RegisterField<INTSTS, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE16, 0U>;
                using Value1 = FieldValue<LINE16, 1U>;
            };

            struct LINE17 : public RegisterField<INTSTS, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE17, 0U>;
                using Value1 = FieldValue<LINE17, 1U>;
            };

            struct LINE18 : public RegisterField<INTSTS, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE18, 0U>;
                using Value1 = FieldValue<LINE18, 1U>;
            };

            struct LINE19 : public RegisterField<INTSTS, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINE19, 0U>;
                using Value1 = FieldValue<LINE19, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(EXINTREGISTERS_HPP)
