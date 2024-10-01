/*******************************************************************************
* Filename      : xmcregisters.hpp
*
* Details       : Flexible static memory controller. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(XMCREGISTERS_HPP)
#define XMCREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct XMC
    {
        struct BK1CTRL1 : public Register<0xA0000000, 32, ReadWriteMode>
        {
            struct MWMC : public RegisterField<BK1CTRL1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MWMC, 0U>;
                using Value1 = FieldValue<MWMC, 1U>;
            };

            struct CRPGS : public RegisterField<BK1CTRL1, 16, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CRPGS, 0U>;
                using Value1 = FieldValue<CRPGS, 1U>;
                using Value2 = FieldValue<CRPGS, 2U>;
                using Value3 = FieldValue<CRPGS, 3U>;
                using Value4 = FieldValue<CRPGS, 4U>;
                using Value5 = FieldValue<CRPGS, 5U>;
                using Value6 = FieldValue<CRPGS, 6U>;
                using Value7 = FieldValue<CRPGS, 7U>;
            };

            struct NWASEN : public RegisterField<BK1CTRL1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWASEN, 0U>;
                using Value1 = FieldValue<NWASEN, 1U>;
            };

            struct RWTD : public RegisterField<BK1CTRL1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RWTD, 0U>;
                using Value1 = FieldValue<RWTD, 1U>;
            };

            struct NWSEN : public RegisterField<BK1CTRL1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWSEN, 0U>;
                using Value1 = FieldValue<NWSEN, 1U>;
            };

            struct WEN : public RegisterField<BK1CTRL1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WEN, 0U>;
                using Value1 = FieldValue<WEN, 1U>;
            };

            struct NWTCFG : public RegisterField<BK1CTRL1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWTCFG, 0U>;
                using Value1 = FieldValue<NWTCFG, 1U>;
            };

            struct WRAPEN : public RegisterField<BK1CTRL1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WRAPEN, 0U>;
                using Value1 = FieldValue<WRAPEN, 1U>;
            };

            struct NWPOL : public RegisterField<BK1CTRL1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWPOL, 0U>;
                using Value1 = FieldValue<NWPOL, 1U>;
            };

            struct SYNCBEN : public RegisterField<BK1CTRL1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SYNCBEN, 0U>;
                using Value1 = FieldValue<SYNCBEN, 1U>;
            };

            struct NOREN : public RegisterField<BK1CTRL1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NOREN, 0U>;
                using Value1 = FieldValue<NOREN, 1U>;
            };

            struct EXTMDBW : public RegisterField<BK1CTRL1, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<EXTMDBW, 0U>;
                using Value1 = FieldValue<EXTMDBW, 1U>;
                using Value2 = FieldValue<EXTMDBW, 2U>;
                using Value3 = FieldValue<EXTMDBW, 3U>;
            };

            struct DEV : public RegisterField<BK1CTRL1, 2, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<DEV, 0U>;
                using Value1 = FieldValue<DEV, 1U>;
                using Value2 = FieldValue<DEV, 2U>;
                using Value3 = FieldValue<DEV, 3U>;
            };

            struct ADMUXEN : public RegisterField<BK1CTRL1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADMUXEN, 0U>;
                using Value1 = FieldValue<ADMUXEN, 1U>;
            };

            struct EN : public RegisterField<BK1CTRL1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EN, 0U>;
                using Value1 = FieldValue<EN, 1U>;
            };

        };

        struct BK1TMG1 : public Register<0xA0000004, 32, ReadWriteMode>
        {
            struct ASYNCM : public RegisterField<BK1TMG1, 28, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<ASYNCM, 0U>;
                using Value1 = FieldValue<ASYNCM, 1U>;
                using Value2 = FieldValue<ASYNCM, 2U>;
                using Value3 = FieldValue<ASYNCM, 3U>;
            };

            struct DTLAT : public RegisterField<BK1TMG1, 24, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<DTLAT, 0U>;
                using Value1 = FieldValue<DTLAT, 1U>;
                using Value2 = FieldValue<DTLAT, 2U>;
                using Value3 = FieldValue<DTLAT, 3U>;
                using Value4 = FieldValue<DTLAT, 4U>;
                using Value5 = FieldValue<DTLAT, 5U>;
                using Value6 = FieldValue<DTLAT, 6U>;
                using Value7 = FieldValue<DTLAT, 7U>;
                using Value8 = FieldValue<DTLAT, 8U>;
                using Value9 = FieldValue<DTLAT, 9U>;
                using Value10 = FieldValue<DTLAT, 10U>;
                using Value11 = FieldValue<DTLAT, 11U>;
                using Value12 = FieldValue<DTLAT, 12U>;
                using Value13 = FieldValue<DTLAT, 13U>;
                using Value14 = FieldValue<DTLAT, 14U>;
                using Value15 = FieldValue<DTLAT, 15U>;
            };

            struct CLKPSC : public RegisterField<BK1TMG1, 20, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKPSC, 0U>;
                using Value1 = FieldValue<CLKPSC, 1U>;
                using Value2 = FieldValue<CLKPSC, 2U>;
                using Value3 = FieldValue<CLKPSC, 3U>;
                using Value4 = FieldValue<CLKPSC, 4U>;
                using Value5 = FieldValue<CLKPSC, 5U>;
                using Value6 = FieldValue<CLKPSC, 6U>;
                using Value7 = FieldValue<CLKPSC, 7U>;
                using Value8 = FieldValue<CLKPSC, 8U>;
                using Value9 = FieldValue<CLKPSC, 9U>;
                using Value10 = FieldValue<CLKPSC, 10U>;
                using Value11 = FieldValue<CLKPSC, 11U>;
                using Value12 = FieldValue<CLKPSC, 12U>;
                using Value13 = FieldValue<CLKPSC, 13U>;
                using Value14 = FieldValue<CLKPSC, 14U>;
                using Value15 = FieldValue<CLKPSC, 15U>;
            };

            struct BUSLAT : public RegisterField<BK1TMG1, 16, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<BUSLAT, 0U>;
                using Value1 = FieldValue<BUSLAT, 1U>;
                using Value2 = FieldValue<BUSLAT, 2U>;
                using Value3 = FieldValue<BUSLAT, 3U>;
                using Value4 = FieldValue<BUSLAT, 4U>;
                using Value5 = FieldValue<BUSLAT, 5U>;
                using Value6 = FieldValue<BUSLAT, 6U>;
                using Value7 = FieldValue<BUSLAT, 7U>;
                using Value8 = FieldValue<BUSLAT, 8U>;
                using Value9 = FieldValue<BUSLAT, 9U>;
                using Value10 = FieldValue<BUSLAT, 10U>;
                using Value11 = FieldValue<BUSLAT, 11U>;
                using Value12 = FieldValue<BUSLAT, 12U>;
                using Value13 = FieldValue<BUSLAT, 13U>;
                using Value14 = FieldValue<BUSLAT, 14U>;
                using Value15 = FieldValue<BUSLAT, 15U>;
            };

            struct DTST : public RegisterField<BK1TMG1, 8, 8, ReadWriteMode>
            {
            };

            struct ADDRHT : public RegisterField<BK1TMG1, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDRHT, 0U>;
                using Value1 = FieldValue<ADDRHT, 1U>;
                using Value2 = FieldValue<ADDRHT, 2U>;
                using Value3 = FieldValue<ADDRHT, 3U>;
                using Value4 = FieldValue<ADDRHT, 4U>;
                using Value5 = FieldValue<ADDRHT, 5U>;
                using Value6 = FieldValue<ADDRHT, 6U>;
                using Value7 = FieldValue<ADDRHT, 7U>;
                using Value8 = FieldValue<ADDRHT, 8U>;
                using Value9 = FieldValue<ADDRHT, 9U>;
                using Value10 = FieldValue<ADDRHT, 10U>;
                using Value11 = FieldValue<ADDRHT, 11U>;
                using Value12 = FieldValue<ADDRHT, 12U>;
                using Value13 = FieldValue<ADDRHT, 13U>;
                using Value14 = FieldValue<ADDRHT, 14U>;
                using Value15 = FieldValue<ADDRHT, 15U>;
            };

            struct ADDRST : public RegisterField<BK1TMG1, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDRST, 0U>;
                using Value1 = FieldValue<ADDRST, 1U>;
                using Value2 = FieldValue<ADDRST, 2U>;
                using Value3 = FieldValue<ADDRST, 3U>;
                using Value4 = FieldValue<ADDRST, 4U>;
                using Value5 = FieldValue<ADDRST, 5U>;
                using Value6 = FieldValue<ADDRST, 6U>;
                using Value7 = FieldValue<ADDRST, 7U>;
                using Value8 = FieldValue<ADDRST, 8U>;
                using Value9 = FieldValue<ADDRST, 9U>;
                using Value10 = FieldValue<ADDRST, 10U>;
                using Value11 = FieldValue<ADDRST, 11U>;
                using Value12 = FieldValue<ADDRST, 12U>;
                using Value13 = FieldValue<ADDRST, 13U>;
                using Value14 = FieldValue<ADDRST, 14U>;
                using Value15 = FieldValue<ADDRST, 15U>;
            };

        };

        struct BK1CTRL4 : public Register<0xA0000018, 32, ReadWriteMode>
        {
            struct MWMC : public RegisterField<BK1CTRL4, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MWMC, 0U>;
                using Value1 = FieldValue<MWMC, 1U>;
            };

            struct CRPGS : public RegisterField<BK1CTRL4, 16, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CRPGS, 0U>;
                using Value1 = FieldValue<CRPGS, 1U>;
                using Value2 = FieldValue<CRPGS, 2U>;
                using Value3 = FieldValue<CRPGS, 3U>;
                using Value4 = FieldValue<CRPGS, 4U>;
                using Value5 = FieldValue<CRPGS, 5U>;
                using Value6 = FieldValue<CRPGS, 6U>;
                using Value7 = FieldValue<CRPGS, 7U>;
            };

            struct NWASEN : public RegisterField<BK1CTRL4, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWASEN, 0U>;
                using Value1 = FieldValue<NWASEN, 1U>;
            };

            struct RWTD : public RegisterField<BK1CTRL4, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RWTD, 0U>;
                using Value1 = FieldValue<RWTD, 1U>;
            };

            struct NWSEN : public RegisterField<BK1CTRL4, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWSEN, 0U>;
                using Value1 = FieldValue<NWSEN, 1U>;
            };

            struct WEN : public RegisterField<BK1CTRL4, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WEN, 0U>;
                using Value1 = FieldValue<WEN, 1U>;
            };

            struct NWTCFG : public RegisterField<BK1CTRL4, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWTCFG, 0U>;
                using Value1 = FieldValue<NWTCFG, 1U>;
            };

            struct WRAPEN : public RegisterField<BK1CTRL4, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WRAPEN, 0U>;
                using Value1 = FieldValue<WRAPEN, 1U>;
            };

            struct NWPOL : public RegisterField<BK1CTRL4, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWPOL, 0U>;
                using Value1 = FieldValue<NWPOL, 1U>;
            };

            struct SYNCBEN : public RegisterField<BK1CTRL4, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SYNCBEN, 0U>;
                using Value1 = FieldValue<SYNCBEN, 1U>;
            };

            struct NOREN : public RegisterField<BK1CTRL4, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NOREN, 0U>;
                using Value1 = FieldValue<NOREN, 1U>;
            };

            struct EXTMDBW : public RegisterField<BK1CTRL4, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<EXTMDBW, 0U>;
                using Value1 = FieldValue<EXTMDBW, 1U>;
                using Value2 = FieldValue<EXTMDBW, 2U>;
                using Value3 = FieldValue<EXTMDBW, 3U>;
            };

            struct DEV : public RegisterField<BK1CTRL4, 2, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<DEV, 0U>;
                using Value1 = FieldValue<DEV, 1U>;
                using Value2 = FieldValue<DEV, 2U>;
                using Value3 = FieldValue<DEV, 3U>;
            };

            struct ADMUXEN : public RegisterField<BK1CTRL4, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADMUXEN, 0U>;
                using Value1 = FieldValue<ADMUXEN, 1U>;
            };

            struct EN : public RegisterField<BK1CTRL4, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EN, 0U>;
                using Value1 = FieldValue<EN, 1U>;
            };

        };

        struct BK1TMG4 : public Register<0xA000001C, 32, ReadWriteMode>
        {
            struct ASYNCM : public RegisterField<BK1TMG4, 28, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<ASYNCM, 0U>;
                using Value1 = FieldValue<ASYNCM, 1U>;
                using Value2 = FieldValue<ASYNCM, 2U>;
                using Value3 = FieldValue<ASYNCM, 3U>;
            };

            struct DTLAT : public RegisterField<BK1TMG4, 24, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<DTLAT, 0U>;
                using Value1 = FieldValue<DTLAT, 1U>;
                using Value2 = FieldValue<DTLAT, 2U>;
                using Value3 = FieldValue<DTLAT, 3U>;
                using Value4 = FieldValue<DTLAT, 4U>;
                using Value5 = FieldValue<DTLAT, 5U>;
                using Value6 = FieldValue<DTLAT, 6U>;
                using Value7 = FieldValue<DTLAT, 7U>;
                using Value8 = FieldValue<DTLAT, 8U>;
                using Value9 = FieldValue<DTLAT, 9U>;
                using Value10 = FieldValue<DTLAT, 10U>;
                using Value11 = FieldValue<DTLAT, 11U>;
                using Value12 = FieldValue<DTLAT, 12U>;
                using Value13 = FieldValue<DTLAT, 13U>;
                using Value14 = FieldValue<DTLAT, 14U>;
                using Value15 = FieldValue<DTLAT, 15U>;
            };

            struct CLKPSC : public RegisterField<BK1TMG4, 20, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKPSC, 0U>;
                using Value1 = FieldValue<CLKPSC, 1U>;
                using Value2 = FieldValue<CLKPSC, 2U>;
                using Value3 = FieldValue<CLKPSC, 3U>;
                using Value4 = FieldValue<CLKPSC, 4U>;
                using Value5 = FieldValue<CLKPSC, 5U>;
                using Value6 = FieldValue<CLKPSC, 6U>;
                using Value7 = FieldValue<CLKPSC, 7U>;
                using Value8 = FieldValue<CLKPSC, 8U>;
                using Value9 = FieldValue<CLKPSC, 9U>;
                using Value10 = FieldValue<CLKPSC, 10U>;
                using Value11 = FieldValue<CLKPSC, 11U>;
                using Value12 = FieldValue<CLKPSC, 12U>;
                using Value13 = FieldValue<CLKPSC, 13U>;
                using Value14 = FieldValue<CLKPSC, 14U>;
                using Value15 = FieldValue<CLKPSC, 15U>;
            };

            struct BUSLAT : public RegisterField<BK1TMG4, 16, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<BUSLAT, 0U>;
                using Value1 = FieldValue<BUSLAT, 1U>;
                using Value2 = FieldValue<BUSLAT, 2U>;
                using Value3 = FieldValue<BUSLAT, 3U>;
                using Value4 = FieldValue<BUSLAT, 4U>;
                using Value5 = FieldValue<BUSLAT, 5U>;
                using Value6 = FieldValue<BUSLAT, 6U>;
                using Value7 = FieldValue<BUSLAT, 7U>;
                using Value8 = FieldValue<BUSLAT, 8U>;
                using Value9 = FieldValue<BUSLAT, 9U>;
                using Value10 = FieldValue<BUSLAT, 10U>;
                using Value11 = FieldValue<BUSLAT, 11U>;
                using Value12 = FieldValue<BUSLAT, 12U>;
                using Value13 = FieldValue<BUSLAT, 13U>;
                using Value14 = FieldValue<BUSLAT, 14U>;
                using Value15 = FieldValue<BUSLAT, 15U>;
            };

            struct DTST : public RegisterField<BK1TMG4, 8, 8, ReadWriteMode>
            {
            };

            struct ADDRHT : public RegisterField<BK1TMG4, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDRHT, 0U>;
                using Value1 = FieldValue<ADDRHT, 1U>;
                using Value2 = FieldValue<ADDRHT, 2U>;
                using Value3 = FieldValue<ADDRHT, 3U>;
                using Value4 = FieldValue<ADDRHT, 4U>;
                using Value5 = FieldValue<ADDRHT, 5U>;
                using Value6 = FieldValue<ADDRHT, 6U>;
                using Value7 = FieldValue<ADDRHT, 7U>;
                using Value8 = FieldValue<ADDRHT, 8U>;
                using Value9 = FieldValue<ADDRHT, 9U>;
                using Value10 = FieldValue<ADDRHT, 10U>;
                using Value11 = FieldValue<ADDRHT, 11U>;
                using Value12 = FieldValue<ADDRHT, 12U>;
                using Value13 = FieldValue<ADDRHT, 13U>;
                using Value14 = FieldValue<ADDRHT, 14U>;
                using Value15 = FieldValue<ADDRHT, 15U>;
            };

            struct ADDRST : public RegisterField<BK1TMG4, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDRST, 0U>;
                using Value1 = FieldValue<ADDRST, 1U>;
                using Value2 = FieldValue<ADDRST, 2U>;
                using Value3 = FieldValue<ADDRST, 3U>;
                using Value4 = FieldValue<ADDRST, 4U>;
                using Value5 = FieldValue<ADDRST, 5U>;
                using Value6 = FieldValue<ADDRST, 6U>;
                using Value7 = FieldValue<ADDRST, 7U>;
                using Value8 = FieldValue<ADDRST, 8U>;
                using Value9 = FieldValue<ADDRST, 9U>;
                using Value10 = FieldValue<ADDRST, 10U>;
                using Value11 = FieldValue<ADDRST, 11U>;
                using Value12 = FieldValue<ADDRST, 12U>;
                using Value13 = FieldValue<ADDRST, 13U>;
                using Value14 = FieldValue<ADDRST, 14U>;
                using Value15 = FieldValue<ADDRST, 15U>;
            };

        };

        struct BK2CTRL : public Register<0xA0000060, 32, ReadWriteMode>
        {
            struct ECCPGS : public RegisterField<BK2CTRL, 17, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<ECCPGS, 0U>;
                using Value1 = FieldValue<ECCPGS, 1U>;
                using Value2 = FieldValue<ECCPGS, 2U>;
                using Value3 = FieldValue<ECCPGS, 3U>;
                using Value4 = FieldValue<ECCPGS, 4U>;
                using Value5 = FieldValue<ECCPGS, 5U>;
                using Value6 = FieldValue<ECCPGS, 6U>;
                using Value7 = FieldValue<ECCPGS, 7U>;
            };

            struct TAR : public RegisterField<BK2CTRL, 13, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TAR, 0U>;
                using Value1 = FieldValue<TAR, 1U>;
                using Value2 = FieldValue<TAR, 2U>;
                using Value3 = FieldValue<TAR, 3U>;
                using Value4 = FieldValue<TAR, 4U>;
                using Value5 = FieldValue<TAR, 5U>;
                using Value6 = FieldValue<TAR, 6U>;
                using Value7 = FieldValue<TAR, 7U>;
                using Value8 = FieldValue<TAR, 8U>;
                using Value9 = FieldValue<TAR, 9U>;
                using Value10 = FieldValue<TAR, 10U>;
                using Value11 = FieldValue<TAR, 11U>;
                using Value12 = FieldValue<TAR, 12U>;
                using Value13 = FieldValue<TAR, 13U>;
                using Value14 = FieldValue<TAR, 14U>;
                using Value15 = FieldValue<TAR, 15U>;
            };

            struct TCR : public RegisterField<BK2CTRL, 9, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TCR, 0U>;
                using Value1 = FieldValue<TCR, 1U>;
                using Value2 = FieldValue<TCR, 2U>;
                using Value3 = FieldValue<TCR, 3U>;
                using Value4 = FieldValue<TCR, 4U>;
                using Value5 = FieldValue<TCR, 5U>;
                using Value6 = FieldValue<TCR, 6U>;
                using Value7 = FieldValue<TCR, 7U>;
                using Value8 = FieldValue<TCR, 8U>;
                using Value9 = FieldValue<TCR, 9U>;
                using Value10 = FieldValue<TCR, 10U>;
                using Value11 = FieldValue<TCR, 11U>;
                using Value12 = FieldValue<TCR, 12U>;
                using Value13 = FieldValue<TCR, 13U>;
                using Value14 = FieldValue<TCR, 14U>;
                using Value15 = FieldValue<TCR, 15U>;
            };

            struct ECCEN : public RegisterField<BK2CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ECCEN, 0U>;
                using Value1 = FieldValue<ECCEN, 1U>;
            };

            struct EXTMDBW : public RegisterField<BK2CTRL, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<EXTMDBW, 0U>;
                using Value1 = FieldValue<EXTMDBW, 1U>;
                using Value2 = FieldValue<EXTMDBW, 2U>;
                using Value3 = FieldValue<EXTMDBW, 3U>;
            };

            struct DEV : public RegisterField<BK2CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DEV, 0U>;
                using Value1 = FieldValue<DEV, 1U>;
            };

            struct EN : public RegisterField<BK2CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EN, 0U>;
                using Value1 = FieldValue<EN, 1U>;
            };

            struct NWEN : public RegisterField<BK2CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NWEN, 0U>;
                using Value1 = FieldValue<NWEN, 1U>;
            };

        };

        struct BK2IS : public Register<0xA0000064, 32, ReadWriteMode>
        {
            struct FIFOE : public RegisterField<BK2IS, 6, 1, ReadMode>
            {
                using Value0 = FieldValue<FIFOE, 0U>;
                using Value1 = FieldValue<FIFOE, 1U>;
            };

            struct FEIEN : public RegisterField<BK2IS, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FEIEN, 0U>;
                using Value1 = FieldValue<FEIEN, 1U>;
            };

            struct HLIEN : public RegisterField<BK2IS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HLIEN, 0U>;
                using Value1 = FieldValue<HLIEN, 1U>;
            };

            struct REIEN : public RegisterField<BK2IS, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<REIEN, 0U>;
                using Value1 = FieldValue<REIEN, 1U>;
            };

            struct FES : public RegisterField<BK2IS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FES, 0U>;
                using Value1 = FieldValue<FES, 1U>;
            };

            struct HLS : public RegisterField<BK2IS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HLS, 0U>;
                using Value1 = FieldValue<HLS, 1U>;
            };

            struct RES : public RegisterField<BK2IS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RES, 0U>;
                using Value1 = FieldValue<RES, 1U>;
            };

        };

        struct BK2TMGMEM : public Register<0xA0000068, 32, ReadWriteMode>
        {
            struct RGDHIZT : public RegisterField<BK2TMGMEM, 24, 8, ReadWriteMode>
            {
            };

            struct RGHT : public RegisterField<BK2TMGMEM, 16, 8, ReadWriteMode>
            {
            };

            struct RGWT : public RegisterField<BK2TMGMEM, 8, 8, ReadWriteMode>
            {
            };

            struct RGST : public RegisterField<BK2TMGMEM, 0, 8, ReadWriteMode>
            {
            };

        };

        struct BK2TMGATT : public Register<0xA000006C, 32, ReadWriteMode>
        {
            struct SPDHIZT : public RegisterField<BK2TMGATT, 24, 8, ReadWriteMode>
            {
            };

            struct SPHT : public RegisterField<BK2TMGATT, 16, 8, ReadWriteMode>
            {
            };

            struct SPWT : public RegisterField<BK2TMGATT, 8, 8, ReadWriteMode>
            {
            };

            struct SPST : public RegisterField<BK2TMGATT, 0, 8, ReadWriteMode>
            {
            };

        };

        struct BK2ECC : public Register<0xA0000074, 32, ReadWriteMode>
        {
            struct ECC : public RegisterField<BK2ECC, 0, 32, ReadWriteMode>
            {
            };

        };

        struct BK1TMGWR1 : public Register<0xA0000104, 32, ReadWriteMode>
        {
            struct ASYNCM : public RegisterField<BK1TMGWR1, 28, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<ASYNCM, 0U>;
                using Value1 = FieldValue<ASYNCM, 1U>;
                using Value2 = FieldValue<ASYNCM, 2U>;
                using Value3 = FieldValue<ASYNCM, 3U>;
            };

            struct BUSLAT : public RegisterField<BK1TMGWR1, 16, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<BUSLAT, 0U>;
                using Value1 = FieldValue<BUSLAT, 1U>;
                using Value2 = FieldValue<BUSLAT, 2U>;
                using Value3 = FieldValue<BUSLAT, 3U>;
                using Value4 = FieldValue<BUSLAT, 4U>;
                using Value5 = FieldValue<BUSLAT, 5U>;
                using Value6 = FieldValue<BUSLAT, 6U>;
                using Value7 = FieldValue<BUSLAT, 7U>;
                using Value8 = FieldValue<BUSLAT, 8U>;
                using Value9 = FieldValue<BUSLAT, 9U>;
                using Value10 = FieldValue<BUSLAT, 10U>;
                using Value11 = FieldValue<BUSLAT, 11U>;
                using Value12 = FieldValue<BUSLAT, 12U>;
                using Value13 = FieldValue<BUSLAT, 13U>;
                using Value14 = FieldValue<BUSLAT, 14U>;
                using Value15 = FieldValue<BUSLAT, 15U>;
            };

            struct DTST : public RegisterField<BK1TMGWR1, 8, 8, ReadWriteMode>
            {
            };

            struct ADDRHT : public RegisterField<BK1TMGWR1, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDRHT, 0U>;
                using Value1 = FieldValue<ADDRHT, 1U>;
                using Value2 = FieldValue<ADDRHT, 2U>;
                using Value3 = FieldValue<ADDRHT, 3U>;
                using Value4 = FieldValue<ADDRHT, 4U>;
                using Value5 = FieldValue<ADDRHT, 5U>;
                using Value6 = FieldValue<ADDRHT, 6U>;
                using Value7 = FieldValue<ADDRHT, 7U>;
                using Value8 = FieldValue<ADDRHT, 8U>;
                using Value9 = FieldValue<ADDRHT, 9U>;
                using Value10 = FieldValue<ADDRHT, 10U>;
                using Value11 = FieldValue<ADDRHT, 11U>;
                using Value12 = FieldValue<ADDRHT, 12U>;
                using Value13 = FieldValue<ADDRHT, 13U>;
                using Value14 = FieldValue<ADDRHT, 14U>;
                using Value15 = FieldValue<ADDRHT, 15U>;
            };

            struct ADDRST : public RegisterField<BK1TMGWR1, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDRST, 0U>;
                using Value1 = FieldValue<ADDRST, 1U>;
                using Value2 = FieldValue<ADDRST, 2U>;
                using Value3 = FieldValue<ADDRST, 3U>;
                using Value4 = FieldValue<ADDRST, 4U>;
                using Value5 = FieldValue<ADDRST, 5U>;
                using Value6 = FieldValue<ADDRST, 6U>;
                using Value7 = FieldValue<ADDRST, 7U>;
                using Value8 = FieldValue<ADDRST, 8U>;
                using Value9 = FieldValue<ADDRST, 9U>;
                using Value10 = FieldValue<ADDRST, 10U>;
                using Value11 = FieldValue<ADDRST, 11U>;
                using Value12 = FieldValue<ADDRST, 12U>;
                using Value13 = FieldValue<ADDRST, 13U>;
                using Value14 = FieldValue<ADDRST, 14U>;
                using Value15 = FieldValue<ADDRST, 15U>;
            };

        };

        struct BK1TMGWR4 : public Register<0xA000011C, 32, ReadWriteMode>
        {
            struct ASYNCM : public RegisterField<BK1TMGWR4, 28, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<ASYNCM, 0U>;
                using Value1 = FieldValue<ASYNCM, 1U>;
                using Value2 = FieldValue<ASYNCM, 2U>;
                using Value3 = FieldValue<ASYNCM, 3U>;
            };

            struct BUSLAT : public RegisterField<BK1TMGWR4, 16, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<BUSLAT, 0U>;
                using Value1 = FieldValue<BUSLAT, 1U>;
                using Value2 = FieldValue<BUSLAT, 2U>;
                using Value3 = FieldValue<BUSLAT, 3U>;
                using Value4 = FieldValue<BUSLAT, 4U>;
                using Value5 = FieldValue<BUSLAT, 5U>;
                using Value6 = FieldValue<BUSLAT, 6U>;
                using Value7 = FieldValue<BUSLAT, 7U>;
                using Value8 = FieldValue<BUSLAT, 8U>;
                using Value9 = FieldValue<BUSLAT, 9U>;
                using Value10 = FieldValue<BUSLAT, 10U>;
                using Value11 = FieldValue<BUSLAT, 11U>;
                using Value12 = FieldValue<BUSLAT, 12U>;
                using Value13 = FieldValue<BUSLAT, 13U>;
                using Value14 = FieldValue<BUSLAT, 14U>;
                using Value15 = FieldValue<BUSLAT, 15U>;
            };

            struct DTST : public RegisterField<BK1TMGWR4, 8, 8, ReadWriteMode>
            {
            };

            struct ADDRHT : public RegisterField<BK1TMGWR4, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDRHT, 0U>;
                using Value1 = FieldValue<ADDRHT, 1U>;
                using Value2 = FieldValue<ADDRHT, 2U>;
                using Value3 = FieldValue<ADDRHT, 3U>;
                using Value4 = FieldValue<ADDRHT, 4U>;
                using Value5 = FieldValue<ADDRHT, 5U>;
                using Value6 = FieldValue<ADDRHT, 6U>;
                using Value7 = FieldValue<ADDRHT, 7U>;
                using Value8 = FieldValue<ADDRHT, 8U>;
                using Value9 = FieldValue<ADDRHT, 9U>;
                using Value10 = FieldValue<ADDRHT, 10U>;
                using Value11 = FieldValue<ADDRHT, 11U>;
                using Value12 = FieldValue<ADDRHT, 12U>;
                using Value13 = FieldValue<ADDRHT, 13U>;
                using Value14 = FieldValue<ADDRHT, 14U>;
                using Value15 = FieldValue<ADDRHT, 15U>;
            };

            struct ADDRST : public RegisterField<BK1TMGWR4, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<ADDRST, 0U>;
                using Value1 = FieldValue<ADDRST, 1U>;
                using Value2 = FieldValue<ADDRST, 2U>;
                using Value3 = FieldValue<ADDRST, 3U>;
                using Value4 = FieldValue<ADDRST, 4U>;
                using Value5 = FieldValue<ADDRST, 5U>;
                using Value6 = FieldValue<ADDRST, 6U>;
                using Value7 = FieldValue<ADDRST, 7U>;
                using Value8 = FieldValue<ADDRST, 8U>;
                using Value9 = FieldValue<ADDRST, 9U>;
                using Value10 = FieldValue<ADDRST, 10U>;
                using Value11 = FieldValue<ADDRST, 11U>;
                using Value12 = FieldValue<ADDRST, 12U>;
                using Value13 = FieldValue<ADDRST, 13U>;
                using Value14 = FieldValue<ADDRST, 14U>;
                using Value15 = FieldValue<ADDRST, 15U>;
            };

        };

        struct EXT1 : public Register<0xA0000220, 32, ReadWriteMode>
        {
            struct BUSLATW2W : public RegisterField<EXT1, 0, 8, ReadWriteMode>
            {
            };

            struct BUSLATR2R : public RegisterField<EXT1, 8, 8, ReadWriteMode>
            {
            };

        };

        struct EXT4 : public Register<0xA000022C, 32, ReadWriteMode>
        {
            struct BUSLATW2W : public RegisterField<EXT4, 0, 8, ReadWriteMode>
            {
            };

            struct BUSLATR2R : public RegisterField<EXT4, 8, 8, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(XMCREGISTERS_HPP)
