/*******************************************************************************
* Filename      : sdio2registers.hpp
*
* Details       : Secure digital input/output interface. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(SDIO2REGISTERS_HPP)
#define SDIO2REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct SDIO2
    {
        struct PWRCTRL : public Register<0x40023400, 32, ReadWriteMode>
        {
            struct PS : public RegisterField<PWRCTRL, 0, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PS, 0U>;
                using Value1 = FieldValue<PS, 1U>;
                using Value2 = FieldValue<PS, 2U>;
                using Value3 = FieldValue<PS, 3U>;
            };

        };

        struct CLKCTRL : public Register<0x40023404, 32, ReadWriteMode>
        {
            struct CLKDIV : public RegisterField<CLKCTRL, 0, 8, ReadWriteMode>
            {
            };

            struct CLKOEN : public RegisterField<CLKCTRL, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKOEN, 0U>;
                using Value1 = FieldValue<CLKOEN, 1U>;
            };

            struct PWRSVEN : public RegisterField<CLKCTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PWRSVEN, 0U>;
                using Value1 = FieldValue<PWRSVEN, 1U>;
            };

            struct BYPSEN : public RegisterField<CLKCTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BYPSEN, 0U>;
                using Value1 = FieldValue<BYPSEN, 1U>;
            };

            struct BUSWS : public RegisterField<CLKCTRL, 11, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<BUSWS, 0U>;
                using Value1 = FieldValue<BUSWS, 1U>;
                using Value2 = FieldValue<BUSWS, 2U>;
                using Value3 = FieldValue<BUSWS, 3U>;
            };

            struct CLKEDS : public RegisterField<CLKCTRL, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKEDS, 0U>;
                using Value1 = FieldValue<CLKEDS, 1U>;
            };

            struct HFCEN : public RegisterField<CLKCTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HFCEN, 0U>;
                using Value1 = FieldValue<HFCEN, 1U>;
            };

            struct CLKDIV98 : public RegisterField<CLKCTRL, 15, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKDIV98, 0U>;
                using Value1 = FieldValue<CLKDIV98, 1U>;
                using Value2 = FieldValue<CLKDIV98, 2U>;
                using Value3 = FieldValue<CLKDIV98, 3U>;
            };

        };

        struct ARGU : public Register<0x40023408, 32, ReadWriteMode>
        {
            struct ARGUField : public RegisterField<ARGU, 0, 32, ReadWriteMode>
            {
            };

        };

        struct CMDCTRL : public Register<0x4002340C, 32, ReadWriteMode>
        {
            struct CMDIDX : public RegisterField<CMDCTRL, 0, 6, ReadWriteMode>
            {
            };

            struct RSPWT : public RegisterField<CMDCTRL, 6, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RSPWT, 0U>;
                using Value1 = FieldValue<RSPWT, 1U>;
                using Value2 = FieldValue<RSPWT, 2U>;
                using Value3 = FieldValue<RSPWT, 3U>;
            };

            struct INTWT : public RegisterField<CMDCTRL, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<INTWT, 0U>;
                using Value1 = FieldValue<INTWT, 1U>;
            };

            struct PNDWT : public RegisterField<CMDCTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PNDWT, 0U>;
                using Value1 = FieldValue<PNDWT, 1U>;
            };

            struct CCSMEN : public RegisterField<CMDCTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CCSMEN, 0U>;
                using Value1 = FieldValue<CCSMEN, 1U>;
            };

            struct IOSUSP : public RegisterField<CMDCTRL, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSUSP, 0U>;
                using Value1 = FieldValue<IOSUSP, 1U>;
            };

        };

        struct RSPCMD : public Register<0x40023410, 32, ReadMode>
        {
            struct RSPCMDField : public RegisterField<RSPCMD, 0, 6, ReadMode>
            {
            };

        };

        struct RSP1 : public Register<0x40023414, 32, ReadMode>
        {
            struct CARDSTS1 : public RegisterField<RSP1, 0, 32, ReadMode>
            {
            };

        };

        struct RSP2 : public Register<0x40023418, 32, ReadMode>
        {
            struct CARDSTS2 : public RegisterField<RSP2, 0, 32, ReadMode>
            {
            };

        };

        struct RSP3 : public Register<0x4002341C, 32, ReadMode>
        {
            struct CARDSTS3 : public RegisterField<RSP3, 0, 32, ReadMode>
            {
            };

        };

        struct RSP4 : public Register<0x40023420, 32, ReadMode>
        {
            struct CARDSTS4 : public RegisterField<RSP4, 0, 32, ReadMode>
            {
            };

        };

        struct DTTMR : public Register<0x40023424, 32, ReadWriteMode>
        {
            struct TIMEOUT : public RegisterField<DTTMR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct DTLEN : public Register<0x40023428, 32, ReadWriteMode>
        {
            struct DTLENField : public RegisterField<DTLEN, 0, 25, ReadWriteMode>
            {
            };

        };

        struct DTCTRL : public Register<0x4002342C, 32, ReadWriteMode>
        {
            struct TFREN : public RegisterField<DTCTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TFREN, 0U>;
                using Value1 = FieldValue<TFREN, 1U>;
            };

            struct TFRDIR : public RegisterField<DTCTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TFRDIR, 0U>;
                using Value1 = FieldValue<TFRDIR, 1U>;
            };

            struct TFRMODE : public RegisterField<DTCTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TFRMODE, 0U>;
                using Value1 = FieldValue<TFRMODE, 1U>;
            };

            struct DMAEN : public RegisterField<DTCTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMAEN, 0U>;
                using Value1 = FieldValue<DMAEN, 1U>;
            };

            struct BLKSIZE : public RegisterField<DTCTRL, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<BLKSIZE, 0U>;
                using Value1 = FieldValue<BLKSIZE, 1U>;
                using Value2 = FieldValue<BLKSIZE, 2U>;
                using Value3 = FieldValue<BLKSIZE, 3U>;
                using Value4 = FieldValue<BLKSIZE, 4U>;
                using Value5 = FieldValue<BLKSIZE, 5U>;
                using Value6 = FieldValue<BLKSIZE, 6U>;
                using Value7 = FieldValue<BLKSIZE, 7U>;
                using Value8 = FieldValue<BLKSIZE, 8U>;
                using Value9 = FieldValue<BLKSIZE, 9U>;
                using Value10 = FieldValue<BLKSIZE, 10U>;
                using Value11 = FieldValue<BLKSIZE, 11U>;
                using Value12 = FieldValue<BLKSIZE, 12U>;
                using Value13 = FieldValue<BLKSIZE, 13U>;
                using Value14 = FieldValue<BLKSIZE, 14U>;
                using Value15 = FieldValue<BLKSIZE, 15U>;
            };

            struct RDWTSTART : public RegisterField<DTCTRL, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RDWTSTART, 0U>;
                using Value1 = FieldValue<RDWTSTART, 1U>;
            };

            struct RDWTSTOP : public RegisterField<DTCTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RDWTSTOP, 0U>;
                using Value1 = FieldValue<RDWTSTOP, 1U>;
            };

            struct RDWTMODE : public RegisterField<DTCTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RDWTMODE, 0U>;
                using Value1 = FieldValue<RDWTMODE, 1U>;
            };

            struct IOEN : public RegisterField<DTCTRL, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOEN, 0U>;
                using Value1 = FieldValue<IOEN, 1U>;
            };

        };

        struct DTCNT : public Register<0x40023430, 32, ReadMode>
        {
            struct CNT : public RegisterField<DTCNT, 0, 25, ReadMode>
            {
            };

        };

        struct STS : public Register<0x40023434, 32, ReadMode>
        {
            struct CMDFAIL : public RegisterField<STS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<CMDFAIL, 0U>;
                using Value1 = FieldValue<CMDFAIL, 1U>;
            };

            struct DTFAIL : public RegisterField<STS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<DTFAIL, 0U>;
                using Value1 = FieldValue<DTFAIL, 1U>;
            };

            struct CMDTIMEOUT : public RegisterField<STS, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<CMDTIMEOUT, 0U>;
                using Value1 = FieldValue<CMDTIMEOUT, 1U>;
            };

            struct DTTIMEOUT : public RegisterField<STS, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<DTTIMEOUT, 0U>;
                using Value1 = FieldValue<DTTIMEOUT, 1U>;
            };

            struct TXERRU : public RegisterField<STS, 4, 1, ReadMode>
            {
                using Value0 = FieldValue<TXERRU, 0U>;
                using Value1 = FieldValue<TXERRU, 1U>;
            };

            struct RXERRO : public RegisterField<STS, 5, 1, ReadMode>
            {
                using Value0 = FieldValue<RXERRO, 0U>;
                using Value1 = FieldValue<RXERRO, 1U>;
            };

            struct CMDRSPCMPL : public RegisterField<STS, 6, 1, ReadMode>
            {
                using Value0 = FieldValue<CMDRSPCMPL, 0U>;
                using Value1 = FieldValue<CMDRSPCMPL, 1U>;
            };

            struct CMDCMPL : public RegisterField<STS, 7, 1, ReadMode>
            {
                using Value0 = FieldValue<CMDCMPL, 0U>;
                using Value1 = FieldValue<CMDCMPL, 1U>;
            };

            struct DTCMPL : public RegisterField<STS, 8, 1, ReadMode>
            {
                using Value0 = FieldValue<DTCMPL, 0U>;
                using Value1 = FieldValue<DTCMPL, 1U>;
            };

            struct SBITERR : public RegisterField<STS, 9, 1, ReadMode>
            {
                using Value0 = FieldValue<SBITERR, 0U>;
                using Value1 = FieldValue<SBITERR, 1U>;
            };

            struct DTBLKCMPL : public RegisterField<STS, 10, 1, ReadMode>
            {
                using Value0 = FieldValue<DTBLKCMPL, 0U>;
                using Value1 = FieldValue<DTBLKCMPL, 1U>;
            };

            struct DOCMD : public RegisterField<STS, 11, 1, ReadMode>
            {
                using Value0 = FieldValue<DOCMD, 0U>;
                using Value1 = FieldValue<DOCMD, 1U>;
            };

            struct DOTX : public RegisterField<STS, 12, 1, ReadMode>
            {
                using Value0 = FieldValue<DOTX, 0U>;
                using Value1 = FieldValue<DOTX, 1U>;
            };

            struct DORX : public RegisterField<STS, 13, 1, ReadMode>
            {
                using Value0 = FieldValue<DORX, 0U>;
                using Value1 = FieldValue<DORX, 1U>;
            };

            struct TXBUFH : public RegisterField<STS, 14, 1, ReadMode>
            {
                using Value0 = FieldValue<TXBUFH, 0U>;
                using Value1 = FieldValue<TXBUFH, 1U>;
            };

            struct RXBUFH : public RegisterField<STS, 15, 1, ReadMode>
            {
                using Value0 = FieldValue<RXBUFH, 0U>;
                using Value1 = FieldValue<RXBUFH, 1U>;
            };

            struct TXBUFF : public RegisterField<STS, 16, 1, ReadMode>
            {
                using Value0 = FieldValue<TXBUFF, 0U>;
                using Value1 = FieldValue<TXBUFF, 1U>;
            };

            struct RXBUFF : public RegisterField<STS, 17, 1, ReadMode>
            {
                using Value0 = FieldValue<RXBUFF, 0U>;
                using Value1 = FieldValue<RXBUFF, 1U>;
            };

            struct TXBUFE : public RegisterField<STS, 18, 1, ReadMode>
            {
                using Value0 = FieldValue<TXBUFE, 0U>;
                using Value1 = FieldValue<TXBUFE, 1U>;
            };

            struct RXBUFE : public RegisterField<STS, 19, 1, ReadMode>
            {
                using Value0 = FieldValue<RXBUFE, 0U>;
                using Value1 = FieldValue<RXBUFE, 1U>;
            };

            struct TXBUF : public RegisterField<STS, 20, 1, ReadMode>
            {
                using Value0 = FieldValue<TXBUF, 0U>;
                using Value1 = FieldValue<TXBUF, 1U>;
            };

            struct RXBUF : public RegisterField<STS, 21, 1, ReadMode>
            {
                using Value0 = FieldValue<RXBUF, 0U>;
                using Value1 = FieldValue<RXBUF, 1U>;
            };

            struct IOIF : public RegisterField<STS, 22, 1, ReadMode>
            {
                using Value0 = FieldValue<IOIF, 0U>;
                using Value1 = FieldValue<IOIF, 1U>;
            };

        };

        struct INTCLR : public Register<0x40023438, 32, ReadWriteMode>
        {
            struct CMDFAIL : public RegisterField<INTCLR, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CMDFAIL, 0U>;
                using Value1 = FieldValue<CMDFAIL, 1U>;
            };

            struct DTFAIL : public RegisterField<INTCLR, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTFAIL, 0U>;
                using Value1 = FieldValue<DTFAIL, 1U>;
            };

            struct CMDTIMEOUT : public RegisterField<INTCLR, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CMDTIMEOUT, 0U>;
                using Value1 = FieldValue<CMDTIMEOUT, 1U>;
            };

            struct DTTIMEOUT : public RegisterField<INTCLR, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTTIMEOUT, 0U>;
                using Value1 = FieldValue<DTTIMEOUT, 1U>;
            };

            struct TXERRU : public RegisterField<INTCLR, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXERRU, 0U>;
                using Value1 = FieldValue<TXERRU, 1U>;
            };

            struct RXERRU : public RegisterField<INTCLR, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXERRU, 0U>;
                using Value1 = FieldValue<RXERRU, 1U>;
            };

            struct CMDRSPCMPL : public RegisterField<INTCLR, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CMDRSPCMPL, 0U>;
                using Value1 = FieldValue<CMDRSPCMPL, 1U>;
            };

            struct CMDCMPL : public RegisterField<INTCLR, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CMDCMPL, 0U>;
                using Value1 = FieldValue<CMDCMPL, 1U>;
            };

            struct DTCMPL : public RegisterField<INTCLR, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTCMPL, 0U>;
                using Value1 = FieldValue<DTCMPL, 1U>;
            };

            struct SBITERR : public RegisterField<INTCLR, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SBITERR, 0U>;
                using Value1 = FieldValue<SBITERR, 1U>;
            };

            struct DTBLKCMPL : public RegisterField<INTCLR, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTBLKCMPL, 0U>;
                using Value1 = FieldValue<DTBLKCMPL, 1U>;
            };

            struct IOIF : public RegisterField<INTCLR, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOIF, 0U>;
                using Value1 = FieldValue<IOIF, 1U>;
            };

        };

        struct INTEN : public Register<0x4002343C, 32, ReadWriteMode>
        {
            struct CMDFAILIEN : public RegisterField<INTEN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CMDFAILIEN, 0U>;
                using Value1 = FieldValue<CMDFAILIEN, 1U>;
            };

            struct DTFAILIEN : public RegisterField<INTEN, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTFAILIEN, 0U>;
                using Value1 = FieldValue<DTFAILIEN, 1U>;
            };

            struct CMDTIMEOUTIEN : public RegisterField<INTEN, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CMDTIMEOUTIEN, 0U>;
                using Value1 = FieldValue<CMDTIMEOUTIEN, 1U>;
            };

            struct DTTIMEOUTIEN : public RegisterField<INTEN, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTTIMEOUTIEN, 0U>;
                using Value1 = FieldValue<DTTIMEOUTIEN, 1U>;
            };

            struct TXERRUIEN : public RegisterField<INTEN, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXERRUIEN, 0U>;
                using Value1 = FieldValue<TXERRUIEN, 1U>;
            };

            struct RXERRUIEN : public RegisterField<INTEN, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXERRUIEN, 0U>;
                using Value1 = FieldValue<RXERRUIEN, 1U>;
            };

            struct CMDRSPCMPLIEN : public RegisterField<INTEN, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CMDRSPCMPLIEN, 0U>;
                using Value1 = FieldValue<CMDRSPCMPLIEN, 1U>;
            };

            struct CMDCMPLIEN : public RegisterField<INTEN, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CMDCMPLIEN, 0U>;
                using Value1 = FieldValue<CMDCMPLIEN, 1U>;
            };

            struct DTCMPLIEN : public RegisterField<INTEN, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTCMPLIEN, 0U>;
                using Value1 = FieldValue<DTCMPLIEN, 1U>;
            };

            struct SBITERRIEN : public RegisterField<INTEN, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SBITERRIEN, 0U>;
                using Value1 = FieldValue<SBITERRIEN, 1U>;
            };

            struct DTBLKCMPLIEN : public RegisterField<INTEN, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTBLKCMPLIEN, 0U>;
                using Value1 = FieldValue<DTBLKCMPLIEN, 1U>;
            };

            struct DOCMDIEN : public RegisterField<INTEN, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DOCMDIEN, 0U>;
                using Value1 = FieldValue<DOCMDIEN, 1U>;
            };

            struct DOTXIEN : public RegisterField<INTEN, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DOTXIEN, 0U>;
                using Value1 = FieldValue<DOTXIEN, 1U>;
            };

            struct DORXIEN : public RegisterField<INTEN, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DORXIEN, 0U>;
                using Value1 = FieldValue<DORXIEN, 1U>;
            };

            struct TXBUFHIEN : public RegisterField<INTEN, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXBUFHIEN, 0U>;
                using Value1 = FieldValue<TXBUFHIEN, 1U>;
            };

            struct RXBUFHIEN : public RegisterField<INTEN, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXBUFHIEN, 0U>;
                using Value1 = FieldValue<RXBUFHIEN, 1U>;
            };

            struct TXBUFFIEN : public RegisterField<INTEN, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXBUFFIEN, 0U>;
                using Value1 = FieldValue<TXBUFFIEN, 1U>;
            };

            struct RXBUFFIEN : public RegisterField<INTEN, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXBUFFIEN, 0U>;
                using Value1 = FieldValue<RXBUFFIEN, 1U>;
            };

            struct TXBUFEIEN : public RegisterField<INTEN, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXBUFEIEN, 0U>;
                using Value1 = FieldValue<TXBUFEIEN, 1U>;
            };

            struct RXBUFEIEN : public RegisterField<INTEN, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXBUFEIEN, 0U>;
                using Value1 = FieldValue<RXBUFEIEN, 1U>;
            };

            struct TXBUFIEN : public RegisterField<INTEN, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TXBUFIEN, 0U>;
                using Value1 = FieldValue<TXBUFIEN, 1U>;
            };

            struct RXBUFIEN : public RegisterField<INTEN, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RXBUFIEN, 0U>;
                using Value1 = FieldValue<RXBUFIEN, 1U>;
            };

            struct IOIFIEN : public RegisterField<INTEN, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOIFIEN, 0U>;
                using Value1 = FieldValue<IOIFIEN, 1U>;
            };

        };

        struct BUFCNT : public Register<0x40023448, 32, ReadMode>
        {
            struct CNT : public RegisterField<BUFCNT, 0, 24, ReadMode>
            {
            };

        };

        struct BUF : public Register<0x40023480, 32, ReadWriteMode>
        {
            struct DT : public RegisterField<BUF, 0, 32, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(SDIO2REGISTERS_HPP)
