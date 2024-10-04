/*******************************************************************************
* Filename      : flashregisters.hpp
*
* Details       : Flash memory controler. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(FLASHREGISTERS_HPP)
#define FLASHREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct FLASH
    {
        struct PSR : public Register<0x40022000, 32, ReadWriteMode>
        {
        };

        struct UNLOCK : public Register<0x40022004, 32, WriteMode>
        {
            struct UKVAL : public RegisterField<UNLOCK, 0, 32, WriteMode>
            {
            };

        };

        struct USD_UNLOCK : public Register<0x40022008, 32, WriteMode>
        {
            struct USD_UKVAL : public RegisterField<USD_UNLOCK, 0, 32, WriteMode>
            {
            };

        };

        struct STS : public Register<0x4002200C, 32, ReadWriteMode>
        {
            struct ODF : public RegisterField<STS, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODF, 0U>;
                using Value1 = FieldValue<ODF, 1U>;
            };

            struct EPPERR : public RegisterField<STS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EPPERR, 0U>;
                using Value1 = FieldValue<EPPERR, 1U>;
            };

            struct PRGMERR : public RegisterField<STS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PRGMERR, 0U>;
                using Value1 = FieldValue<PRGMERR, 1U>;
            };

            struct OBF : public RegisterField<STS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<OBF, 0U>;
                using Value1 = FieldValue<OBF, 1U>;
            };

        };

        struct CTRL : public Register<0x40022010, 32, ReadWriteMode>
        {
            struct FPRGM : public RegisterField<CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FPRGM, 0U>;
                using Value1 = FieldValue<FPRGM, 1U>;
            };

            struct SECERS : public RegisterField<CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SECERS, 0U>;
                using Value1 = FieldValue<SECERS, 1U>;
            };

            struct BANKERS : public RegisterField<CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BANKERS, 0U>;
                using Value1 = FieldValue<BANKERS, 1U>;
            };

            struct USDPRGM : public RegisterField<CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USDPRGM, 0U>;
                using Value1 = FieldValue<USDPRGM, 1U>;
            };

            struct USDERS : public RegisterField<CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USDERS, 0U>;
                using Value1 = FieldValue<USDERS, 1U>;
            };

            struct ERSTR : public RegisterField<CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERSTR, 0U>;
                using Value1 = FieldValue<ERSTR, 1U>;
            };

            struct OPLK : public RegisterField<CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OPLK, 0U>;
                using Value1 = FieldValue<OPLK, 1U>;
            };

            struct USDULKS : public RegisterField<CTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USDULKS, 0U>;
                using Value1 = FieldValue<USDULKS, 1U>;
            };

            struct ERRIE : public RegisterField<CTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERRIE, 0U>;
                using Value1 = FieldValue<ERRIE, 1U>;
            };

            struct ODFIE : public RegisterField<CTRL, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODFIE, 0U>;
                using Value1 = FieldValue<ODFIE, 1U>;
            };

        };

        struct ADDR : public Register<0x40022014, 32, WriteMode>
        {
            struct FA : public RegisterField<ADDR, 0, 32, WriteMode>
            {
            };

        };

        struct USD : public Register<0x4002201C, 32, ReadMode>
        {
            struct USDERR : public RegisterField<USD, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<USDERR, 0U>;
                using Value1 = FieldValue<USDERR, 1U>;
            };

            struct FAP : public RegisterField<USD, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<FAP, 0U>;
                using Value1 = FieldValue<FAP, 1U>;
            };

            struct nWDT_ATO_EN : public RegisterField<USD, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<nWDT_ATO_EN, 0U>;
                using Value1 = FieldValue<nWDT_ATO_EN, 1U>;
            };

            struct nDEPSLP_RST : public RegisterField<USD, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<nDEPSLP_RST, 0U>;
                using Value1 = FieldValue<nDEPSLP_RST, 1U>;
            };

            struct nSTDBY_RST : public RegisterField<USD, 4, 1, ReadMode>
            {
                using Value0 = FieldValue<nSTDBY_RST, 0U>;
                using Value1 = FieldValue<nSTDBY_RST, 1U>;
            };

            struct BTOPT : public RegisterField<USD, 5, 1, ReadMode>
            {
                using Value0 = FieldValue<BTOPT, 0U>;
                using Value1 = FieldValue<BTOPT, 1U>;
            };

            struct USER_D0 : public RegisterField<USD, 10, 8, ReadMode>
            {
            };

            struct USER_D1 : public RegisterField<USD, 18, 8, ReadMode>
            {
            };

        };

        struct EPPS : public Register<0x40022020, 32, ReadMode>
        {
            struct EPPSField : public RegisterField<EPPS, 0, 32, ReadMode>
            {
            };

        };

        struct UNLOCK2 : public Register<0x40022044, 32, WriteMode>
        {
            struct UKVAL : public RegisterField<UNLOCK2, 0, 32, WriteMode>
            {
            };

        };

        struct STS2 : public Register<0x4002204C, 32, ReadWriteMode>
        {
            struct OBF : public RegisterField<STS2, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<OBF, 0U>;
                using Value1 = FieldValue<OBF, 1U>;
            };

            struct PRGMERR : public RegisterField<STS2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PRGMERR, 0U>;
                using Value1 = FieldValue<PRGMERR, 1U>;
            };

            struct EPPERR : public RegisterField<STS2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EPPERR, 0U>;
                using Value1 = FieldValue<EPPERR, 1U>;
            };

            struct ODF : public RegisterField<STS2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODF, 0U>;
                using Value1 = FieldValue<ODF, 1U>;
            };

        };

        struct CTRL2 : public Register<0x40022050, 32, ReadWriteMode>
        {
            struct FPRGM : public RegisterField<CTRL2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FPRGM, 0U>;
                using Value1 = FieldValue<FPRGM, 1U>;
            };

            struct SECERS : public RegisterField<CTRL2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SECERS, 0U>;
                using Value1 = FieldValue<SECERS, 1U>;
            };

            struct BANKERS : public RegisterField<CTRL2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BANKERS, 0U>;
                using Value1 = FieldValue<BANKERS, 1U>;
            };

            struct ERSTR : public RegisterField<CTRL2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERSTR, 0U>;
                using Value1 = FieldValue<ERSTR, 1U>;
            };

            struct OPLK : public RegisterField<CTRL2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OPLK, 0U>;
                using Value1 = FieldValue<OPLK, 1U>;
            };

            struct ERRIE : public RegisterField<CTRL2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERRIE, 0U>;
                using Value1 = FieldValue<ERRIE, 1U>;
            };

            struct ODFIE : public RegisterField<CTRL2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODFIE, 0U>;
                using Value1 = FieldValue<ODFIE, 1U>;
            };

        };

        struct ADDR2 : public Register<0x40022054, 32, WriteMode>
        {
            struct FA : public RegisterField<ADDR2, 0, 32, WriteMode>
            {
            };

        };

        struct UNLOCK3 : public Register<0x40022084, 32, WriteMode>
        {
            struct UKVAL : public RegisterField<UNLOCK3, 0, 32, WriteMode>
            {
            };

        };

        struct SELECT : public Register<0x40022088, 32, WriteMode>
        {
            struct SELECTField : public RegisterField<SELECT, 0, 32, WriteMode>
            {
            };

        };

        struct STS3 : public Register<0x4002208C, 32, ReadWriteMode>
        {
            struct OBF : public RegisterField<STS3, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<OBF, 0U>;
                using Value1 = FieldValue<OBF, 1U>;
            };

            struct PRGMERR : public RegisterField<STS3, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PRGMERR, 0U>;
                using Value1 = FieldValue<PRGMERR, 1U>;
            };

            struct EPPERR : public RegisterField<STS3, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EPPERR, 0U>;
                using Value1 = FieldValue<EPPERR, 1U>;
            };

            struct ODF : public RegisterField<STS3, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODF, 0U>;
                using Value1 = FieldValue<ODF, 1U>;
            };

        };

        struct CTRL3 : public Register<0x40022090, 32, ReadWriteMode>
        {
            struct FPRGM : public RegisterField<CTRL3, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FPRGM, 0U>;
                using Value1 = FieldValue<FPRGM, 1U>;
            };

            struct SECERS : public RegisterField<CTRL3, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SECERS, 0U>;
                using Value1 = FieldValue<SECERS, 1U>;
            };

            struct CHPERS : public RegisterField<CTRL3, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CHPERS, 0U>;
                using Value1 = FieldValue<CHPERS, 1U>;
            };

            struct ERSTR : public RegisterField<CTRL3, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERSTR, 0U>;
                using Value1 = FieldValue<ERSTR, 1U>;
            };

            struct OPLK : public RegisterField<CTRL3, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OPLK, 0U>;
                using Value1 = FieldValue<OPLK, 1U>;
            };

            struct ERRIE : public RegisterField<CTRL3, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERRIE, 0U>;
                using Value1 = FieldValue<ERRIE, 1U>;
            };

            struct ODFIE : public RegisterField<CTRL3, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODFIE, 0U>;
                using Value1 = FieldValue<ODFIE, 1U>;
            };

        };

        struct ADDR3 : public Register<0x40022094, 32, WriteMode>
        {
            struct FA : public RegisterField<ADDR3, 0, 32, WriteMode>
            {
            };

        };

        struct DA : public Register<0x40022098, 32, WriteMode>
        {
            struct FDA : public RegisterField<DA, 0, 32, WriteMode>
            {
            };

        };

        struct SLIB_STS0 : public Register<0x400220CC, 32, ReadWriteMode>
        {
            struct SLIB_ENF : public RegisterField<SLIB_STS0, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<SLIB_ENF, 0U>;
                using Value1 = FieldValue<SLIB_ENF, 1U>;
            };

        };

        struct SLIB_STS1 : public Register<0x400220D0, 32, ReadWriteMode>
        {
            struct SLIB_SS : public RegisterField<SLIB_STS1, 0, 11, ReadMode>
            {
            };

            struct SLIB_DAT_SS : public RegisterField<SLIB_STS1, 11, 11, ReadMode>
            {
            };

            struct SLIB_ES : public RegisterField<SLIB_STS1, 22, 10, ReadMode>
            {
            };

        };

        struct SLIB_PWD_CLR : public Register<0x400220D4, 32, WriteMode>
        {
            struct SLIB_PCLR_VAL : public RegisterField<SLIB_PWD_CLR, 0, 32, WriteMode>
            {
            };

        };

        struct SLIB_MISC_STS : public Register<0x400220D8, 32, ReadWriteMode>
        {
            struct SLIB_PWD_ERR : public RegisterField<SLIB_MISC_STS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<SLIB_PWD_ERR, 0U>;
                using Value1 = FieldValue<SLIB_PWD_ERR, 1U>;
            };

            struct SLIB_PWD_OK : public RegisterField<SLIB_MISC_STS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<SLIB_PWD_OK, 0U>;
                using Value1 = FieldValue<SLIB_PWD_OK, 1U>;
            };

            struct SLIB_ULKF : public RegisterField<SLIB_MISC_STS, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<SLIB_ULKF, 0U>;
                using Value1 = FieldValue<SLIB_ULKF, 1U>;
            };

            struct SLIB_RCNT : public RegisterField<SLIB_MISC_STS, 16, 9, ReadMode>
            {
            };

        };

        struct SLIB_SET_PWD : public Register<0x400220DC, 32, WriteMode>
        {
            struct SLIB_PSET_VAL : public RegisterField<SLIB_SET_PWD, 0, 32, WriteMode>
            {
            };

        };

        struct SLIB_SET_RANGE : public Register<0x400220E0, 32, WriteMode>
        {
            struct SLIB_SS_SET : public RegisterField<SLIB_SET_RANGE, 0, 11, WriteMode>
            {
            };

            struct SLIB_DSS_SET : public RegisterField<SLIB_SET_RANGE, 11, 11, WriteMode>
            {
            };

            struct SLIB_ES_SET : public RegisterField<SLIB_SET_RANGE, 22, 10, WriteMode>
            {
            };

        };

        struct SLIB_UNLOCK : public Register<0x400220F0, 32, WriteMode>
        {
            struct SLIB_UKVAL : public RegisterField<SLIB_UNLOCK, 0, 32, WriteMode>
            {
            };

        };

        struct CRC_CTRL : public Register<0x400220F4, 32, WriteMode>
        {
            struct CRC_SS : public RegisterField<CRC_CTRL, 0, 12, WriteMode>
            {
            };

            struct CRC_SN : public RegisterField<CRC_CTRL, 12, 12, WriteMode>
            {
            };

            struct CRC_STRT : public RegisterField<CRC_CTRL, 31, 1, WriteMode>
            {
                using Value0 = FieldValue<CRC_STRT, 0U>;
                using Value1 = FieldValue<CRC_STRT, 1U>;
            };

        };

        struct CRC_CHKR : public Register<0x400220F8, 32, ReadMode>
        {
            struct CRC_CHKRField : public RegisterField<CRC_CHKR, 0, 32, ReadMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(FLASHREGISTERS_HPP)
