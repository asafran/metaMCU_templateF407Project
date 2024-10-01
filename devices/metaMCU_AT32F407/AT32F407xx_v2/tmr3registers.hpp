/*******************************************************************************
* Filename      : tmr3registers.hpp
*
* Details       : General purpose timer. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(TMR3REGISTERS_HPP)
#define TMR3REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct TMR3
    {
        struct CTRL1 : public Register<0x40000400, 32, ReadWriteMode>
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

            struct TWCMSEL : public RegisterField<CTRL1, 5, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<TWCMSEL, 0U>;
                using Value1 = FieldValue<TWCMSEL, 1U>;
                using Value2 = FieldValue<TWCMSEL, 2U>;
                using Value3 = FieldValue<TWCMSEL, 3U>;
            };

            struct OWCDIR : public RegisterField<CTRL1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OWCDIR, 0U>;
                using Value1 = FieldValue<OWCDIR, 1U>;
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

        struct CTRL2 : public Register<0x40000404, 32, ReadWriteMode>
        {
            struct C1INSEL : public RegisterField<CTRL2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1INSEL, 0U>;
                using Value1 = FieldValue<C1INSEL, 1U>;
            };

            struct PTOS : public RegisterField<CTRL2, 4, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<PTOS, 0U>;
                using Value1 = FieldValue<PTOS, 1U>;
                using Value2 = FieldValue<PTOS, 2U>;
                using Value3 = FieldValue<PTOS, 3U>;
                using Value4 = FieldValue<PTOS, 4U>;
                using Value5 = FieldValue<PTOS, 5U>;
                using Value6 = FieldValue<PTOS, 6U>;
                using Value7 = FieldValue<PTOS, 7U>;
            };

            struct DRS : public RegisterField<CTRL2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DRS, 0U>;
                using Value1 = FieldValue<DRS, 1U>;
            };

        };

        struct STCTRL : public Register<0x40000408, 32, ReadWriteMode>
        {
            struct ESP : public RegisterField<STCTRL, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ESP, 0U>;
                using Value1 = FieldValue<ESP, 1U>;
            };

            struct ECMBEN : public RegisterField<STCTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ECMBEN, 0U>;
                using Value1 = FieldValue<ECMBEN, 1U>;
            };

            struct ESDIV : public RegisterField<STCTRL, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<ESDIV, 0U>;
                using Value1 = FieldValue<ESDIV, 1U>;
                using Value2 = FieldValue<ESDIV, 2U>;
                using Value3 = FieldValue<ESDIV, 3U>;
            };

            struct ESF : public RegisterField<STCTRL, 8, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ESF, 0U>;
                using Value1 = FieldValue<ESF, 1U>;
                using Value2 = FieldValue<ESF, 2U>;
                using Value3 = FieldValue<ESF, 3U>;
                using Value4 = FieldValue<ESF, 4U>;
                using Value5 = FieldValue<ESF, 5U>;
                using Value6 = FieldValue<ESF, 6U>;
                using Value7 = FieldValue<ESF, 7U>;
                using Value8 = FieldValue<ESF, 8U>;
                using Value9 = FieldValue<ESF, 9U>;
                using Value10 = FieldValue<ESF, 10U>;
                using Value11 = FieldValue<ESF, 11U>;
                using Value12 = FieldValue<ESF, 12U>;
                using Value13 = FieldValue<ESF, 13U>;
                using Value14 = FieldValue<ESF, 14U>;
                using Value15 = FieldValue<ESF, 15U>;
            };

            struct STS : public RegisterField<STCTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<STS, 0U>;
                using Value1 = FieldValue<STS, 1U>;
            };

            struct STIS : public RegisterField<STCTRL, 4, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<STIS, 0U>;
                using Value1 = FieldValue<STIS, 1U>;
                using Value2 = FieldValue<STIS, 2U>;
                using Value3 = FieldValue<STIS, 3U>;
                using Value4 = FieldValue<STIS, 4U>;
                using Value5 = FieldValue<STIS, 5U>;
                using Value6 = FieldValue<STIS, 6U>;
                using Value7 = FieldValue<STIS, 7U>;
            };

            struct SMSEL : public RegisterField<STCTRL, 0, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<SMSEL, 0U>;
                using Value1 = FieldValue<SMSEL, 1U>;
                using Value2 = FieldValue<SMSEL, 2U>;
                using Value3 = FieldValue<SMSEL, 3U>;
                using Value4 = FieldValue<SMSEL, 4U>;
                using Value5 = FieldValue<SMSEL, 5U>;
                using Value6 = FieldValue<SMSEL, 6U>;
                using Value7 = FieldValue<SMSEL, 7U>;
            };

        };

        struct IDEN : public Register<0x4000040C, 32, ReadWriteMode>
        {
            struct TDEN : public RegisterField<IDEN, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TDEN, 0U>;
                using Value1 = FieldValue<TDEN, 1U>;
            };

            struct C4DEN : public RegisterField<IDEN, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4DEN, 0U>;
                using Value1 = FieldValue<C4DEN, 1U>;
            };

            struct C3DEN : public RegisterField<IDEN, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3DEN, 0U>;
                using Value1 = FieldValue<C3DEN, 1U>;
            };

            struct C2DEN : public RegisterField<IDEN, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2DEN, 0U>;
                using Value1 = FieldValue<C2DEN, 1U>;
            };

            struct C1DEN : public RegisterField<IDEN, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1DEN, 0U>;
                using Value1 = FieldValue<C1DEN, 1U>;
            };

            struct OVFDEN : public RegisterField<IDEN, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFDEN, 0U>;
                using Value1 = FieldValue<OVFDEN, 1U>;
            };

            struct TIEN : public RegisterField<IDEN, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TIEN, 0U>;
                using Value1 = FieldValue<TIEN, 1U>;
            };

            struct C4IEN : public RegisterField<IDEN, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4IEN, 0U>;
                using Value1 = FieldValue<C4IEN, 1U>;
            };

            struct C3IEN : public RegisterField<IDEN, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3IEN, 0U>;
                using Value1 = FieldValue<C3IEN, 1U>;
            };

            struct C2IEN : public RegisterField<IDEN, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2IEN, 0U>;
                using Value1 = FieldValue<C2IEN, 1U>;
            };

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

        struct ISTS : public Register<0x40000410, 32, ReadWriteMode>
        {
            struct C4RF : public RegisterField<ISTS, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4RF, 0U>;
                using Value1 = FieldValue<C4RF, 1U>;
            };

            struct C3RF : public RegisterField<ISTS, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3RF, 0U>;
                using Value1 = FieldValue<C3RF, 1U>;
            };

            struct C2RF : public RegisterField<ISTS, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2RF, 0U>;
                using Value1 = FieldValue<C2RF, 1U>;
            };

            struct C1RF : public RegisterField<ISTS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1RF, 0U>;
                using Value1 = FieldValue<C1RF, 1U>;
            };

            struct TRGIF : public RegisterField<ISTS, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TRGIF, 0U>;
                using Value1 = FieldValue<TRGIF, 1U>;
            };

            struct C4IF : public RegisterField<ISTS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4IF, 0U>;
                using Value1 = FieldValue<C4IF, 1U>;
            };

            struct C3IF : public RegisterField<ISTS, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3IF, 0U>;
                using Value1 = FieldValue<C3IF, 1U>;
            };

            struct C2IF : public RegisterField<ISTS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2IF, 0U>;
                using Value1 = FieldValue<C2IF, 1U>;
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

        struct SWEVT : public Register<0x40000414, 32, ReadWriteMode>
        {
            struct TRGSWTR : public RegisterField<SWEVT, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TRGSWTR, 0U>;
                using Value1 = FieldValue<TRGSWTR, 1U>;
            };

            struct C4SWTR : public RegisterField<SWEVT, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4SWTR, 0U>;
                using Value1 = FieldValue<C4SWTR, 1U>;
            };

            struct C3SWTR : public RegisterField<SWEVT, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3SWTR, 0U>;
                using Value1 = FieldValue<C3SWTR, 1U>;
            };

            struct C2SWTR : public RegisterField<SWEVT, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2SWTR, 0U>;
                using Value1 = FieldValue<C2SWTR, 1U>;
            };

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

        struct CM1_OUTPUT : public Register<0x40000418, 32, ReadWriteMode>
        {
            struct C2OSEN : public RegisterField<CM1_OUTPUT, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2OSEN, 0U>;
                using Value1 = FieldValue<C2OSEN, 1U>;
            };

            struct C2OCTRL : public RegisterField<CM1_OUTPUT, 12, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<C2OCTRL, 0U>;
                using Value1 = FieldValue<C2OCTRL, 1U>;
                using Value2 = FieldValue<C2OCTRL, 2U>;
                using Value3 = FieldValue<C2OCTRL, 3U>;
                using Value4 = FieldValue<C2OCTRL, 4U>;
                using Value5 = FieldValue<C2OCTRL, 5U>;
                using Value6 = FieldValue<C2OCTRL, 6U>;
                using Value7 = FieldValue<C2OCTRL, 7U>;
            };

            struct C2OBEN : public RegisterField<CM1_OUTPUT, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2OBEN, 0U>;
                using Value1 = FieldValue<C2OBEN, 1U>;
            };

            struct C2OIEN : public RegisterField<CM1_OUTPUT, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2OIEN, 0U>;
                using Value1 = FieldValue<C2OIEN, 1U>;
            };

            struct C2C : public RegisterField<CM1_OUTPUT, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C2C, 0U>;
                using Value1 = FieldValue<C2C, 1U>;
                using Value2 = FieldValue<C2C, 2U>;
                using Value3 = FieldValue<C2C, 3U>;
            };

            struct C1OSEN : public RegisterField<CM1_OUTPUT, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C1OSEN, 0U>;
                using Value1 = FieldValue<C1OSEN, 1U>;
            };

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

        struct CM1_INPUT : public Register<0x40000418, 32, ReadWriteMode>
        {
            struct C2DF : public RegisterField<CM1_INPUT, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<C2DF, 0U>;
                using Value1 = FieldValue<C2DF, 1U>;
                using Value2 = FieldValue<C2DF, 2U>;
                using Value3 = FieldValue<C2DF, 3U>;
                using Value4 = FieldValue<C2DF, 4U>;
                using Value5 = FieldValue<C2DF, 5U>;
                using Value6 = FieldValue<C2DF, 6U>;
                using Value7 = FieldValue<C2DF, 7U>;
                using Value8 = FieldValue<C2DF, 8U>;
                using Value9 = FieldValue<C2DF, 9U>;
                using Value10 = FieldValue<C2DF, 10U>;
                using Value11 = FieldValue<C2DF, 11U>;
                using Value12 = FieldValue<C2DF, 12U>;
                using Value13 = FieldValue<C2DF, 13U>;
                using Value14 = FieldValue<C2DF, 14U>;
                using Value15 = FieldValue<C2DF, 15U>;
            };

            struct C2IDIV : public RegisterField<CM1_INPUT, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C2IDIV, 0U>;
                using Value1 = FieldValue<C2IDIV, 1U>;
                using Value2 = FieldValue<C2IDIV, 2U>;
                using Value3 = FieldValue<C2IDIV, 3U>;
            };

            struct C2C : public RegisterField<CM1_INPUT, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C2C, 0U>;
                using Value1 = FieldValue<C2C, 1U>;
                using Value2 = FieldValue<C2C, 2U>;
                using Value3 = FieldValue<C2C, 3U>;
            };

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

        struct CM2_OUTPUT : public Register<0x4000041C, 32, ReadWriteMode>
        {
            struct C4OSEN : public RegisterField<CM2_OUTPUT, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4OSEN, 0U>;
                using Value1 = FieldValue<C4OSEN, 1U>;
            };

            struct C4OCTRL : public RegisterField<CM2_OUTPUT, 12, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<C4OCTRL, 0U>;
                using Value1 = FieldValue<C4OCTRL, 1U>;
                using Value2 = FieldValue<C4OCTRL, 2U>;
                using Value3 = FieldValue<C4OCTRL, 3U>;
                using Value4 = FieldValue<C4OCTRL, 4U>;
                using Value5 = FieldValue<C4OCTRL, 5U>;
                using Value6 = FieldValue<C4OCTRL, 6U>;
                using Value7 = FieldValue<C4OCTRL, 7U>;
            };

            struct C4OBEN : public RegisterField<CM2_OUTPUT, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4OBEN, 0U>;
                using Value1 = FieldValue<C4OBEN, 1U>;
            };

            struct C4OIEN : public RegisterField<CM2_OUTPUT, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4OIEN, 0U>;
                using Value1 = FieldValue<C4OIEN, 1U>;
            };

            struct C4C : public RegisterField<CM2_OUTPUT, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C4C, 0U>;
                using Value1 = FieldValue<C4C, 1U>;
                using Value2 = FieldValue<C4C, 2U>;
                using Value3 = FieldValue<C4C, 3U>;
            };

            struct C3OSEN : public RegisterField<CM2_OUTPUT, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3OSEN, 0U>;
                using Value1 = FieldValue<C3OSEN, 1U>;
            };

            struct C3OCTRL : public RegisterField<CM2_OUTPUT, 4, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<C3OCTRL, 0U>;
                using Value1 = FieldValue<C3OCTRL, 1U>;
                using Value2 = FieldValue<C3OCTRL, 2U>;
                using Value3 = FieldValue<C3OCTRL, 3U>;
                using Value4 = FieldValue<C3OCTRL, 4U>;
                using Value5 = FieldValue<C3OCTRL, 5U>;
                using Value6 = FieldValue<C3OCTRL, 6U>;
                using Value7 = FieldValue<C3OCTRL, 7U>;
            };

            struct C3OBEN : public RegisterField<CM2_OUTPUT, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3OBEN, 0U>;
                using Value1 = FieldValue<C3OBEN, 1U>;
            };

            struct C3OIEN : public RegisterField<CM2_OUTPUT, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3OIEN, 0U>;
                using Value1 = FieldValue<C3OIEN, 1U>;
            };

            struct C3C : public RegisterField<CM2_OUTPUT, 0, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C3C, 0U>;
                using Value1 = FieldValue<C3C, 1U>;
                using Value2 = FieldValue<C3C, 2U>;
                using Value3 = FieldValue<C3C, 3U>;
            };

        };

        struct CM2_INPUT : public Register<0x4000041C, 32, ReadWriteMode>
        {
            struct C4DF : public RegisterField<CM2_INPUT, 12, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<C4DF, 0U>;
                using Value1 = FieldValue<C4DF, 1U>;
                using Value2 = FieldValue<C4DF, 2U>;
                using Value3 = FieldValue<C4DF, 3U>;
                using Value4 = FieldValue<C4DF, 4U>;
                using Value5 = FieldValue<C4DF, 5U>;
                using Value6 = FieldValue<C4DF, 6U>;
                using Value7 = FieldValue<C4DF, 7U>;
                using Value8 = FieldValue<C4DF, 8U>;
                using Value9 = FieldValue<C4DF, 9U>;
                using Value10 = FieldValue<C4DF, 10U>;
                using Value11 = FieldValue<C4DF, 11U>;
                using Value12 = FieldValue<C4DF, 12U>;
                using Value13 = FieldValue<C4DF, 13U>;
                using Value14 = FieldValue<C4DF, 14U>;
                using Value15 = FieldValue<C4DF, 15U>;
            };

            struct C4IDIV : public RegisterField<CM2_INPUT, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C4IDIV, 0U>;
                using Value1 = FieldValue<C4IDIV, 1U>;
                using Value2 = FieldValue<C4IDIV, 2U>;
                using Value3 = FieldValue<C4IDIV, 3U>;
            };

            struct C4C : public RegisterField<CM2_INPUT, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C4C, 0U>;
                using Value1 = FieldValue<C4C, 1U>;
                using Value2 = FieldValue<C4C, 2U>;
                using Value3 = FieldValue<C4C, 3U>;
            };

            struct C3DF : public RegisterField<CM2_INPUT, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<C3DF, 0U>;
                using Value1 = FieldValue<C3DF, 1U>;
                using Value2 = FieldValue<C3DF, 2U>;
                using Value3 = FieldValue<C3DF, 3U>;
                using Value4 = FieldValue<C3DF, 4U>;
                using Value5 = FieldValue<C3DF, 5U>;
                using Value6 = FieldValue<C3DF, 6U>;
                using Value7 = FieldValue<C3DF, 7U>;
                using Value8 = FieldValue<C3DF, 8U>;
                using Value9 = FieldValue<C3DF, 9U>;
                using Value10 = FieldValue<C3DF, 10U>;
                using Value11 = FieldValue<C3DF, 11U>;
                using Value12 = FieldValue<C3DF, 12U>;
                using Value13 = FieldValue<C3DF, 13U>;
                using Value14 = FieldValue<C3DF, 14U>;
                using Value15 = FieldValue<C3DF, 15U>;
            };

            struct C3IDIV : public RegisterField<CM2_INPUT, 2, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C3IDIV, 0U>;
                using Value1 = FieldValue<C3IDIV, 1U>;
                using Value2 = FieldValue<C3IDIV, 2U>;
                using Value3 = FieldValue<C3IDIV, 3U>;
            };

            struct C3C : public RegisterField<CM2_INPUT, 0, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<C3C, 0U>;
                using Value1 = FieldValue<C3C, 1U>;
                using Value2 = FieldValue<C3C, 2U>;
                using Value3 = FieldValue<C3C, 3U>;
            };

        };

        struct CCTRL : public Register<0x40000420, 32, ReadWriteMode>
        {
            struct C4P : public RegisterField<CCTRL, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4P, 0U>;
                using Value1 = FieldValue<C4P, 1U>;
            };

            struct C4EN : public RegisterField<CCTRL, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C4EN, 0U>;
                using Value1 = FieldValue<C4EN, 1U>;
            };

            struct C3P : public RegisterField<CCTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3P, 0U>;
                using Value1 = FieldValue<C3P, 1U>;
            };

            struct C3EN : public RegisterField<CCTRL, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C3EN, 0U>;
                using Value1 = FieldValue<C3EN, 1U>;
            };

            struct C2P : public RegisterField<CCTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2P, 0U>;
                using Value1 = FieldValue<C2P, 1U>;
            };

            struct C2EN : public RegisterField<CCTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<C2EN, 0U>;
                using Value1 = FieldValue<C2EN, 1U>;
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

        struct CVAL : public Register<0x40000424, 32, ReadWriteMode>
        {
            struct CVALField : public RegisterField<CVAL, 0, 16, ReadWriteMode>
            {
            };

        };

        struct DIV : public Register<0x40000428, 32, ReadWriteMode>
        {
            struct DIVField : public RegisterField<DIV, 0, 16, ReadWriteMode>
            {
            };

        };

        struct PR : public Register<0x4000042C, 32, ReadWriteMode>
        {
            struct PRField : public RegisterField<PR, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C1DT : public Register<0x40000434, 32, ReadWriteMode>
        {
            struct C1DTField : public RegisterField<C1DT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C2DT : public Register<0x40000438, 32, ReadWriteMode>
        {
            struct C2DTField : public RegisterField<C2DT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C3DT : public Register<0x4000043C, 32, ReadWriteMode>
        {
            struct C3DTField : public RegisterField<C3DT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C4DT : public Register<0x40000440, 32, ReadWriteMode>
        {
            struct C4DTField : public RegisterField<C4DT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct DMACTRL : public Register<0x40000448, 32, ReadWriteMode>
        {
            struct DTB : public RegisterField<DMACTRL, 8, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<DTB, 0U>;
                using Value1 = FieldValue<DTB, 1U>;
                using Value2 = FieldValue<DTB, 2U>;
                using Value3 = FieldValue<DTB, 3U>;
                using Value4 = FieldValue<DTB, 4U>;
                using Value5 = FieldValue<DTB, 5U>;
                using Value6 = FieldValue<DTB, 6U>;
                using Value7 = FieldValue<DTB, 7U>;
                using Value8 = FieldValue<DTB, 8U>;
                using Value9 = FieldValue<DTB, 9U>;
                using Value10 = FieldValue<DTB, 10U>;
                using Value11 = FieldValue<DTB, 11U>;
                using Value12 = FieldValue<DTB, 12U>;
                using Value13 = FieldValue<DTB, 13U>;
                using Value14 = FieldValue<DTB, 14U>;
                using Value15 = FieldValue<DTB, 15U>;
                using Value16 = FieldValue<DTB, 16U>;
                using Value17 = FieldValue<DTB, 17U>;
                using Value18 = FieldValue<DTB, 18U>;
                using Value19 = FieldValue<DTB, 19U>;
                using Value20 = FieldValue<DTB, 20U>;
                using Value21 = FieldValue<DTB, 21U>;
                using Value22 = FieldValue<DTB, 22U>;
                using Value23 = FieldValue<DTB, 23U>;
                using Value24 = FieldValue<DTB, 24U>;
                using Value25 = FieldValue<DTB, 25U>;
                using Value26 = FieldValue<DTB, 26U>;
                using Value27 = FieldValue<DTB, 27U>;
                using Value28 = FieldValue<DTB, 28U>;
                using Value29 = FieldValue<DTB, 29U>;
                using Value30 = FieldValue<DTB, 30U>;
                using Value31 = FieldValue<DTB, 31U>;
            };

            struct ADDR : public RegisterField<DMACTRL, 0, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDR, 0U>;
                using Value1 = FieldValue<ADDR, 1U>;
                using Value2 = FieldValue<ADDR, 2U>;
                using Value3 = FieldValue<ADDR, 3U>;
                using Value4 = FieldValue<ADDR, 4U>;
                using Value5 = FieldValue<ADDR, 5U>;
                using Value6 = FieldValue<ADDR, 6U>;
                using Value7 = FieldValue<ADDR, 7U>;
                using Value8 = FieldValue<ADDR, 8U>;
                using Value9 = FieldValue<ADDR, 9U>;
                using Value10 = FieldValue<ADDR, 10U>;
                using Value11 = FieldValue<ADDR, 11U>;
                using Value12 = FieldValue<ADDR, 12U>;
                using Value13 = FieldValue<ADDR, 13U>;
                using Value14 = FieldValue<ADDR, 14U>;
                using Value15 = FieldValue<ADDR, 15U>;
                using Value16 = FieldValue<ADDR, 16U>;
                using Value17 = FieldValue<ADDR, 17U>;
                using Value18 = FieldValue<ADDR, 18U>;
                using Value19 = FieldValue<ADDR, 19U>;
                using Value20 = FieldValue<ADDR, 20U>;
                using Value21 = FieldValue<ADDR, 21U>;
                using Value22 = FieldValue<ADDR, 22U>;
                using Value23 = FieldValue<ADDR, 23U>;
                using Value24 = FieldValue<ADDR, 24U>;
                using Value25 = FieldValue<ADDR, 25U>;
                using Value26 = FieldValue<ADDR, 26U>;
                using Value27 = FieldValue<ADDR, 27U>;
                using Value28 = FieldValue<ADDR, 28U>;
                using Value29 = FieldValue<ADDR, 29U>;
                using Value30 = FieldValue<ADDR, 30U>;
                using Value31 = FieldValue<ADDR, 31U>;
            };

        };

        struct DMADT : public Register<0x4000044C, 32, ReadWriteMode>
        {
            struct DMADTField : public RegisterField<DMADT, 0, 16, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(TMR3REGISTERS_HPP)
