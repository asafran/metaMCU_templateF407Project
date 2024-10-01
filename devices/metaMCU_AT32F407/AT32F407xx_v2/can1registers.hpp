/*******************************************************************************
* Filename      : can1registers.hpp
*
* Details       : Can controller area network. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(CAN1REGISTERS_HPP)
#define CAN1REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct CAN1
    {
        struct MCTRL : public Register<0x40006400, 32, ReadWriteMode>
        {
            struct PTD : public RegisterField<MCTRL, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PTD, 0U>;
                using Value1 = FieldValue<PTD, 1U>;
            };

            struct SPRST : public RegisterField<MCTRL, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPRST, 0U>;
                using Value1 = FieldValue<SPRST, 1U>;
            };

            struct TTCEN : public RegisterField<MCTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TTCEN, 0U>;
                using Value1 = FieldValue<TTCEN, 1U>;
            };

            struct AEBOEN : public RegisterField<MCTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AEBOEN, 0U>;
                using Value1 = FieldValue<AEBOEN, 1U>;
            };

            struct AEDEN : public RegisterField<MCTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AEDEN, 0U>;
                using Value1 = FieldValue<AEDEN, 1U>;
            };

            struct PRSFEN : public RegisterField<MCTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PRSFEN, 0U>;
                using Value1 = FieldValue<PRSFEN, 1U>;
            };

            struct MDRSEL : public RegisterField<MCTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MDRSEL, 0U>;
                using Value1 = FieldValue<MDRSEL, 1U>;
            };

            struct MMSSR : public RegisterField<MCTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MMSSR, 0U>;
                using Value1 = FieldValue<MMSSR, 1U>;
            };

            struct DZEN : public RegisterField<MCTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DZEN, 0U>;
                using Value1 = FieldValue<DZEN, 1U>;
            };

            struct FZEN : public RegisterField<MCTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FZEN, 0U>;
                using Value1 = FieldValue<FZEN, 1U>;
            };

        };

        struct MSTS : public Register<0x40006404, 32, ReadWriteMode>
        {
            struct REALRX : public RegisterField<MSTS, 11, 1, ReadMode>
            {
                using Value0 = FieldValue<REALRX, 0U>;
                using Value1 = FieldValue<REALRX, 1U>;
            };

            struct LSAMPRX : public RegisterField<MSTS, 10, 1, ReadMode>
            {
                using Value0 = FieldValue<LSAMPRX, 0U>;
                using Value1 = FieldValue<LSAMPRX, 1U>;
            };

            struct CURS : public RegisterField<MSTS, 9, 1, ReadMode>
            {
                using Value0 = FieldValue<CURS, 0U>;
                using Value1 = FieldValue<CURS, 1U>;
            };

            struct CUSS : public RegisterField<MSTS, 8, 1, ReadMode>
            {
                using Value0 = FieldValue<CUSS, 0U>;
                using Value1 = FieldValue<CUSS, 1U>;
            };

            struct EDZIF : public RegisterField<MSTS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EDZIF, 0U>;
                using Value1 = FieldValue<EDZIF, 1U>;
            };

            struct QDZIF : public RegisterField<MSTS, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<QDZIF, 0U>;
                using Value1 = FieldValue<QDZIF, 1U>;
            };

            struct EOIF : public RegisterField<MSTS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EOIF, 0U>;
                using Value1 = FieldValue<EOIF, 1U>;
            };

            struct DZC : public RegisterField<MSTS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<DZC, 0U>;
                using Value1 = FieldValue<DZC, 1U>;
            };

            struct FZC : public RegisterField<MSTS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<FZC, 0U>;
                using Value1 = FieldValue<FZC, 1U>;
            };

        };

        struct TSTS : public Register<0x40006408, 32, ReadWriteMode>
        {
            struct TM2LPF : public RegisterField<TSTS, 31, 1, ReadMode>
            {
                using Value0 = FieldValue<TM2LPF, 0U>;
                using Value1 = FieldValue<TM2LPF, 1U>;
            };

            struct TM1LPF : public RegisterField<TSTS, 30, 1, ReadMode>
            {
                using Value0 = FieldValue<TM1LPF, 0U>;
                using Value1 = FieldValue<TM1LPF, 1U>;
            };

            struct TM0LPF : public RegisterField<TSTS, 29, 1, ReadMode>
            {
                using Value0 = FieldValue<TM0LPF, 0U>;
                using Value1 = FieldValue<TM0LPF, 1U>;
            };

            struct TM2EF : public RegisterField<TSTS, 28, 1, ReadMode>
            {
                using Value0 = FieldValue<TM2EF, 0U>;
                using Value1 = FieldValue<TM2EF, 1U>;
            };

            struct TM1EF : public RegisterField<TSTS, 27, 1, ReadMode>
            {
                using Value0 = FieldValue<TM1EF, 0U>;
                using Value1 = FieldValue<TM1EF, 1U>;
            };

            struct TM0EF : public RegisterField<TSTS, 26, 1, ReadMode>
            {
                using Value0 = FieldValue<TM0EF, 0U>;
                using Value1 = FieldValue<TM0EF, 1U>;
            };

            struct TMNR : public RegisterField<TSTS, 24, 2, ReadMode>
            {
                using Value0 = FieldValue<TMNR, 0U>;
                using Value1 = FieldValue<TMNR, 1U>;
                using Value2 = FieldValue<TMNR, 2U>;
                using Value3 = FieldValue<TMNR, 3U>;
            };

            struct TM2CT : public RegisterField<TSTS, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM2CT, 0U>;
                using Value1 = FieldValue<TM2CT, 1U>;
            };

            struct TM2TEF : public RegisterField<TSTS, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM2TEF, 0U>;
                using Value1 = FieldValue<TM2TEF, 1U>;
            };

            struct TM2ALF : public RegisterField<TSTS, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM2ALF, 0U>;
                using Value1 = FieldValue<TM2ALF, 1U>;
            };

            struct TM2TSF : public RegisterField<TSTS, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM2TSF, 0U>;
                using Value1 = FieldValue<TM2TSF, 1U>;
            };

            struct TM2TCF : public RegisterField<TSTS, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM2TCF, 0U>;
                using Value1 = FieldValue<TM2TCF, 1U>;
            };

            struct TM1CT : public RegisterField<TSTS, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM1CT, 0U>;
                using Value1 = FieldValue<TM1CT, 1U>;
            };

            struct TM1TEF : public RegisterField<TSTS, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM1TEF, 0U>;
                using Value1 = FieldValue<TM1TEF, 1U>;
            };

            struct TM1ALF : public RegisterField<TSTS, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM1ALF, 0U>;
                using Value1 = FieldValue<TM1ALF, 1U>;
            };

            struct TM1TSF : public RegisterField<TSTS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM1TSF, 0U>;
                using Value1 = FieldValue<TM1TSF, 1U>;
            };

            struct TM1TCF : public RegisterField<TSTS, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM1TCF, 0U>;
                using Value1 = FieldValue<TM1TCF, 1U>;
            };

            struct TM0CT : public RegisterField<TSTS, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM0CT, 0U>;
                using Value1 = FieldValue<TM0CT, 1U>;
            };

            struct TM0TEF : public RegisterField<TSTS, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM0TEF, 0U>;
                using Value1 = FieldValue<TM0TEF, 1U>;
            };

            struct TM0ALF : public RegisterField<TSTS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM0ALF, 0U>;
                using Value1 = FieldValue<TM0ALF, 1U>;
            };

            struct TM0TSF : public RegisterField<TSTS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM0TSF, 0U>;
                using Value1 = FieldValue<TM0TSF, 1U>;
            };

            struct TM0TCF : public RegisterField<TSTS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TM0TCF, 0U>;
                using Value1 = FieldValue<TM0TCF, 1U>;
            };

        };

        struct RF0 : public Register<0x4000640C, 32, ReadWriteMode>
        {
            struct RF0R : public RegisterField<RF0, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF0R, 0U>;
                using Value1 = FieldValue<RF0R, 1U>;
            };

            struct RF0OF : public RegisterField<RF0, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF0OF, 0U>;
                using Value1 = FieldValue<RF0OF, 1U>;
            };

            struct RF0FF : public RegisterField<RF0, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF0FF, 0U>;
                using Value1 = FieldValue<RF0FF, 1U>;
            };

            struct RF0MN : public RegisterField<RF0, 0, 2, ReadMode>
            {
                using Value0 = FieldValue<RF0MN, 0U>;
                using Value1 = FieldValue<RF0MN, 1U>;
                using Value2 = FieldValue<RF0MN, 2U>;
                using Value3 = FieldValue<RF0MN, 3U>;
            };

        };

        struct RF1 : public Register<0x40006410, 32, ReadWriteMode>
        {
            struct RF1R : public RegisterField<RF1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF1R, 0U>;
                using Value1 = FieldValue<RF1R, 1U>;
            };

            struct RF1OF : public RegisterField<RF1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF1OF, 0U>;
                using Value1 = FieldValue<RF1OF, 1U>;
            };

            struct RF1FF : public RegisterField<RF1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF1FF, 0U>;
                using Value1 = FieldValue<RF1FF, 1U>;
            };

            struct RF1MN : public RegisterField<RF1, 0, 2, ReadMode>
            {
                using Value0 = FieldValue<RF1MN, 0U>;
                using Value1 = FieldValue<RF1MN, 1U>;
                using Value2 = FieldValue<RF1MN, 2U>;
                using Value3 = FieldValue<RF1MN, 3U>;
            };

        };

        struct INTEN : public Register<0x40006414, 32, ReadWriteMode>
        {
            struct EDZIEN : public RegisterField<INTEN, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EDZIEN, 0U>;
                using Value1 = FieldValue<EDZIEN, 1U>;
            };

            struct QDZIEN : public RegisterField<INTEN, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<QDZIEN, 0U>;
                using Value1 = FieldValue<QDZIEN, 1U>;
            };

            struct EOIEN : public RegisterField<INTEN, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EOIEN, 0U>;
                using Value1 = FieldValue<EOIEN, 1U>;
            };

            struct ETRIEN : public RegisterField<INTEN, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ETRIEN, 0U>;
                using Value1 = FieldValue<ETRIEN, 1U>;
            };

            struct BOIEN : public RegisterField<INTEN, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BOIEN, 0U>;
                using Value1 = FieldValue<BOIEN, 1U>;
            };

            struct EPIEN : public RegisterField<INTEN, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EPIEN, 0U>;
                using Value1 = FieldValue<EPIEN, 1U>;
            };

            struct EAIEN : public RegisterField<INTEN, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EAIEN, 0U>;
                using Value1 = FieldValue<EAIEN, 1U>;
            };

            struct RF1OIEN : public RegisterField<INTEN, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF1OIEN, 0U>;
                using Value1 = FieldValue<RF1OIEN, 1U>;
            };

            struct RF1FIEN : public RegisterField<INTEN, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF1FIEN, 0U>;
                using Value1 = FieldValue<RF1FIEN, 1U>;
            };

            struct RF1MIEN : public RegisterField<INTEN, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF1MIEN, 0U>;
                using Value1 = FieldValue<RF1MIEN, 1U>;
            };

            struct RF0OIEN : public RegisterField<INTEN, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF0OIEN, 0U>;
                using Value1 = FieldValue<RF0OIEN, 1U>;
            };

            struct RF0FIEN : public RegisterField<INTEN, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF0FIEN, 0U>;
                using Value1 = FieldValue<RF0FIEN, 1U>;
            };

            struct RF0MIEN : public RegisterField<INTEN, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RF0MIEN, 0U>;
                using Value1 = FieldValue<RF0MIEN, 1U>;
            };

            struct TCIEN : public RegisterField<INTEN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TCIEN, 0U>;
                using Value1 = FieldValue<TCIEN, 1U>;
            };

        };

        struct ESTS : public Register<0x40006418, 32, ReadWriteMode>
        {
            struct REC : public RegisterField<ESTS, 24, 8, ReadMode>
            {
            };

            struct TEC : public RegisterField<ESTS, 16, 8, ReadMode>
            {
            };

            struct ETR : public RegisterField<ESTS, 4, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<ETR, 0U>;
                using Value1 = FieldValue<ETR, 1U>;
                using Value2 = FieldValue<ETR, 2U>;
                using Value3 = FieldValue<ETR, 3U>;
                using Value4 = FieldValue<ETR, 4U>;
                using Value5 = FieldValue<ETR, 5U>;
                using Value6 = FieldValue<ETR, 6U>;
                using Value7 = FieldValue<ETR, 7U>;
            };

            struct BOF : public RegisterField<ESTS, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<BOF, 0U>;
                using Value1 = FieldValue<BOF, 1U>;
            };

            struct EPF : public RegisterField<ESTS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<EPF, 0U>;
                using Value1 = FieldValue<EPF, 1U>;
            };

            struct EAF : public RegisterField<ESTS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<EAF, 0U>;
                using Value1 = FieldValue<EAF, 1U>;
            };

        };

        struct BTMG : public Register<0x4000641C, 32, ReadWriteMode>
        {
            struct LOEN : public RegisterField<BTMG, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LOEN, 0U>;
                using Value1 = FieldValue<LOEN, 1U>;
            };

            struct LBEN : public RegisterField<BTMG, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LBEN, 0U>;
                using Value1 = FieldValue<LBEN, 1U>;
            };

            struct RSAW : public RegisterField<BTMG, 24, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RSAW, 0U>;
                using Value1 = FieldValue<RSAW, 1U>;
                using Value2 = FieldValue<RSAW, 2U>;
                using Value3 = FieldValue<RSAW, 3U>;
            };

            struct BTS2 : public RegisterField<BTMG, 20, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<BTS2, 0U>;
                using Value1 = FieldValue<BTS2, 1U>;
                using Value2 = FieldValue<BTS2, 2U>;
                using Value3 = FieldValue<BTS2, 3U>;
                using Value4 = FieldValue<BTS2, 4U>;
                using Value5 = FieldValue<BTS2, 5U>;
                using Value6 = FieldValue<BTS2, 6U>;
                using Value7 = FieldValue<BTS2, 7U>;
            };

            struct BTS1 : public RegisterField<BTMG, 16, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<BTS1, 0U>;
                using Value1 = FieldValue<BTS1, 1U>;
                using Value2 = FieldValue<BTS1, 2U>;
                using Value3 = FieldValue<BTS1, 3U>;
                using Value4 = FieldValue<BTS1, 4U>;
                using Value5 = FieldValue<BTS1, 5U>;
                using Value6 = FieldValue<BTS1, 6U>;
                using Value7 = FieldValue<BTS1, 7U>;
                using Value8 = FieldValue<BTS1, 8U>;
                using Value9 = FieldValue<BTS1, 9U>;
                using Value10 = FieldValue<BTS1, 10U>;
                using Value11 = FieldValue<BTS1, 11U>;
                using Value12 = FieldValue<BTS1, 12U>;
                using Value13 = FieldValue<BTS1, 13U>;
                using Value14 = FieldValue<BTS1, 14U>;
                using Value15 = FieldValue<BTS1, 15U>;
            };

            struct BRDIV : public RegisterField<BTMG, 0, 12, ReadWriteMode>
            {
            };

        };

        struct TMI0 : public Register<0x40006580, 32, ReadWriteMode>
        {
            struct TMSID : public RegisterField<TMI0, 21, 11, ReadWriteMode>
            {
            };

            struct TMEID : public RegisterField<TMI0, 3, 18, ReadWriteMode>
            {
            };

            struct TMIDSEL : public RegisterField<TMI0, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMIDSEL, 0U>;
                using Value1 = FieldValue<TMIDSEL, 1U>;
            };

            struct TMFRSEL : public RegisterField<TMI0, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMFRSEL, 0U>;
                using Value1 = FieldValue<TMFRSEL, 1U>;
            };

            struct TMSR : public RegisterField<TMI0, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMSR, 0U>;
                using Value1 = FieldValue<TMSR, 1U>;
            };

        };

        struct TMC0 : public Register<0x40006584, 32, ReadWriteMode>
        {
            struct TMTS : public RegisterField<TMC0, 16, 16, ReadWriteMode>
            {
            };

            struct TMTSTEN : public RegisterField<TMC0, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMTSTEN, 0U>;
                using Value1 = FieldValue<TMTSTEN, 1U>;
            };

            struct TMDTBL : public RegisterField<TMC0, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TMDTBL, 0U>;
                using Value1 = FieldValue<TMDTBL, 1U>;
                using Value2 = FieldValue<TMDTBL, 2U>;
                using Value3 = FieldValue<TMDTBL, 3U>;
                using Value4 = FieldValue<TMDTBL, 4U>;
                using Value5 = FieldValue<TMDTBL, 5U>;
                using Value6 = FieldValue<TMDTBL, 6U>;
                using Value7 = FieldValue<TMDTBL, 7U>;
                using Value8 = FieldValue<TMDTBL, 8U>;
                using Value9 = FieldValue<TMDTBL, 9U>;
                using Value10 = FieldValue<TMDTBL, 10U>;
                using Value11 = FieldValue<TMDTBL, 11U>;
                using Value12 = FieldValue<TMDTBL, 12U>;
                using Value13 = FieldValue<TMDTBL, 13U>;
                using Value14 = FieldValue<TMDTBL, 14U>;
                using Value15 = FieldValue<TMDTBL, 15U>;
            };

        };

        struct TMDTL0 : public Register<0x40006588, 32, ReadWriteMode>
        {
            struct TMDT3 : public RegisterField<TMDTL0, 24, 8, ReadWriteMode>
            {
            };

            struct TMDT2 : public RegisterField<TMDTL0, 16, 8, ReadWriteMode>
            {
            };

            struct TMDT1 : public RegisterField<TMDTL0, 8, 8, ReadWriteMode>
            {
            };

            struct TMDT0 : public RegisterField<TMDTL0, 0, 8, ReadWriteMode>
            {
            };

        };

        struct TMDTH0 : public Register<0x4000658C, 32, ReadWriteMode>
        {
            struct TMDT7 : public RegisterField<TMDTH0, 24, 8, ReadWriteMode>
            {
            };

            struct TMDT6 : public RegisterField<TMDTH0, 16, 8, ReadWriteMode>
            {
            };

            struct TMDT5 : public RegisterField<TMDTH0, 8, 8, ReadWriteMode>
            {
            };

            struct TMDT4 : public RegisterField<TMDTH0, 0, 8, ReadWriteMode>
            {
            };

        };

        struct TMI1 : public Register<0x40006590, 32, ReadWriteMode>
        {
            struct TMSID : public RegisterField<TMI1, 21, 11, ReadWriteMode>
            {
            };

            struct TMEID : public RegisterField<TMI1, 3, 18, ReadWriteMode>
            {
            };

            struct TMIDSEL : public RegisterField<TMI1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMIDSEL, 0U>;
                using Value1 = FieldValue<TMIDSEL, 1U>;
            };

            struct TMFRSEL : public RegisterField<TMI1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMFRSEL, 0U>;
                using Value1 = FieldValue<TMFRSEL, 1U>;
            };

            struct TMSR : public RegisterField<TMI1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMSR, 0U>;
                using Value1 = FieldValue<TMSR, 1U>;
            };

        };

        struct TMC1 : public Register<0x40006594, 32, ReadWriteMode>
        {
            struct TMTS : public RegisterField<TMC1, 16, 16, ReadWriteMode>
            {
            };

            struct TMTSTEN : public RegisterField<TMC1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMTSTEN, 0U>;
                using Value1 = FieldValue<TMTSTEN, 1U>;
            };

            struct TMDTBL : public RegisterField<TMC1, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TMDTBL, 0U>;
                using Value1 = FieldValue<TMDTBL, 1U>;
                using Value2 = FieldValue<TMDTBL, 2U>;
                using Value3 = FieldValue<TMDTBL, 3U>;
                using Value4 = FieldValue<TMDTBL, 4U>;
                using Value5 = FieldValue<TMDTBL, 5U>;
                using Value6 = FieldValue<TMDTBL, 6U>;
                using Value7 = FieldValue<TMDTBL, 7U>;
                using Value8 = FieldValue<TMDTBL, 8U>;
                using Value9 = FieldValue<TMDTBL, 9U>;
                using Value10 = FieldValue<TMDTBL, 10U>;
                using Value11 = FieldValue<TMDTBL, 11U>;
                using Value12 = FieldValue<TMDTBL, 12U>;
                using Value13 = FieldValue<TMDTBL, 13U>;
                using Value14 = FieldValue<TMDTBL, 14U>;
                using Value15 = FieldValue<TMDTBL, 15U>;
            };

        };

        struct TMDTL1 : public Register<0x40006598, 32, ReadWriteMode>
        {
            struct TMDT3 : public RegisterField<TMDTL1, 24, 8, ReadWriteMode>
            {
            };

            struct TMDT2 : public RegisterField<TMDTL1, 16, 8, ReadWriteMode>
            {
            };

            struct TMDT1 : public RegisterField<TMDTL1, 8, 8, ReadWriteMode>
            {
            };

            struct TMDT0 : public RegisterField<TMDTL1, 0, 8, ReadWriteMode>
            {
            };

        };

        struct TMDTH1 : public Register<0x4000659C, 32, ReadWriteMode>
        {
            struct TMDT7 : public RegisterField<TMDTH1, 24, 8, ReadWriteMode>
            {
            };

            struct TMDT6 : public RegisterField<TMDTH1, 16, 8, ReadWriteMode>
            {
            };

            struct TMDT5 : public RegisterField<TMDTH1, 8, 8, ReadWriteMode>
            {
            };

            struct TMDT4 : public RegisterField<TMDTH1, 0, 8, ReadWriteMode>
            {
            };

        };

        struct TMI2 : public Register<0x400065A0, 32, ReadWriteMode>
        {
            struct TMSID : public RegisterField<TMI2, 21, 11, ReadWriteMode>
            {
            };

            struct TMEID : public RegisterField<TMI2, 3, 18, ReadWriteMode>
            {
            };

            struct TMIDSEL : public RegisterField<TMI2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMIDSEL, 0U>;
                using Value1 = FieldValue<TMIDSEL, 1U>;
            };

            struct TMFRSEL : public RegisterField<TMI2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMFRSEL, 0U>;
                using Value1 = FieldValue<TMFRSEL, 1U>;
            };

            struct TMSR : public RegisterField<TMI2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMSR, 0U>;
                using Value1 = FieldValue<TMSR, 1U>;
            };

        };

        struct TMC2 : public Register<0x400065A4, 32, ReadWriteMode>
        {
            struct TMTS : public RegisterField<TMC2, 16, 16, ReadWriteMode>
            {
            };

            struct TMTSTEN : public RegisterField<TMC2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMTSTEN, 0U>;
                using Value1 = FieldValue<TMTSTEN, 1U>;
            };

            struct TMDTBL : public RegisterField<TMC2, 0, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<TMDTBL, 0U>;
                using Value1 = FieldValue<TMDTBL, 1U>;
                using Value2 = FieldValue<TMDTBL, 2U>;
                using Value3 = FieldValue<TMDTBL, 3U>;
                using Value4 = FieldValue<TMDTBL, 4U>;
                using Value5 = FieldValue<TMDTBL, 5U>;
                using Value6 = FieldValue<TMDTBL, 6U>;
                using Value7 = FieldValue<TMDTBL, 7U>;
                using Value8 = FieldValue<TMDTBL, 8U>;
                using Value9 = FieldValue<TMDTBL, 9U>;
                using Value10 = FieldValue<TMDTBL, 10U>;
                using Value11 = FieldValue<TMDTBL, 11U>;
                using Value12 = FieldValue<TMDTBL, 12U>;
                using Value13 = FieldValue<TMDTBL, 13U>;
                using Value14 = FieldValue<TMDTBL, 14U>;
                using Value15 = FieldValue<TMDTBL, 15U>;
            };

        };

        struct TMDTL2 : public Register<0x400065A8, 32, ReadWriteMode>
        {
            struct TMDT3 : public RegisterField<TMDTL2, 24, 8, ReadWriteMode>
            {
            };

            struct TMDT2 : public RegisterField<TMDTL2, 16, 8, ReadWriteMode>
            {
            };

            struct TMDT1 : public RegisterField<TMDTL2, 8, 8, ReadWriteMode>
            {
            };

            struct TMDT0 : public RegisterField<TMDTL2, 0, 8, ReadWriteMode>
            {
            };

        };

        struct TMDTH2 : public Register<0x400065AC, 32, ReadWriteMode>
        {
            struct TMDT7 : public RegisterField<TMDTH2, 24, 8, ReadWriteMode>
            {
            };

            struct TMDT6 : public RegisterField<TMDTH2, 16, 8, ReadWriteMode>
            {
            };

            struct TMDT5 : public RegisterField<TMDTH2, 8, 8, ReadWriteMode>
            {
            };

            struct TMDT4 : public RegisterField<TMDTH2, 0, 8, ReadWriteMode>
            {
            };

        };

        struct RFI0 : public Register<0x400065B0, 32, ReadMode>
        {
            struct RFSID : public RegisterField<RFI0, 21, 11, ReadMode>
            {
            };

            struct RFEID : public RegisterField<RFI0, 3, 18, ReadMode>
            {
            };

            struct RFIDI : public RegisterField<RFI0, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<RFIDI, 0U>;
                using Value1 = FieldValue<RFIDI, 1U>;
            };

            struct RFFRI : public RegisterField<RFI0, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<RFFRI, 0U>;
                using Value1 = FieldValue<RFFRI, 1U>;
            };

        };

        struct RFC0 : public Register<0x400065B4, 32, ReadMode>
        {
            struct RFTS : public RegisterField<RFC0, 16, 16, ReadMode>
            {
            };

            struct RFFMN : public RegisterField<RFC0, 8, 8, ReadMode>
            {
            };

            struct RFDTL : public RegisterField<RFC0, 0, 4, ReadMode>
            {
                using Value0 = FieldValue<RFDTL, 0U>;
                using Value1 = FieldValue<RFDTL, 1U>;
                using Value2 = FieldValue<RFDTL, 2U>;
                using Value3 = FieldValue<RFDTL, 3U>;
                using Value4 = FieldValue<RFDTL, 4U>;
                using Value5 = FieldValue<RFDTL, 5U>;
                using Value6 = FieldValue<RFDTL, 6U>;
                using Value7 = FieldValue<RFDTL, 7U>;
                using Value8 = FieldValue<RFDTL, 8U>;
                using Value9 = FieldValue<RFDTL, 9U>;
                using Value10 = FieldValue<RFDTL, 10U>;
                using Value11 = FieldValue<RFDTL, 11U>;
                using Value12 = FieldValue<RFDTL, 12U>;
                using Value13 = FieldValue<RFDTL, 13U>;
                using Value14 = FieldValue<RFDTL, 14U>;
                using Value15 = FieldValue<RFDTL, 15U>;
            };

        };

        struct RFDTL0 : public Register<0x400065B8, 32, ReadMode>
        {
            struct RFDT3 : public RegisterField<RFDTL0, 24, 8, ReadMode>
            {
            };

            struct RFDT2 : public RegisterField<RFDTL0, 16, 8, ReadMode>
            {
            };

            struct RFDT1 : public RegisterField<RFDTL0, 8, 8, ReadMode>
            {
            };

            struct RFDT0 : public RegisterField<RFDTL0, 0, 8, ReadMode>
            {
            };

        };

        struct RFDTH0 : public Register<0x400065BC, 32, ReadMode>
        {
            struct RFDT7 : public RegisterField<RFDTH0, 24, 8, ReadMode>
            {
            };

            struct RFDT6 : public RegisterField<RFDTH0, 16, 8, ReadMode>
            {
            };

            struct RFDT5 : public RegisterField<RFDTH0, 8, 8, ReadMode>
            {
            };

            struct RFDT4 : public RegisterField<RFDTH0, 0, 8, ReadMode>
            {
            };

        };

        struct RFI1 : public Register<0x400065C0, 32, ReadMode>
        {
            struct RFSID : public RegisterField<RFI1, 21, 11, ReadMode>
            {
            };

            struct RFEID : public RegisterField<RFI1, 3, 18, ReadMode>
            {
            };

            struct RFIDI : public RegisterField<RFI1, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<RFIDI, 0U>;
                using Value1 = FieldValue<RFIDI, 1U>;
            };

            struct RFFRI : public RegisterField<RFI1, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<RFFRI, 0U>;
                using Value1 = FieldValue<RFFRI, 1U>;
            };

        };

        struct RFC1 : public Register<0x400065C4, 32, ReadMode>
        {
            struct RFTS : public RegisterField<RFC1, 16, 16, ReadMode>
            {
            };

            struct RFFMN : public RegisterField<RFC1, 8, 8, ReadMode>
            {
            };

            struct RFDTL : public RegisterField<RFC1, 0, 4, ReadMode>
            {
                using Value0 = FieldValue<RFDTL, 0U>;
                using Value1 = FieldValue<RFDTL, 1U>;
                using Value2 = FieldValue<RFDTL, 2U>;
                using Value3 = FieldValue<RFDTL, 3U>;
                using Value4 = FieldValue<RFDTL, 4U>;
                using Value5 = FieldValue<RFDTL, 5U>;
                using Value6 = FieldValue<RFDTL, 6U>;
                using Value7 = FieldValue<RFDTL, 7U>;
                using Value8 = FieldValue<RFDTL, 8U>;
                using Value9 = FieldValue<RFDTL, 9U>;
                using Value10 = FieldValue<RFDTL, 10U>;
                using Value11 = FieldValue<RFDTL, 11U>;
                using Value12 = FieldValue<RFDTL, 12U>;
                using Value13 = FieldValue<RFDTL, 13U>;
                using Value14 = FieldValue<RFDTL, 14U>;
                using Value15 = FieldValue<RFDTL, 15U>;
            };

        };

        struct RFDTL1 : public Register<0x400065C8, 32, ReadMode>
        {
            struct RFDT3 : public RegisterField<RFDTL1, 24, 8, ReadMode>
            {
            };

            struct RFDT2 : public RegisterField<RFDTL1, 16, 8, ReadMode>
            {
            };

            struct RFDT1 : public RegisterField<RFDTL1, 8, 8, ReadMode>
            {
            };

            struct RFDT0 : public RegisterField<RFDTL1, 0, 8, ReadMode>
            {
            };

        };

        struct RFDTH1 : public Register<0x400065CC, 32, ReadMode>
        {
            struct RFDT7 : public RegisterField<RFDTH1, 24, 8, ReadMode>
            {
            };

            struct RFDT6 : public RegisterField<RFDTH1, 16, 8, ReadMode>
            {
            };

            struct RFDT5 : public RegisterField<RFDTH1, 8, 8, ReadMode>
            {
            };

            struct RFDT4 : public RegisterField<RFDTH1, 0, 8, ReadMode>
            {
            };

        };

        struct FCTRL : public Register<0x40006600, 32, ReadWriteMode>
        {
            struct FCS : public RegisterField<FCTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FCS, 0U>;
                using Value1 = FieldValue<FCS, 1U>;
            };

        };

        struct FMCFG : public Register<0x40006604, 32, ReadWriteMode>
        {
            struct FMSEL0 : public RegisterField<FMCFG, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL0, 0U>;
                using Value1 = FieldValue<FMSEL0, 1U>;
            };

            struct FMSEL1 : public RegisterField<FMCFG, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL1, 0U>;
                using Value1 = FieldValue<FMSEL1, 1U>;
            };

            struct FMSEL2 : public RegisterField<FMCFG, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL2, 0U>;
                using Value1 = FieldValue<FMSEL2, 1U>;
            };

            struct FMSEL3 : public RegisterField<FMCFG, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL3, 0U>;
                using Value1 = FieldValue<FMSEL3, 1U>;
            };

            struct FMSEL4 : public RegisterField<FMCFG, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL4, 0U>;
                using Value1 = FieldValue<FMSEL4, 1U>;
            };

            struct FMSEL5 : public RegisterField<FMCFG, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL5, 0U>;
                using Value1 = FieldValue<FMSEL5, 1U>;
            };

            struct FMSEL6 : public RegisterField<FMCFG, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL6, 0U>;
                using Value1 = FieldValue<FMSEL6, 1U>;
            };

            struct FMSEL7 : public RegisterField<FMCFG, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL7, 0U>;
                using Value1 = FieldValue<FMSEL7, 1U>;
            };

            struct FMSEL8 : public RegisterField<FMCFG, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL8, 0U>;
                using Value1 = FieldValue<FMSEL8, 1U>;
            };

            struct FMSEL9 : public RegisterField<FMCFG, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL9, 0U>;
                using Value1 = FieldValue<FMSEL9, 1U>;
            };

            struct FMSEL10 : public RegisterField<FMCFG, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL10, 0U>;
                using Value1 = FieldValue<FMSEL10, 1U>;
            };

            struct FMSEL11 : public RegisterField<FMCFG, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL11, 0U>;
                using Value1 = FieldValue<FMSEL11, 1U>;
            };

            struct FMSEL12 : public RegisterField<FMCFG, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL12, 0U>;
                using Value1 = FieldValue<FMSEL12, 1U>;
            };

            struct FMSEL13 : public RegisterField<FMCFG, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMSEL13, 0U>;
                using Value1 = FieldValue<FMSEL13, 1U>;
            };

        };

        struct FBWCFG : public Register<0x4000660C, 32, ReadWriteMode>
        {
            struct FBWSEL0 : public RegisterField<FBWCFG, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL0, 0U>;
                using Value1 = FieldValue<FBWSEL0, 1U>;
            };

            struct FBWSEL1 : public RegisterField<FBWCFG, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL1, 0U>;
                using Value1 = FieldValue<FBWSEL1, 1U>;
            };

            struct FBWSEL2 : public RegisterField<FBWCFG, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL2, 0U>;
                using Value1 = FieldValue<FBWSEL2, 1U>;
            };

            struct FBWSEL3 : public RegisterField<FBWCFG, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL3, 0U>;
                using Value1 = FieldValue<FBWSEL3, 1U>;
            };

            struct FBWSEL4 : public RegisterField<FBWCFG, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL4, 0U>;
                using Value1 = FieldValue<FBWSEL4, 1U>;
            };

            struct FBWSEL5 : public RegisterField<FBWCFG, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL5, 0U>;
                using Value1 = FieldValue<FBWSEL5, 1U>;
            };

            struct FBWSEL6 : public RegisterField<FBWCFG, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL6, 0U>;
                using Value1 = FieldValue<FBWSEL6, 1U>;
            };

            struct FBWSEL7 : public RegisterField<FBWCFG, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL7, 0U>;
                using Value1 = FieldValue<FBWSEL7, 1U>;
            };

            struct FBWSEL8 : public RegisterField<FBWCFG, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL8, 0U>;
                using Value1 = FieldValue<FBWSEL8, 1U>;
            };

            struct FBWSEL9 : public RegisterField<FBWCFG, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL9, 0U>;
                using Value1 = FieldValue<FBWSEL9, 1U>;
            };

            struct FBWSEL10 : public RegisterField<FBWCFG, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL10, 0U>;
                using Value1 = FieldValue<FBWSEL10, 1U>;
            };

            struct FBWSEL11 : public RegisterField<FBWCFG, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL11, 0U>;
                using Value1 = FieldValue<FBWSEL11, 1U>;
            };

            struct FBWSEL12 : public RegisterField<FBWCFG, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL12, 0U>;
                using Value1 = FieldValue<FBWSEL12, 1U>;
            };

            struct FBWSEL13 : public RegisterField<FBWCFG, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBWSEL13, 0U>;
                using Value1 = FieldValue<FBWSEL13, 1U>;
            };

        };

        struct FRF : public Register<0x40006614, 32, ReadWriteMode>
        {
            struct FRFSEL0 : public RegisterField<FRF, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL0, 0U>;
                using Value1 = FieldValue<FRFSEL0, 1U>;
            };

            struct FRFSEL1 : public RegisterField<FRF, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL1, 0U>;
                using Value1 = FieldValue<FRFSEL1, 1U>;
            };

            struct FRFSEL2 : public RegisterField<FRF, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL2, 0U>;
                using Value1 = FieldValue<FRFSEL2, 1U>;
            };

            struct FRFSEL3 : public RegisterField<FRF, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL3, 0U>;
                using Value1 = FieldValue<FRFSEL3, 1U>;
            };

            struct FRFSEL4 : public RegisterField<FRF, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL4, 0U>;
                using Value1 = FieldValue<FRFSEL4, 1U>;
            };

            struct FRFSEL5 : public RegisterField<FRF, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL5, 0U>;
                using Value1 = FieldValue<FRFSEL5, 1U>;
            };

            struct FRFSEL6 : public RegisterField<FRF, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL6, 0U>;
                using Value1 = FieldValue<FRFSEL6, 1U>;
            };

            struct FRFSEL7 : public RegisterField<FRF, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL7, 0U>;
                using Value1 = FieldValue<FRFSEL7, 1U>;
            };

            struct FRFSEL8 : public RegisterField<FRF, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL8, 0U>;
                using Value1 = FieldValue<FRFSEL8, 1U>;
            };

            struct FRFSEL9 : public RegisterField<FRF, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL9, 0U>;
                using Value1 = FieldValue<FRFSEL9, 1U>;
            };

            struct FRFSEL10 : public RegisterField<FRF, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL10, 0U>;
                using Value1 = FieldValue<FRFSEL10, 1U>;
            };

            struct FRFSEL11 : public RegisterField<FRF, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL11, 0U>;
                using Value1 = FieldValue<FRFSEL11, 1U>;
            };

            struct FRFSEL12 : public RegisterField<FRF, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL12, 0U>;
                using Value1 = FieldValue<FRFSEL12, 1U>;
            };

            struct FRFSEL13 : public RegisterField<FRF, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FRFSEL13, 0U>;
                using Value1 = FieldValue<FRFSEL13, 1U>;
            };

        };

        struct FACFG : public Register<0x4000661C, 32, ReadWriteMode>
        {
            struct FAEN0 : public RegisterField<FACFG, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN0, 0U>;
                using Value1 = FieldValue<FAEN0, 1U>;
            };

            struct FAEN1 : public RegisterField<FACFG, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN1, 0U>;
                using Value1 = FieldValue<FAEN1, 1U>;
            };

            struct FAEN2 : public RegisterField<FACFG, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN2, 0U>;
                using Value1 = FieldValue<FAEN2, 1U>;
            };

            struct FAEN3 : public RegisterField<FACFG, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN3, 0U>;
                using Value1 = FieldValue<FAEN3, 1U>;
            };

            struct FAEN4 : public RegisterField<FACFG, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN4, 0U>;
                using Value1 = FieldValue<FAEN4, 1U>;
            };

            struct FAEN5 : public RegisterField<FACFG, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN5, 0U>;
                using Value1 = FieldValue<FAEN5, 1U>;
            };

            struct FAEN6 : public RegisterField<FACFG, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN6, 0U>;
                using Value1 = FieldValue<FAEN6, 1U>;
            };

            struct FAEN7 : public RegisterField<FACFG, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN7, 0U>;
                using Value1 = FieldValue<FAEN7, 1U>;
            };

            struct FAEN8 : public RegisterField<FACFG, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN8, 0U>;
                using Value1 = FieldValue<FAEN8, 1U>;
            };

            struct FAEN9 : public RegisterField<FACFG, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN9, 0U>;
                using Value1 = FieldValue<FAEN9, 1U>;
            };

            struct FAEN10 : public RegisterField<FACFG, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN10, 0U>;
                using Value1 = FieldValue<FAEN10, 1U>;
            };

            struct FAEN11 : public RegisterField<FACFG, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN11, 0U>;
                using Value1 = FieldValue<FAEN11, 1U>;
            };

            struct FAEN12 : public RegisterField<FACFG, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN12, 0U>;
                using Value1 = FieldValue<FAEN12, 1U>;
            };

            struct FAEN13 : public RegisterField<FACFG, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FAEN13, 0U>;
                using Value1 = FieldValue<FAEN13, 1U>;
            };

        };

        struct F0FB1 : public Register<0x40006640, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F0FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F0FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F0FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F0FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F0FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F0FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F0FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F0FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F0FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F0FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F0FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F0FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F0FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F0FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F0FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F0FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F0FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F0FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F0FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F0FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F0FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F0FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F0FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F0FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F0FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F0FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F0FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F0FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F0FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F0FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F0FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F0FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F0FB2 : public Register<0x40006644, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F0FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F0FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F0FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F0FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F0FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F0FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F0FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F0FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F0FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F0FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F0FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F0FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F0FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F0FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F0FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F0FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F0FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F0FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F0FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F0FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F0FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F0FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F0FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F0FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F0FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F0FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F0FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F0FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F0FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F0FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F0FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F0FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F1FB1 : public Register<0x40006648, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F1FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F1FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F1FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F1FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F1FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F1FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F1FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F1FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F1FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F1FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F1FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F1FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F1FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F1FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F1FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F1FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F1FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F1FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F1FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F1FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F1FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F1FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F1FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F1FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F1FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F1FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F1FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F1FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F1FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F1FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F1FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F1FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F1FB2 : public Register<0x4000664C, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F1FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F1FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F1FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F1FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F1FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F1FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F1FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F1FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F1FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F1FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F1FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F1FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F1FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F1FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F1FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F1FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F1FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F1FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F1FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F1FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F1FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F1FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F1FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F1FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F1FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F1FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F1FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F1FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F1FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F1FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F1FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F1FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F2FB1 : public Register<0x40006650, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F2FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F2FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F2FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F2FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F2FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F2FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F2FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F2FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F2FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F2FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F2FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F2FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F2FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F2FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F2FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F2FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F2FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F2FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F2FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F2FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F2FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F2FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F2FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F2FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F2FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F2FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F2FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F2FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F2FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F2FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F2FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F2FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F2FB2 : public Register<0x40006654, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F2FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F2FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F2FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F2FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F2FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F2FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F2FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F2FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F2FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F2FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F2FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F2FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F2FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F2FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F2FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F2FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F2FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F2FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F2FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F2FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F2FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F2FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F2FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F2FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F2FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F2FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F2FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F2FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F2FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F2FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F2FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F2FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F3FB1 : public Register<0x40006658, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F3FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F3FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F3FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F3FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F3FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F3FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F3FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F3FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F3FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F3FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F3FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F3FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F3FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F3FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F3FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F3FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F3FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F3FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F3FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F3FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F3FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F3FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F3FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F3FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F3FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F3FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F3FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F3FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F3FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F3FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F3FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F3FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F3FB2 : public Register<0x4000665C, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F3FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F3FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F3FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F3FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F3FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F3FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F3FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F3FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F3FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F3FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F3FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F3FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F3FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F3FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F3FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F3FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F3FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F3FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F3FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F3FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F3FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F3FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F3FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F3FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F3FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F3FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F3FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F3FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F3FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F3FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F3FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F3FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F4FB1 : public Register<0x40006660, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F4FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F4FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F4FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F4FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F4FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F4FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F4FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F4FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F4FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F4FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F4FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F4FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F4FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F4FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F4FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F4FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F4FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F4FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F4FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F4FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F4FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F4FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F4FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F4FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F4FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F4FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F4FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F4FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F4FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F4FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F4FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F4FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F4FB2 : public Register<0x40006664, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F4FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F4FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F4FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F4FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F4FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F4FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F4FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F4FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F4FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F4FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F4FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F4FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F4FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F4FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F4FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F4FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F4FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F4FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F4FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F4FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F4FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F4FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F4FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F4FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F4FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F4FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F4FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F4FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F4FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F4FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F4FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F4FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F5FB1 : public Register<0x40006668, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F5FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F5FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F5FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F5FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F5FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F5FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F5FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F5FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F5FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F5FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F5FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F5FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F5FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F5FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F5FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F5FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F5FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F5FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F5FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F5FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F5FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F5FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F5FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F5FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F5FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F5FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F5FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F5FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F5FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F5FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F5FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F5FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F5FB2 : public Register<0x4000666C, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F5FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F5FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F5FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F5FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F5FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F5FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F5FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F5FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F5FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F5FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F5FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F5FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F5FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F5FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F5FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F5FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F5FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F5FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F5FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F5FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F5FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F5FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F5FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F5FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F5FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F5FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F5FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F5FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F5FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F5FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F5FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F5FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F6FB1 : public Register<0x40006670, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F6FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F6FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F6FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F6FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F6FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F6FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F6FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F6FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F6FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F6FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F6FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F6FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F6FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F6FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F6FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F6FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F6FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F6FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F6FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F6FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F6FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F6FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F6FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F6FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F6FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F6FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F6FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F6FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F6FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F6FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F6FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F6FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F6FB2 : public Register<0x40006674, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F6FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F6FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F6FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F6FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F6FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F6FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F6FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F6FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F6FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F6FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F6FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F6FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F6FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F6FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F6FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F6FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F6FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F6FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F6FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F6FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F6FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F6FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F6FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F6FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F6FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F6FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F6FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F6FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F6FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F6FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F6FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F6FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F7FB1 : public Register<0x40006678, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F7FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F7FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F7FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F7FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F7FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F7FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F7FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F7FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F7FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F7FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F7FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F7FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F7FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F7FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F7FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F7FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F7FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F7FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F7FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F7FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F7FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F7FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F7FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F7FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F7FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F7FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F7FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F7FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F7FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F7FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F7FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F7FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F7FB2 : public Register<0x4000667C, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F7FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F7FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F7FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F7FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F7FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F7FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F7FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F7FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F7FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F7FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F7FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F7FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F7FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F7FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F7FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F7FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F7FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F7FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F7FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F7FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F7FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F7FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F7FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F7FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F7FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F7FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F7FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F7FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F7FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F7FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F7FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F7FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F8FB1 : public Register<0x40006680, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F8FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F8FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F8FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F8FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F8FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F8FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F8FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F8FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F8FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F8FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F8FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F8FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F8FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F8FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F8FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F8FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F8FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F8FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F8FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F8FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F8FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F8FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F8FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F8FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F8FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F8FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F8FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F8FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F8FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F8FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F8FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F8FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F8FB2 : public Register<0x40006684, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F8FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F8FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F8FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F8FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F8FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F8FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F8FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F8FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F8FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F8FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F8FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F8FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F8FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F8FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F8FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F8FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F8FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F8FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F8FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F8FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F8FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F8FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F8FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F8FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F8FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F8FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F8FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F8FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F8FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F8FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F8FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F8FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F9FB1 : public Register<0x40006688, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F9FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F9FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F9FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F9FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F9FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F9FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F9FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F9FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F9FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F9FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F9FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F9FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F9FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F9FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F9FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F9FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F9FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F9FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F9FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F9FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F9FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F9FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F9FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F9FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F9FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F9FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F9FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F9FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F9FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F9FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F9FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F9FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F9FB2 : public Register<0x4000668C, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F9FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F9FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F9FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F9FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F9FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F9FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F9FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F9FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F9FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F9FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F9FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F9FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F9FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F9FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F9FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F9FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F9FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F9FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F9FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F9FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F9FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F9FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F9FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F9FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F9FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F9FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F9FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F9FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F9FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F9FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F9FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F9FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F10FB1 : public Register<0x40006690, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F10FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F10FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F10FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F10FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F10FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F10FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F10FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F10FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F10FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F10FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F10FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F10FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F10FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F10FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F10FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F10FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F10FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F10FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F10FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F10FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F10FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F10FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F10FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F10FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F10FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F10FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F10FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F10FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F10FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F10FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F10FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F10FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F10FB2 : public Register<0x40006694, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F10FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F10FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F10FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F10FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F10FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F10FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F10FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F10FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F10FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F10FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F10FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F10FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F10FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F10FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F10FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F10FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F10FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F10FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F10FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F10FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F10FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F10FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F10FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F10FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F10FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F10FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F10FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F10FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F10FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F10FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F10FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F10FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F11FB1 : public Register<0x40006698, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F11FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F11FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F11FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F11FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F11FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F11FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F11FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F11FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F11FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F11FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F11FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F11FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F11FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F11FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F11FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F11FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F11FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F11FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F11FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F11FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F11FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F11FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F11FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F11FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F11FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F11FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F11FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F11FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F11FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F11FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F11FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F11FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F11FB2 : public Register<0x4000669C, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F11FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F11FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F11FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F11FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F11FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F11FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F11FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F11FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F11FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F11FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F11FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F11FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F11FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F11FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F11FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F11FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F11FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F11FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F11FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F11FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F11FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F11FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F11FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F11FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F11FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F11FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F11FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F11FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F11FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F11FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F11FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F11FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F12FB1 : public Register<0x400066A0, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F12FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F12FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F12FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F12FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F12FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F12FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F12FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F12FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F12FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F12FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F12FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F12FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F12FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F12FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F12FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F12FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F12FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F12FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F12FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F12FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F12FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F12FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F12FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F12FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F12FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F12FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F12FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F12FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F12FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F12FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F12FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F12FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F12FB2 : public Register<0x400066A4, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F12FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F12FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F12FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F12FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F12FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F12FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F12FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F12FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F12FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F12FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F12FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F12FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F12FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F12FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F12FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F12FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F12FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F12FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F12FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F12FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F12FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F12FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F12FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F12FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F12FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F12FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F12FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F12FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F12FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F12FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F12FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F12FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F13FB1 : public Register<0x400066A8, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F13FB1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F13FB1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F13FB1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F13FB1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F13FB1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F13FB1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F13FB1, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F13FB1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F13FB1, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F13FB1, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F13FB1, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F13FB1, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F13FB1, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F13FB1, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F13FB1, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F13FB1, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F13FB1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F13FB1, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F13FB1, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F13FB1, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F13FB1, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F13FB1, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F13FB1, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F13FB1, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F13FB1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F13FB1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F13FB1, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F13FB1, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F13FB1, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F13FB1, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F13FB1, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F13FB1, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

        struct F13FB2 : public Register<0x400066AC, 32, ReadWriteMode>
        {
            struct FFDB0 : public RegisterField<F13FB2, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB0, 0U>;
                using Value1 = FieldValue<FFDB0, 1U>;
            };

            struct FFDB1 : public RegisterField<F13FB2, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB1, 0U>;
                using Value1 = FieldValue<FFDB1, 1U>;
            };

            struct FFDB2 : public RegisterField<F13FB2, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB2, 0U>;
                using Value1 = FieldValue<FFDB2, 1U>;
            };

            struct FFDB3 : public RegisterField<F13FB2, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB3, 0U>;
                using Value1 = FieldValue<FFDB3, 1U>;
            };

            struct FFDB4 : public RegisterField<F13FB2, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB4, 0U>;
                using Value1 = FieldValue<FFDB4, 1U>;
            };

            struct FFDB5 : public RegisterField<F13FB2, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB5, 0U>;
                using Value1 = FieldValue<FFDB5, 1U>;
            };

            struct FFDB6 : public RegisterField<F13FB2, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB6, 0U>;
                using Value1 = FieldValue<FFDB6, 1U>;
            };

            struct FFDB7 : public RegisterField<F13FB2, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB7, 0U>;
                using Value1 = FieldValue<FFDB7, 1U>;
            };

            struct FFDB8 : public RegisterField<F13FB2, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB8, 0U>;
                using Value1 = FieldValue<FFDB8, 1U>;
            };

            struct FFDB9 : public RegisterField<F13FB2, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB9, 0U>;
                using Value1 = FieldValue<FFDB9, 1U>;
            };

            struct FFDB10 : public RegisterField<F13FB2, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB10, 0U>;
                using Value1 = FieldValue<FFDB10, 1U>;
            };

            struct FFDB11 : public RegisterField<F13FB2, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB11, 0U>;
                using Value1 = FieldValue<FFDB11, 1U>;
            };

            struct FFDB12 : public RegisterField<F13FB2, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB12, 0U>;
                using Value1 = FieldValue<FFDB12, 1U>;
            };

            struct FFDB13 : public RegisterField<F13FB2, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB13, 0U>;
                using Value1 = FieldValue<FFDB13, 1U>;
            };

            struct FFDB14 : public RegisterField<F13FB2, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB14, 0U>;
                using Value1 = FieldValue<FFDB14, 1U>;
            };

            struct FFDB15 : public RegisterField<F13FB2, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB15, 0U>;
                using Value1 = FieldValue<FFDB15, 1U>;
            };

            struct FFDB16 : public RegisterField<F13FB2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB16, 0U>;
                using Value1 = FieldValue<FFDB16, 1U>;
            };

            struct FFDB17 : public RegisterField<F13FB2, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB17, 0U>;
                using Value1 = FieldValue<FFDB17, 1U>;
            };

            struct FFDB18 : public RegisterField<F13FB2, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB18, 0U>;
                using Value1 = FieldValue<FFDB18, 1U>;
            };

            struct FFDB19 : public RegisterField<F13FB2, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB19, 0U>;
                using Value1 = FieldValue<FFDB19, 1U>;
            };

            struct FFDB20 : public RegisterField<F13FB2, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB20, 0U>;
                using Value1 = FieldValue<FFDB20, 1U>;
            };

            struct FFDB21 : public RegisterField<F13FB2, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB21, 0U>;
                using Value1 = FieldValue<FFDB21, 1U>;
            };

            struct FFDB22 : public RegisterField<F13FB2, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB22, 0U>;
                using Value1 = FieldValue<FFDB22, 1U>;
            };

            struct FFDB23 : public RegisterField<F13FB2, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB23, 0U>;
                using Value1 = FieldValue<FFDB23, 1U>;
            };

            struct FFDB24 : public RegisterField<F13FB2, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB24, 0U>;
                using Value1 = FieldValue<FFDB24, 1U>;
            };

            struct FFDB25 : public RegisterField<F13FB2, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB25, 0U>;
                using Value1 = FieldValue<FFDB25, 1U>;
            };

            struct FFDB26 : public RegisterField<F13FB2, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB26, 0U>;
                using Value1 = FieldValue<FFDB26, 1U>;
            };

            struct FFDB27 : public RegisterField<F13FB2, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB27, 0U>;
                using Value1 = FieldValue<FFDB27, 1U>;
            };

            struct FFDB28 : public RegisterField<F13FB2, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB28, 0U>;
                using Value1 = FieldValue<FFDB28, 1U>;
            };

            struct FFDB29 : public RegisterField<F13FB2, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB29, 0U>;
                using Value1 = FieldValue<FFDB29, 1U>;
            };

            struct FFDB30 : public RegisterField<F13FB2, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB30, 0U>;
                using Value1 = FieldValue<FFDB30, 1U>;
            };

            struct FFDB31 : public RegisterField<F13FB2, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FFDB31, 0U>;
                using Value1 = FieldValue<FFDB31, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(CAN1REGISTERS_HPP)
