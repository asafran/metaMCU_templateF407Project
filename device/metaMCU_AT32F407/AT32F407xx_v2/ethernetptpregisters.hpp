/*******************************************************************************
* Filename      : ethernetptpregisters.hpp
*
* Details       : Ethernet: Precision time protocol. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETPTPREGISTERS_HPP)
#define ETHERNETPTPREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct ETHERNET_PTP
    {
        struct PTPTSCTRL : public Register<0x40028700, 32, ReadWriteMode>
        {
            struct TE : public RegisterField<PTPTSCTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TE, 0U>;
                using Value1 = FieldValue<TE, 1U>;
            };

            struct TFCU : public RegisterField<PTPTSCTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TFCU, 0U>;
                using Value1 = FieldValue<TFCU, 1U>;
            };

            struct TI : public RegisterField<PTPTSCTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TI, 0U>;
                using Value1 = FieldValue<TI, 1U>;
            };

            struct TU : public RegisterField<PTPTSCTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TU, 0U>;
                using Value1 = FieldValue<TU, 1U>;
            };

            struct TITE : public RegisterField<PTPTSCTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TITE, 0U>;
                using Value1 = FieldValue<TITE, 1U>;
            };

            struct ARU : public RegisterField<PTPTSCTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ARU, 0U>;
                using Value1 = FieldValue<ARU, 1U>;
            };

            struct ETAF : public RegisterField<PTPTSCTRL, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ETAF, 0U>;
                using Value1 = FieldValue<ETAF, 1U>;
            };

            struct TDBRC : public RegisterField<PTPTSCTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TDBRC, 0U>;
                using Value1 = FieldValue<TDBRC, 1U>;
            };

            struct EPPV2F : public RegisterField<PTPTSCTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EPPV2F, 0U>;
                using Value1 = FieldValue<EPPV2F, 1U>;
            };

            struct EPPEF : public RegisterField<PTPTSCTRL, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EPPEF, 0U>;
                using Value1 = FieldValue<EPPEF, 1U>;
            };

            struct EPPFSIP6U : public RegisterField<PTPTSCTRL, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EPPFSIP6U, 0U>;
                using Value1 = FieldValue<EPPFSIP6U, 1U>;
            };

            struct EPPFSIP4U : public RegisterField<PTPTSCTRL, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EPPFSIP4U, 0U>;
                using Value1 = FieldValue<EPPFSIP4U, 1U>;
            };

            struct ETSFEM : public RegisterField<PTPTSCTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ETSFEM, 0U>;
                using Value1 = FieldValue<ETSFEM, 1U>;
            };

            struct ESFMRTM : public RegisterField<PTPTSCTRL, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ESFMRTM, 0U>;
                using Value1 = FieldValue<ESFMRTM, 1U>;
            };

            struct SPPFTS : public RegisterField<PTPTSCTRL, 16, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<SPPFTS, 0U>;
                using Value1 = FieldValue<SPPFTS, 1U>;
                using Value2 = FieldValue<SPPFTS, 2U>;
                using Value3 = FieldValue<SPPFTS, 3U>;
            };

            struct EMAFPFF : public RegisterField<PTPTSCTRL, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMAFPFF, 0U>;
                using Value1 = FieldValue<EMAFPFF, 1U>;
            };

        };

        struct PTPSSINC : public Register<0x40028704, 32, ReadWriteMode>
        {
            struct SSIV : public RegisterField<PTPSSINC, 0, 8, ReadWriteMode>
            {
            };

        };

        struct PTPTSH : public Register<0x40028708, 32, ReadMode>
        {
            struct TS : public RegisterField<PTPTSH, 0, 32, ReadMode>
            {
            };

        };

        struct PTPTSL : public Register<0x4002870C, 32, ReadMode>
        {
            struct TSS : public RegisterField<PTPTSL, 0, 31, ReadMode>
            {
            };

            struct AST : public RegisterField<PTPTSL, 31, 1, ReadMode>
            {
                using Value0 = FieldValue<AST, 0U>;
                using Value1 = FieldValue<AST, 1U>;
            };

        };

        struct PTPTSHUD : public Register<0x40028710, 32, ReadWriteMode>
        {
            struct TS : public RegisterField<PTPTSHUD, 0, 32, ReadWriteMode>
            {
            };

        };

        struct PTPTSLUD : public Register<0x40028714, 32, ReadWriteMode>
        {
            struct TSS : public RegisterField<PTPTSLUD, 0, 31, ReadWriteMode>
            {
            };

            struct AST : public RegisterField<PTPTSLUD, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AST, 0U>;
                using Value1 = FieldValue<AST, 1U>;
            };

        };

        struct PTPTSAD : public Register<0x40028718, 32, ReadWriteMode>
        {
            struct TAR : public RegisterField<PTPTSAD, 0, 32, ReadWriteMode>
            {
            };

        };

        struct PTPTTH : public Register<0x4002871C, 32, ReadWriteMode>
        {
            struct TTSR : public RegisterField<PTPTTH, 0, 32, ReadWriteMode>
            {
            };

        };

        struct PTPTTL : public Register<0x40028720, 32, ReadWriteMode>
        {
            struct TTLR : public RegisterField<PTPTTL, 0, 32, ReadWriteMode>
            {
            };

        };

        struct PTPTSSR : public Register<0x40028728, 32, ReadMode>
        {
            struct TSO : public RegisterField<PTPTSSR, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<TSO, 0U>;
                using Value1 = FieldValue<TSO, 1U>;
            };

            struct TTTR : public RegisterField<PTPTSSR, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<TTTR, 0U>;
                using Value1 = FieldValue<TTTR, 1U>;
            };

        };

        struct PTPPPSCR : public Register<0x4002872C, 32, ReadMode>
        {
            struct POFC : public RegisterField<PTPPPSCR, 0, 4, ReadMode>
            {
                using Value0 = FieldValue<POFC, 0U>;
                using Value1 = FieldValue<POFC, 1U>;
                using Value2 = FieldValue<POFC, 2U>;
                using Value3 = FieldValue<POFC, 3U>;
                using Value4 = FieldValue<POFC, 4U>;
                using Value5 = FieldValue<POFC, 5U>;
                using Value6 = FieldValue<POFC, 6U>;
                using Value7 = FieldValue<POFC, 7U>;
                using Value8 = FieldValue<POFC, 8U>;
                using Value9 = FieldValue<POFC, 9U>;
                using Value10 = FieldValue<POFC, 10U>;
                using Value11 = FieldValue<POFC, 11U>;
                using Value12 = FieldValue<POFC, 12U>;
                using Value13 = FieldValue<POFC, 13U>;
                using Value14 = FieldValue<POFC, 14U>;
                using Value15 = FieldValue<POFC, 15U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(ETHERNETPTPREGISTERS_HPP)
