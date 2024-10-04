/*******************************************************************************
* Filename      : usart1registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(USART1REGISTERS_HPP)
#define USART1REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct USART1
    {
        struct STS : public Register<0x40013800, 32, ReadWriteMode>
        {
            struct CTSCF : public RegisterField<STS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CTSCF, 0U>;
                using Value1 = FieldValue<CTSCF, 1U>;
            };

            struct BFF : public RegisterField<STS, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BFF, 0U>;
                using Value1 = FieldValue<BFF, 1U>;
            };

            struct TDBE : public RegisterField<STS, 7, 1, ReadMode>
            {
                using Value0 = FieldValue<TDBE, 0U>;
                using Value1 = FieldValue<TDBE, 1U>;
            };

            struct TDC : public RegisterField<STS, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TDC, 0U>;
                using Value1 = FieldValue<TDC, 1U>;
            };

            struct RDBF : public RegisterField<STS, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RDBF, 0U>;
                using Value1 = FieldValue<RDBF, 1U>;
            };

            struct IDLEF : public RegisterField<STS, 4, 1, ReadMode>
            {
                using Value0 = FieldValue<IDLEF, 0U>;
                using Value1 = FieldValue<IDLEF, 1U>;
            };

            struct ROERR : public RegisterField<STS, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<ROERR, 0U>;
                using Value1 = FieldValue<ROERR, 1U>;
            };

            struct NERR : public RegisterField<STS, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<NERR, 0U>;
                using Value1 = FieldValue<NERR, 1U>;
            };

            struct FERR : public RegisterField<STS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<FERR, 0U>;
                using Value1 = FieldValue<FERR, 1U>;
            };

            struct PERR : public RegisterField<STS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<PERR, 0U>;
                using Value1 = FieldValue<PERR, 1U>;
            };

        };

        struct DT : public Register<0x40013804, 32, ReadWriteMode>
        {
            struct DTField : public RegisterField<DT, 0, 9, ReadWriteMode>
            {
            };

        };

        struct BAUDR : public Register<0x40013808, 32, ReadWriteMode>
        {
            struct DIV : public RegisterField<BAUDR, 0, 16, ReadWriteMode>
            {
            };

        };

        struct CTRL1 : public Register<0x4001380C, 32, ReadWriteMode>
        {
            struct UEN : public RegisterField<CTRL1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UEN, 0U>;
                using Value1 = FieldValue<UEN, 1U>;
            };

            struct DBN : public RegisterField<CTRL1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DBN, 0U>;
                using Value1 = FieldValue<DBN, 1U>;
            };

            struct WUM : public RegisterField<CTRL1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WUM, 0U>;
                using Value1 = FieldValue<WUM, 1U>;
            };

            struct PEN : public RegisterField<CTRL1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PEN, 0U>;
                using Value1 = FieldValue<PEN, 1U>;
            };

            struct PSEL : public RegisterField<CTRL1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PSEL, 0U>;
                using Value1 = FieldValue<PSEL, 1U>;
            };

            struct PERRIEN : public RegisterField<CTRL1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PERRIEN, 0U>;
                using Value1 = FieldValue<PERRIEN, 1U>;
            };

            struct TDBEIEN : public RegisterField<CTRL1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TDBEIEN, 0U>;
                using Value1 = FieldValue<TDBEIEN, 1U>;
            };

            struct TDCIEN : public RegisterField<CTRL1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TDCIEN, 0U>;
                using Value1 = FieldValue<TDCIEN, 1U>;
            };

            struct RDBFIEN : public RegisterField<CTRL1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RDBFIEN, 0U>;
                using Value1 = FieldValue<RDBFIEN, 1U>;
            };

            struct IDLEIEN : public RegisterField<CTRL1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IDLEIEN, 0U>;
                using Value1 = FieldValue<IDLEIEN, 1U>;
            };

            struct TEN : public RegisterField<CTRL1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TEN, 0U>;
                using Value1 = FieldValue<TEN, 1U>;
            };

            struct REN : public RegisterField<CTRL1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<REN, 0U>;
                using Value1 = FieldValue<REN, 1U>;
            };

            struct RM : public RegisterField<CTRL1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RM, 0U>;
                using Value1 = FieldValue<RM, 1U>;
            };

            struct SBF : public RegisterField<CTRL1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SBF, 0U>;
                using Value1 = FieldValue<SBF, 1U>;
            };

        };

        struct CTRL2 : public Register<0x40013810, 32, ReadWriteMode>
        {
            struct LINEN : public RegisterField<CTRL2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LINEN, 0U>;
                using Value1 = FieldValue<LINEN, 1U>;
            };

            struct STOPBN : public RegisterField<CTRL2, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<STOPBN, 0U>;
                using Value1 = FieldValue<STOPBN, 1U>;
                using Value2 = FieldValue<STOPBN, 2U>;
                using Value3 = FieldValue<STOPBN, 3U>;
            };

            struct CLKEN : public RegisterField<CTRL2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKEN, 0U>;
                using Value1 = FieldValue<CLKEN, 1U>;
            };

            struct CLKPOL : public RegisterField<CTRL2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKPOL, 0U>;
                using Value1 = FieldValue<CLKPOL, 1U>;
            };

            struct CLKPHA : public RegisterField<CTRL2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKPHA, 0U>;
                using Value1 = FieldValue<CLKPHA, 1U>;
            };

            struct LBCP : public RegisterField<CTRL2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LBCP, 0U>;
                using Value1 = FieldValue<LBCP, 1U>;
            };

            struct BFIEN : public RegisterField<CTRL2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BFIEN, 0U>;
                using Value1 = FieldValue<BFIEN, 1U>;
            };

            struct BFBN : public RegisterField<CTRL2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BFBN, 0U>;
                using Value1 = FieldValue<BFBN, 1U>;
            };

            struct ID : public RegisterField<CTRL2, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ID, 0U>;
                using Value1 = FieldValue<ID, 1U>;
                using Value2 = FieldValue<ID, 2U>;
                using Value3 = FieldValue<ID, 3U>;
                using Value4 = FieldValue<ID, 4U>;
                using Value5 = FieldValue<ID, 5U>;
                using Value6 = FieldValue<ID, 6U>;
                using Value7 = FieldValue<ID, 7U>;
                using Value8 = FieldValue<ID, 8U>;
                using Value9 = FieldValue<ID, 9U>;
                using Value10 = FieldValue<ID, 10U>;
                using Value11 = FieldValue<ID, 11U>;
                using Value12 = FieldValue<ID, 12U>;
                using Value13 = FieldValue<ID, 13U>;
                using Value14 = FieldValue<ID, 14U>;
                using Value15 = FieldValue<ID, 15U>;
            };

        };

        struct CTRL3 : public Register<0x40013814, 32, ReadWriteMode>
        {
            struct CTSCFIEN : public RegisterField<CTRL3, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CTSCFIEN, 0U>;
                using Value1 = FieldValue<CTSCFIEN, 1U>;
            };

            struct CTSEN : public RegisterField<CTRL3, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CTSEN, 0U>;
                using Value1 = FieldValue<CTSEN, 1U>;
            };

            struct RTSEN : public RegisterField<CTRL3, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RTSEN, 0U>;
                using Value1 = FieldValue<RTSEN, 1U>;
            };

            struct DMATEN : public RegisterField<CTRL3, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMATEN, 0U>;
                using Value1 = FieldValue<DMATEN, 1U>;
            };

            struct DMAREN : public RegisterField<CTRL3, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMAREN, 0U>;
                using Value1 = FieldValue<DMAREN, 1U>;
            };

            struct SCMEN : public RegisterField<CTRL3, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SCMEN, 0U>;
                using Value1 = FieldValue<SCMEN, 1U>;
            };

            struct SCNACKEN : public RegisterField<CTRL3, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SCNACKEN, 0U>;
                using Value1 = FieldValue<SCNACKEN, 1U>;
            };

            struct SLBEN : public RegisterField<CTRL3, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SLBEN, 0U>;
                using Value1 = FieldValue<SLBEN, 1U>;
            };

            struct IRDALP : public RegisterField<CTRL3, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IRDALP, 0U>;
                using Value1 = FieldValue<IRDALP, 1U>;
            };

            struct IRDAEN : public RegisterField<CTRL3, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IRDAEN, 0U>;
                using Value1 = FieldValue<IRDAEN, 1U>;
            };

            struct ERRIEN : public RegisterField<CTRL3, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERRIEN, 0U>;
                using Value1 = FieldValue<ERRIEN, 1U>;
            };

        };

        struct GDIV : public Register<0x40013818, 32, ReadWriteMode>
        {
            struct SCGT : public RegisterField<GDIV, 8, 8, ReadWriteMode>
            {
            };

            struct ISDIV : public RegisterField<GDIV, 0, 8, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(USART1REGISTERS_HPP)
