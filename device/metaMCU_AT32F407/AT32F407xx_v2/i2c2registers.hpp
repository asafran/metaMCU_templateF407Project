/*******************************************************************************
* Filename      : i2c2registers.hpp
*
* Details       : Inter integrated circuit. This header file is auto-generated
*                 for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(I2C2REGISTERS_HPP)
#define I2C2REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct I2C2
    {
        struct CTRL1 : public Register<0x40005800, 32, ReadWriteMode>
        {
            struct RESET : public RegisterField<CTRL1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RESET, 0U>;
                using Value1 = FieldValue<RESET, 1U>;
            };

            struct SMBALERT : public RegisterField<CTRL1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SMBALERT, 0U>;
                using Value1 = FieldValue<SMBALERT, 1U>;
            };

            struct PECTEN : public RegisterField<CTRL1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PECTEN, 0U>;
                using Value1 = FieldValue<PECTEN, 1U>;
            };

            struct MACKCTRL : public RegisterField<CTRL1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MACKCTRL, 0U>;
                using Value1 = FieldValue<MACKCTRL, 1U>;
            };

            struct ACKEN : public RegisterField<CTRL1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ACKEN, 0U>;
                using Value1 = FieldValue<ACKEN, 1U>;
            };

            struct GENSTOP : public RegisterField<CTRL1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GENSTOP, 0U>;
                using Value1 = FieldValue<GENSTOP, 1U>;
            };

            struct GENSTART : public RegisterField<CTRL1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GENSTART, 0U>;
                using Value1 = FieldValue<GENSTART, 1U>;
            };

            struct STRETCH : public RegisterField<CTRL1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<STRETCH, 0U>;
                using Value1 = FieldValue<STRETCH, 1U>;
            };

            struct GCAEN : public RegisterField<CTRL1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GCAEN, 0U>;
                using Value1 = FieldValue<GCAEN, 1U>;
            };

            struct PECEN : public RegisterField<CTRL1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PECEN, 0U>;
                using Value1 = FieldValue<PECEN, 1U>;
            };

            struct ARPEN : public RegisterField<CTRL1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ARPEN, 0U>;
                using Value1 = FieldValue<ARPEN, 1U>;
            };

            struct SMBMODE : public RegisterField<CTRL1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SMBMODE, 0U>;
                using Value1 = FieldValue<SMBMODE, 1U>;
            };

            struct PERMODE : public RegisterField<CTRL1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PERMODE, 0U>;
                using Value1 = FieldValue<PERMODE, 1U>;
            };

            struct I2CEN : public RegisterField<CTRL1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2CEN, 0U>;
                using Value1 = FieldValue<I2CEN, 1U>;
            };

        };

        struct CTRL2 : public Register<0x40005804, 32, ReadWriteMode>
        {
            struct DMAEND : public RegisterField<CTRL2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMAEND, 0U>;
                using Value1 = FieldValue<DMAEND, 1U>;
            };

            struct DMAEN : public RegisterField<CTRL2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMAEN, 0U>;
                using Value1 = FieldValue<DMAEN, 1U>;
            };

            struct DATAIEN : public RegisterField<CTRL2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DATAIEN, 0U>;
                using Value1 = FieldValue<DATAIEN, 1U>;
            };

            struct EVTIEN : public RegisterField<CTRL2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EVTIEN, 0U>;
                using Value1 = FieldValue<EVTIEN, 1U>;
            };

            struct ERRIEN : public RegisterField<CTRL2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERRIEN, 0U>;
                using Value1 = FieldValue<ERRIEN, 1U>;
            };

            struct CLKFREQ : public RegisterField<CTRL2, 0, 8, ReadWriteMode>
            {
            };

        };

        struct OADDR1 : public Register<0x40005808, 32, ReadWriteMode>
        {
            struct ADDR1MODE : public RegisterField<OADDR1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDR1MODE, 0U>;
                using Value1 = FieldValue<ADDR1MODE, 1U>;
            };

            struct ADDR1 : public RegisterField<OADDR1, 0, 10, ReadWriteMode>
            {
            };

        };

        struct OADDR2 : public Register<0x4000580C, 32, ReadWriteMode>
        {
            struct ADDR2 : public RegisterField<OADDR2, 1, 7, ReadWriteMode>
            {
            };

            struct ADDR2EN : public RegisterField<OADDR2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDR2EN, 0U>;
                using Value1 = FieldValue<ADDR2EN, 1U>;
            };

        };

        struct DT : public Register<0x40005810, 32, ReadWriteMode>
        {
            struct DTField : public RegisterField<DT, 0, 8, ReadWriteMode>
            {
            };

        };

        struct STS1 : public Register<0x40005814, 32, ReadWriteMode>
        {
            struct ALERTF : public RegisterField<STS1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ALERTF, 0U>;
                using Value1 = FieldValue<ALERTF, 1U>;
            };

            struct TMOUT : public RegisterField<STS1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMOUT, 0U>;
                using Value1 = FieldValue<TMOUT, 1U>;
            };

            struct PECERR : public RegisterField<STS1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PECERR, 0U>;
                using Value1 = FieldValue<PECERR, 1U>;
            };

            struct OUF : public RegisterField<STS1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OUF, 0U>;
                using Value1 = FieldValue<OUF, 1U>;
            };

            struct ACKFAIL : public RegisterField<STS1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ACKFAIL, 0U>;
                using Value1 = FieldValue<ACKFAIL, 1U>;
            };

            struct ARLOST : public RegisterField<STS1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ARLOST, 0U>;
                using Value1 = FieldValue<ARLOST, 1U>;
            };

            struct BUSERR : public RegisterField<STS1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BUSERR, 0U>;
                using Value1 = FieldValue<BUSERR, 1U>;
            };

            struct TDBE : public RegisterField<STS1, 7, 1, ReadMode>
            {
                using Value0 = FieldValue<TDBE, 0U>;
                using Value1 = FieldValue<TDBE, 1U>;
            };

            struct RDBF : public RegisterField<STS1, 6, 1, ReadMode>
            {
                using Value0 = FieldValue<RDBF, 0U>;
                using Value1 = FieldValue<RDBF, 1U>;
            };

            struct STOPF : public RegisterField<STS1, 4, 1, ReadMode>
            {
                using Value0 = FieldValue<STOPF, 0U>;
                using Value1 = FieldValue<STOPF, 1U>;
            };

            struct ADDRHF : public RegisterField<STS1, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<ADDRHF, 0U>;
                using Value1 = FieldValue<ADDRHF, 1U>;
            };

            struct TDC : public RegisterField<STS1, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<TDC, 0U>;
                using Value1 = FieldValue<TDC, 1U>;
            };

            struct ADDR7F : public RegisterField<STS1, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<ADDR7F, 0U>;
                using Value1 = FieldValue<ADDR7F, 1U>;
            };

            struct STARTF : public RegisterField<STS1, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<STARTF, 0U>;
                using Value1 = FieldValue<STARTF, 1U>;
            };

        };

        struct STS2 : public Register<0x40005818, 32, ReadMode>
        {
            struct PECVAL : public RegisterField<STS2, 8, 8, ReadMode>
            {
            };

            struct ADDR2F : public RegisterField<STS2, 7, 1, ReadMode>
            {
                using Value0 = FieldValue<ADDR2F, 0U>;
                using Value1 = FieldValue<ADDR2F, 1U>;
            };

            struct HOSTADDRF : public RegisterField<STS2, 6, 1, ReadMode>
            {
                using Value0 = FieldValue<HOSTADDRF, 0U>;
                using Value1 = FieldValue<HOSTADDRF, 1U>;
            };

            struct DEVADDRF : public RegisterField<STS2, 5, 1, ReadMode>
            {
                using Value0 = FieldValue<DEVADDRF, 0U>;
                using Value1 = FieldValue<DEVADDRF, 1U>;
            };

            struct GCADDRF : public RegisterField<STS2, 4, 1, ReadMode>
            {
                using Value0 = FieldValue<GCADDRF, 0U>;
                using Value1 = FieldValue<GCADDRF, 1U>;
            };

            struct DIRF : public RegisterField<STS2, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<DIRF, 0U>;
                using Value1 = FieldValue<DIRF, 1U>;
            };

            struct BUSYF : public RegisterField<STS2, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<BUSYF, 0U>;
                using Value1 = FieldValue<BUSYF, 1U>;
            };

            struct TRMODE : public RegisterField<STS2, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<TRMODE, 0U>;
                using Value1 = FieldValue<TRMODE, 1U>;
            };

        };

        struct CLKCTRL : public Register<0x4000581C, 32, ReadWriteMode>
        {
            struct SPEEDMODE : public RegisterField<CLKCTRL, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPEEDMODE, 0U>;
                using Value1 = FieldValue<SPEEDMODE, 1U>;
            };

            struct DUTYMODE : public RegisterField<CLKCTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DUTYMODE, 0U>;
                using Value1 = FieldValue<DUTYMODE, 1U>;
            };

            struct SPEED : public RegisterField<CLKCTRL, 0, 12, ReadWriteMode>
            {
            };

        };

        struct TMRISE : public Register<0x40005820, 32, ReadWriteMode>
        {
            struct RISETIME : public RegisterField<TMRISE, 0, 6, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(I2C2REGISTERS_HPP)
