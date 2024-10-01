/*******************************************************************************
* Filename      : tmr14registers.hpp
*
* Details       : General purpose timer. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(TMR14REGISTERS_HPP)
#define TMR14REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct TMR14
    {
        struct CTRL1 : public Register<0x40002000, 32, ReadWriteMode>
        {
            struct CLKDIV : public RegisterField<CTRL1, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKDIV, 0U>;
                using Value1 = FieldValue<CLKDIV, 1U>;
                using Value2 = FieldValue<CLKDIV, 2U>;
                using Value3 = FieldValue<CLKDIV, 3U>;
            };

            struct PRBEN : public RegisterField<CTRL1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PRBEN, 0U>;
                using Value1 = FieldValue<PRBEN, 1U>;
            };

            struct OCMEN : public RegisterField<CTRL1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OCMEN, 0U>;
                using Value1 = FieldValue<OCMEN, 1U>;
            };

            struct OVFS : public RegisterField<CTRL1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFS, 0U>;
                using Value1 = FieldValue<OVFS, 1U>;
            };

            struct OVFEN : public RegisterField<CTRL1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFEN, 0U>;
                using Value1 = FieldValue<OVFEN, 1U>;
            };

            struct TMREN : public RegisterField<CTRL1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMREN, 0U>;
                using Value1 = FieldValue<TMREN, 1U>;
            };

        };

        struct IDEN : public Register<0x4000200C, 32, ReadWriteMode>
        {
            struct C1IEN : public RegisterField<IDEN, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1IEN, 0U>;
                using Value1 = FieldValue<C1IEN, 1U>;
            };

            struct OVFIEN : public RegisterField<IDEN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFIEN, 0U>;
                using Value1 = FieldValue<OVFIEN, 1U>;
            };

        };

        struct ISTS : public Register<0x40002010, 32, ReadWriteMode>
        {
            struct C1RF : public RegisterField<ISTS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1RF, 0U>;
                using Value1 = FieldValue<C1RF, 1U>;
            };

            struct C1IF : public RegisterField<ISTS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1IF, 0U>;
                using Value1 = FieldValue<C1IF, 1U>;
            };

            struct OVFIF : public RegisterField<ISTS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFIF, 0U>;
                using Value1 = FieldValue<OVFIF, 1U>;
            };

        };

        struct SWEVT : public Register<0x40002014, 32, ReadWriteMode>
        {
            struct C1SWTR : public RegisterField<SWEVT, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1SWTR, 0U>;
                using Value1 = FieldValue<C1SWTR, 1U>;
            };

            struct OVFSWTR : public RegisterField<SWEVT, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFSWTR, 0U>;
                using Value1 = FieldValue<OVFSWTR, 1U>;
            };

        };

        struct CM1_OUTPUT : public Register<0x40002018, 32, ReadWriteMode>
        {
            struct C1OCTRL : public RegisterField<CM1_OUTPUT, 4, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<C1OCTRL, 0U>;
                using Value1 = FieldValue<C1OCTRL, 1U>;
                using Value2 = FieldValue<C1OCTRL, 2U>;
                using Value3 = FieldValue<C1OCTRL, 3U>;
                using Value4 = FieldValue<C1OCTRL, 4U>;
                using Value5 = FieldValue<C1OCTRL, 5U>;
                using Value6 = FieldValue<C1OCTRL, 6U>;
                using Value7 = FieldValue<C1OCTRL, 7U>;
            };

            struct C1OBEN : public RegisterField<CM1_OUTPUT, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1OBEN, 0U>;
                using Value1 = FieldValue<C1OBEN, 1U>;
            };

            struct C1OIEN : public RegisterField<CM1_OUTPUT, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1OIEN, 0U>;
                using Value1 = FieldValue<C1OIEN, 1U>;
            };

            struct C1C : public RegisterField<CM1_OUTPUT, 0, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C1C, 0U>;
                using Value1 = FieldValue<C1C, 1U>;
                using Value2 = FieldValue<C1C, 2U>;
                using Value3 = FieldValue<C1C, 3U>;
            };

        };

        struct CM1_INPUT : public Register<0x40002018, 32, ReadWriteMode>
        {
            struct C1DF : public RegisterField<CM1_INPUT, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<C1DF, 0U>;
                using Value1 = FieldValue<C1DF, 1U>;
                using Value2 = FieldValue<C1DF, 2U>;
                using Value3 = FieldValue<C1DF, 3U>;
                using Value4 = FieldValue<C1DF, 4U>;
                using Value5 = FieldValue<C1DF, 5U>;
                using Value6 = FieldValue<C1DF, 6U>;
                using Value7 = FieldValue<C1DF, 7U>;
                using Value8 = FieldValue<C1DF, 8U>;
                using Value9 = FieldValue<C1DF, 9U>;
                using Value10 = FieldValue<C1DF, 10U>;
                using Value11 = FieldValue<C1DF, 11U>;
                using Value12 = FieldValue<C1DF, 12U>;
                using Value13 = FieldValue<C1DF, 13U>;
                using Value14 = FieldValue<C1DF, 14U>;
                using Value15 = FieldValue<C1DF, 15U>;
            };

            struct C1IDIV : public RegisterField<CM1_INPUT, 2, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C1IDIV, 0U>;
                using Value1 = FieldValue<C1IDIV, 1U>;
                using Value2 = FieldValue<C1IDIV, 2U>;
                using Value3 = FieldValue<C1IDIV, 3U>;
            };

            struct C1C : public RegisterField<CM1_INPUT, 0, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C1C, 0U>;
                using Value1 = FieldValue<C1C, 1U>;
                using Value2 = FieldValue<C1C, 2U>;
                using Value3 = FieldValue<C1C, 3U>;
            };

        };

        struct CCTRL : public Register<0x40002020, 32, ReadWriteMode>
        {
            struct C1CP : public RegisterField<CCTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1CP, 0U>;
                using Value1 = FieldValue<C1CP, 1U>;
            };

            struct C1P : public RegisterField<CCTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1P, 0U>;
                using Value1 = FieldValue<C1P, 1U>;
            };

            struct C1EN : public RegisterField<CCTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1EN, 0U>;
                using Value1 = FieldValue<C1EN, 1U>;
            };

        };

        struct CVAL : public Register<0x40002024, 32, ReadWriteMode>
        {
            struct CVALField : public RegisterField<CVAL, 0, 16, ReadWriteMode>
            {
            };

        };

        struct DIV : public Register<0x40002028, 32, ReadWriteMode>
        {
            struct DIVField : public RegisterField<DIV, 0, 16, ReadWriteMode>
            {
            };

        };

        struct PR : public Register<0x4000202C, 32, ReadWriteMode>
        {
            struct PRField : public RegisterField<PR, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C1DT : public Register<0x40002034, 32, ReadWriteMode>
        {
            struct C1DTField : public RegisterField<C1DT, 0, 16, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(TMR14REGISTERS_HPP)
