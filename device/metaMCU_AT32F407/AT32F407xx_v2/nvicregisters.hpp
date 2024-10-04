/*******************************************************************************
* Filename      : nvicregisters.hpp
*
* Details       : Nested Vectored Interrupt Controller. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(NVICREGISTERS_HPP)
#define NVICREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct NVIC
    {
        struct ICTR : public Register<0xE000E004, 32, ReadMode>
        {
            struct INTLINESNUM : public RegisterField<ICTR, 0, 4, ReadMode>
            {
                using Value0 = FieldValue<INTLINESNUM, 0U>;
                using Value1 = FieldValue<INTLINESNUM, 1U>;
                using Value2 = FieldValue<INTLINESNUM, 2U>;
                using Value3 = FieldValue<INTLINESNUM, 3U>;
                using Value4 = FieldValue<INTLINESNUM, 4U>;
                using Value5 = FieldValue<INTLINESNUM, 5U>;
                using Value6 = FieldValue<INTLINESNUM, 6U>;
                using Value7 = FieldValue<INTLINESNUM, 7U>;
                using Value8 = FieldValue<INTLINESNUM, 8U>;
                using Value9 = FieldValue<INTLINESNUM, 9U>;
                using Value10 = FieldValue<INTLINESNUM, 10U>;
                using Value11 = FieldValue<INTLINESNUM, 11U>;
                using Value12 = FieldValue<INTLINESNUM, 12U>;
                using Value13 = FieldValue<INTLINESNUM, 13U>;
                using Value14 = FieldValue<INTLINESNUM, 14U>;
                using Value15 = FieldValue<INTLINESNUM, 15U>;
            };

        };

        struct STIR : public Register<0xE000EF00, 32, WriteMode>
        {
            struct INTID : public RegisterField<STIR, 0, 9, WriteMode>
            {
            };

        };

        struct ISER0 : public Register<0xE000E100, 32, ReadWriteMode>
        {
            struct SETENA : public RegisterField<ISER0, 0, 32, ReadWriteMode>
            {
            };

        };

        struct ISER1 : public Register<0xE000E104, 32, ReadWriteMode>
        {
            struct SETENA : public RegisterField<ISER1, 0, 32, ReadWriteMode>
            {
            };

        };

        struct ICER0 : public Register<0xE000E180, 32, ReadWriteMode>
        {
            struct CLRENA : public RegisterField<ICER0, 0, 32, ReadWriteMode>
            {
            };

        };

        struct ICER1 : public Register<0xE000E184, 32, ReadWriteMode>
        {
            struct CLRENA : public RegisterField<ICER1, 0, 32, ReadWriteMode>
            {
            };

        };

        struct ISPR0 : public Register<0xE000E200, 32, ReadWriteMode>
        {
            struct SETPEND : public RegisterField<ISPR0, 0, 32, ReadWriteMode>
            {
            };

        };

        struct ISPR1 : public Register<0xE000E204, 32, ReadWriteMode>
        {
            struct SETPEND : public RegisterField<ISPR1, 0, 32, ReadWriteMode>
            {
            };

        };

        struct ICPR0 : public Register<0xE000E280, 32, ReadWriteMode>
        {
            struct CLRPEND : public RegisterField<ICPR0, 0, 32, ReadWriteMode>
            {
            };

        };

        struct ICPR1 : public Register<0xE000E284, 32, ReadWriteMode>
        {
            struct CLRPEND : public RegisterField<ICPR1, 0, 32, ReadWriteMode>
            {
            };

        };

        struct IABR0 : public Register<0xE000E300, 32, ReadMode>
        {
            struct ACTIVE : public RegisterField<IABR0, 0, 32, ReadMode>
            {
            };

        };

        struct IABR1 : public Register<0xE000E304, 32, ReadMode>
        {
            struct ACTIVE : public RegisterField<IABR1, 0, 32, ReadMode>
            {
            };

        };

        struct IPR0 : public Register<0xE000E400, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR0, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR0, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR0, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR0, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR1 : public Register<0xE000E404, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR1, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR1, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR1, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR1, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR2 : public Register<0xE000E408, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR2, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR2, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR2, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR2, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR3 : public Register<0xE000E40C, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR3, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR3, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR3, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR3, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR4 : public Register<0xE000E410, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR4, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR4, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR4, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR4, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR5 : public Register<0xE000E414, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR5, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR5, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR5, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR5, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR6 : public Register<0xE000E418, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR6, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR6, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR6, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR6, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR7 : public Register<0xE000E41C, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR7, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR7, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR7, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR7, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR8 : public Register<0xE000E420, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR8, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR8, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR8, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR8, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR9 : public Register<0xE000E424, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR9, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR9, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR9, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR9, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR10 : public Register<0xE000E428, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR10, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR10, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR10, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR10, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR11 : public Register<0xE000E42C, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR11, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR11, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR11, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR11, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR12 : public Register<0xE000E430, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR12, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR12, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR12, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR12, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR13 : public Register<0xE000E434, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR13, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR13, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR13, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR13, 24, 8, ReadWriteMode>
            {
            };

        };

        struct IPR14 : public Register<0xE000E438, 32, ReadWriteMode>
        {
            struct IPR_N0 : public RegisterField<IPR14, 0, 8, ReadWriteMode>
            {
            };

            struct IPR_N1 : public RegisterField<IPR14, 8, 8, ReadWriteMode>
            {
            };

            struct IPR_N2 : public RegisterField<IPR14, 16, 8, ReadWriteMode>
            {
            };

            struct IPR_N3 : public RegisterField<IPR14, 24, 8, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(NVICREGISTERS_HPP)
