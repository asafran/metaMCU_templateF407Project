/*******************************************************************************
* Filename      : spi2registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(SPI2REGISTERS_HPP)
#define SPI2REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct SPI2
    {
        struct CTRL1 : public Register<0x40003800, 32, ReadWriteMode>
        {
            struct SLBEN : public RegisterField<CTRL1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SLBEN, 0U>;
                using Value1 = FieldValue<SLBEN, 1U>;
            };

            struct SLBTD : public RegisterField<CTRL1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SLBTD, 0U>;
                using Value1 = FieldValue<SLBTD, 1U>;
            };

            struct CCEN : public RegisterField<CTRL1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CCEN, 0U>;
                using Value1 = FieldValue<CCEN, 1U>;
            };

            struct NTC : public RegisterField<CTRL1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NTC, 0U>;
                using Value1 = FieldValue<NTC, 1U>;
            };

            struct FBN : public RegisterField<CTRL1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBN, 0U>;
                using Value1 = FieldValue<FBN, 1U>;
            };

            struct ORA : public RegisterField<CTRL1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ORA, 0U>;
                using Value1 = FieldValue<ORA, 1U>;
            };

            struct SWCSEN : public RegisterField<CTRL1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWCSEN, 0U>;
                using Value1 = FieldValue<SWCSEN, 1U>;
            };

            struct SWCSIL : public RegisterField<CTRL1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWCSIL, 0U>;
                using Value1 = FieldValue<SWCSIL, 1U>;
            };

            struct LTF : public RegisterField<CTRL1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LTF, 0U>;
                using Value1 = FieldValue<LTF, 1U>;
            };

            struct SPIEN : public RegisterField<CTRL1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPIEN, 0U>;
                using Value1 = FieldValue<SPIEN, 1U>;
            };

            struct MDIV2_0 : public RegisterField<CTRL1, 3, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<MDIV2_0, 0U>;
                using Value1 = FieldValue<MDIV2_0, 1U>;
                using Value2 = FieldValue<MDIV2_0, 2U>;
                using Value3 = FieldValue<MDIV2_0, 3U>;
                using Value4 = FieldValue<MDIV2_0, 4U>;
                using Value5 = FieldValue<MDIV2_0, 5U>;
                using Value6 = FieldValue<MDIV2_0, 6U>;
                using Value7 = FieldValue<MDIV2_0, 7U>;
            };

            struct MSTEN : public RegisterField<CTRL1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MSTEN, 0U>;
                using Value1 = FieldValue<MSTEN, 1U>;
            };

            struct CLKPOL : public RegisterField<CTRL1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKPOL, 0U>;
                using Value1 = FieldValue<CLKPOL, 1U>;
            };

            struct CLKPHA : public RegisterField<CTRL1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKPHA, 0U>;
                using Value1 = FieldValue<CLKPHA, 1U>;
            };

        };

        struct CTRL2 : public Register<0x40003804, 32, ReadWriteMode>
        {
            struct MDIV3 : public RegisterField<CTRL2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MDIV3, 0U>;
                using Value1 = FieldValue<MDIV3, 1U>;
            };

            struct TDBEIE : public RegisterField<CTRL2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TDBEIE, 0U>;
                using Value1 = FieldValue<TDBEIE, 1U>;
            };

            struct RDBFIE : public RegisterField<CTRL2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RDBFIE, 0U>;
                using Value1 = FieldValue<RDBFIE, 1U>;
            };

            struct ERRIE : public RegisterField<CTRL2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERRIE, 0U>;
                using Value1 = FieldValue<ERRIE, 1U>;
            };

            struct HWCSOE : public RegisterField<CTRL2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HWCSOE, 0U>;
                using Value1 = FieldValue<HWCSOE, 1U>;
            };

            struct DMATEN : public RegisterField<CTRL2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMATEN, 0U>;
                using Value1 = FieldValue<DMATEN, 1U>;
            };

            struct DMAREN : public RegisterField<CTRL2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMAREN, 0U>;
                using Value1 = FieldValue<DMAREN, 1U>;
            };

        };

        struct STS : public Register<0x40003808, 32, ReadWriteMode>
        {
            struct BF : public RegisterField<STS, 7, 1, ReadMode>
            {
                using Value0 = FieldValue<BF, 0U>;
                using Value1 = FieldValue<BF, 1U>;
            };

            struct ROERR : public RegisterField<STS, 6, 1, ReadMode>
            {
                using Value0 = FieldValue<ROERR, 0U>;
                using Value1 = FieldValue<ROERR, 1U>;
            };

            struct MMERR : public RegisterField<STS, 5, 1, ReadMode>
            {
                using Value0 = FieldValue<MMERR, 0U>;
                using Value1 = FieldValue<MMERR, 1U>;
            };

            struct CCERR : public RegisterField<STS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CCERR, 0U>;
                using Value1 = FieldValue<CCERR, 1U>;
            };

            struct TUERR : public RegisterField<STS, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<TUERR, 0U>;
                using Value1 = FieldValue<TUERR, 1U>;
            };

            struct ACS : public RegisterField<STS, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<ACS, 0U>;
                using Value1 = FieldValue<ACS, 1U>;
            };

            struct TDBE : public RegisterField<STS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<TDBE, 0U>;
                using Value1 = FieldValue<TDBE, 1U>;
            };

            struct RDBF : public RegisterField<STS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<RDBF, 0U>;
                using Value1 = FieldValue<RDBF, 1U>;
            };

        };

        struct DT : public Register<0x4000380C, 32, ReadWriteMode>
        {
            struct DTField : public RegisterField<DT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct CPOLY : public Register<0x40003810, 32, ReadWriteMode>
        {
            struct CPOLYField : public RegisterField<CPOLY, 0, 16, ReadWriteMode>
            {
            };

        };

        struct RCRC : public Register<0x40003814, 32, ReadMode>
        {
            struct RCRCField : public RegisterField<RCRC, 0, 16, ReadMode>
            {
            };

        };

        struct TCRC : public Register<0x40003818, 32, ReadMode>
        {
            struct TCRCField : public RegisterField<TCRC, 0, 16, ReadMode>
            {
            };

        };

        struct I2SCTRL : public Register<0x4000381C, 32, ReadWriteMode>
        {
            struct I2SMSEL : public RegisterField<I2SCTRL, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2SMSEL, 0U>;
                using Value1 = FieldValue<I2SMSEL, 1U>;
            };

            struct I2SEN : public RegisterField<I2SCTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2SEN, 0U>;
                using Value1 = FieldValue<I2SEN, 1U>;
            };

            struct OPERSEL : public RegisterField<I2SCTRL, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<OPERSEL, 0U>;
                using Value1 = FieldValue<OPERSEL, 1U>;
                using Value2 = FieldValue<OPERSEL, 2U>;
                using Value3 = FieldValue<OPERSEL, 3U>;
            };

            struct PCMFSSEL : public RegisterField<I2SCTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PCMFSSEL, 0U>;
                using Value1 = FieldValue<PCMFSSEL, 1U>;
            };

            struct STDSEL : public RegisterField<I2SCTRL, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<STDSEL, 0U>;
                using Value1 = FieldValue<STDSEL, 1U>;
                using Value2 = FieldValue<STDSEL, 2U>;
                using Value3 = FieldValue<STDSEL, 3U>;
            };

            struct I2SCLKPOL : public RegisterField<I2SCTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2SCLKPOL, 0U>;
                using Value1 = FieldValue<I2SCLKPOL, 1U>;
            };

            struct I2SDBN : public RegisterField<I2SCTRL, 1, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<I2SDBN, 0U>;
                using Value1 = FieldValue<I2SDBN, 1U>;
                using Value2 = FieldValue<I2SDBN, 2U>;
                using Value3 = FieldValue<I2SDBN, 3U>;
            };

            struct I2SCBN : public RegisterField<I2SCTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2SCBN, 0U>;
                using Value1 = FieldValue<I2SCBN, 1U>;
            };

        };

        struct I2SCLK : public Register<0x40003820, 32, ReadWriteMode>
        {
            struct I2SDIV9_8 : public RegisterField<I2SCLK, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<I2SDIV9_8, 0U>;
                using Value1 = FieldValue<I2SDIV9_8, 1U>;
                using Value2 = FieldValue<I2SDIV9_8, 2U>;
                using Value3 = FieldValue<I2SDIV9_8, 3U>;
            };

            struct I2SMCLKOE : public RegisterField<I2SCLK, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2SMCLKOE, 0U>;
                using Value1 = FieldValue<I2SMCLKOE, 1U>;
            };

            struct I2SODD : public RegisterField<I2SCLK, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2SODD, 0U>;
                using Value1 = FieldValue<I2SODD, 1U>;
            };

            struct I2SDIV7_0 : public RegisterField<I2SCLK, 0, 8, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(SPI2REGISTERS_HPP)
