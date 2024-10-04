/*******************************************************************************
* Filename      : ethernetmacregisters.hpp
*
* Details       : Ethernet: media access control. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETMACREGISTERS_HPP)
#define ETHERNETMACREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct ETHERNET_MAC
    {
        struct MACCTRL : public Register<0x40028000, 32, ReadWriteMode>
        {
            struct RE : public RegisterField<MACCTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RE, 0U>;
                using Value1 = FieldValue<RE, 1U>;
            };

            struct TE : public RegisterField<MACCTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TE, 0U>;
                using Value1 = FieldValue<TE, 1U>;
            };

            struct DC : public RegisterField<MACCTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DC, 0U>;
                using Value1 = FieldValue<DC, 1U>;
            };

            struct BL : public RegisterField<MACCTRL, 5, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<BL, 0U>;
                using Value1 = FieldValue<BL, 1U>;
                using Value2 = FieldValue<BL, 2U>;
                using Value3 = FieldValue<BL, 3U>;
            };

            struct ACS : public RegisterField<MACCTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ACS, 0U>;
                using Value1 = FieldValue<ACS, 1U>;
            };

            struct DR : public RegisterField<MACCTRL, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DR, 0U>;
                using Value1 = FieldValue<DR, 1U>;
            };

            struct IPC : public RegisterField<MACCTRL, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IPC, 0U>;
                using Value1 = FieldValue<IPC, 1U>;
            };

            struct DM : public RegisterField<MACCTRL, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DM, 0U>;
                using Value1 = FieldValue<DM, 1U>;
            };

            struct LM : public RegisterField<MACCTRL, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LM, 0U>;
                using Value1 = FieldValue<LM, 1U>;
            };

            struct DRO : public RegisterField<MACCTRL, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DRO, 0U>;
                using Value1 = FieldValue<DRO, 1U>;
            };

            struct FES : public RegisterField<MACCTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FES, 0U>;
                using Value1 = FieldValue<FES, 1U>;
            };

            struct DCS : public RegisterField<MACCTRL, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DCS, 0U>;
                using Value1 = FieldValue<DCS, 1U>;
            };

            struct IFG : public RegisterField<MACCTRL, 17, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<IFG, 0U>;
                using Value1 = FieldValue<IFG, 1U>;
                using Value2 = FieldValue<IFG, 2U>;
                using Value3 = FieldValue<IFG, 3U>;
                using Value4 = FieldValue<IFG, 4U>;
                using Value5 = FieldValue<IFG, 5U>;
                using Value6 = FieldValue<IFG, 6U>;
                using Value7 = FieldValue<IFG, 7U>;
            };

            struct JD : public RegisterField<MACCTRL, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<JD, 0U>;
                using Value1 = FieldValue<JD, 1U>;
            };

            struct WD : public RegisterField<MACCTRL, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WD, 0U>;
                using Value1 = FieldValue<WD, 1U>;
            };

        };

        struct MACFRMF : public Register<0x40028004, 32, ReadWriteMode>
        {
            struct PR : public RegisterField<MACFRMF, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PR, 0U>;
                using Value1 = FieldValue<PR, 1U>;
            };

            struct HUC : public RegisterField<MACFRMF, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HUC, 0U>;
                using Value1 = FieldValue<HUC, 1U>;
            };

            struct HMC : public RegisterField<MACFRMF, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HMC, 0U>;
                using Value1 = FieldValue<HMC, 1U>;
            };

            struct DAIF : public RegisterField<MACFRMF, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DAIF, 0U>;
                using Value1 = FieldValue<DAIF, 1U>;
            };

            struct PMC : public RegisterField<MACFRMF, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PMC, 0U>;
                using Value1 = FieldValue<PMC, 1U>;
            };

            struct DBF : public RegisterField<MACFRMF, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DBF, 0U>;
                using Value1 = FieldValue<DBF, 1U>;
            };

            struct PCF : public RegisterField<MACFRMF, 6, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PCF, 0U>;
                using Value1 = FieldValue<PCF, 1U>;
                using Value2 = FieldValue<PCF, 2U>;
                using Value3 = FieldValue<PCF, 3U>;
            };

            struct SAIF : public RegisterField<MACFRMF, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SAIF, 0U>;
                using Value1 = FieldValue<SAIF, 1U>;
            };

            struct SAF : public RegisterField<MACFRMF, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SAF, 0U>;
                using Value1 = FieldValue<SAF, 1U>;
            };

            struct HPF : public RegisterField<MACFRMF, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HPF, 0U>;
                using Value1 = FieldValue<HPF, 1U>;
            };

            struct RA : public RegisterField<MACFRMF, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RA, 0U>;
                using Value1 = FieldValue<RA, 1U>;
            };

        };

        struct MACHTH : public Register<0x40028008, 32, ReadWriteMode>
        {
            struct HTH : public RegisterField<MACHTH, 0, 32, ReadWriteMode>
            {
            };

        };

        struct MACHTL : public Register<0x4002800C, 32, ReadWriteMode>
        {
            struct HTL : public RegisterField<MACHTL, 0, 32, ReadWriteMode>
            {
            };

        };

        struct MACMIIADDR : public Register<0x40028010, 32, ReadWriteMode>
        {
            struct MB : public RegisterField<MACMIIADDR, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MB, 0U>;
                using Value1 = FieldValue<MB, 1U>;
            };

            struct MW : public RegisterField<MACMIIADDR, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MW, 0U>;
                using Value1 = FieldValue<MW, 1U>;
            };

            struct CR : public RegisterField<MACMIIADDR, 2, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CR, 0U>;
                using Value1 = FieldValue<CR, 1U>;
                using Value2 = FieldValue<CR, 2U>;
                using Value3 = FieldValue<CR, 3U>;
                using Value4 = FieldValue<CR, 4U>;
                using Value5 = FieldValue<CR, 5U>;
                using Value6 = FieldValue<CR, 6U>;
                using Value7 = FieldValue<CR, 7U>;
            };

            struct MII : public RegisterField<MACMIIADDR, 6, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<MII, 0U>;
                using Value1 = FieldValue<MII, 1U>;
                using Value2 = FieldValue<MII, 2U>;
                using Value3 = FieldValue<MII, 3U>;
                using Value4 = FieldValue<MII, 4U>;
                using Value5 = FieldValue<MII, 5U>;
                using Value6 = FieldValue<MII, 6U>;
                using Value7 = FieldValue<MII, 7U>;
                using Value8 = FieldValue<MII, 8U>;
                using Value9 = FieldValue<MII, 9U>;
                using Value10 = FieldValue<MII, 10U>;
                using Value11 = FieldValue<MII, 11U>;
                using Value12 = FieldValue<MII, 12U>;
                using Value13 = FieldValue<MII, 13U>;
                using Value14 = FieldValue<MII, 14U>;
                using Value15 = FieldValue<MII, 15U>;
                using Value16 = FieldValue<MII, 16U>;
                using Value17 = FieldValue<MII, 17U>;
                using Value18 = FieldValue<MII, 18U>;
                using Value19 = FieldValue<MII, 19U>;
                using Value20 = FieldValue<MII, 20U>;
                using Value21 = FieldValue<MII, 21U>;
                using Value22 = FieldValue<MII, 22U>;
                using Value23 = FieldValue<MII, 23U>;
                using Value24 = FieldValue<MII, 24U>;
                using Value25 = FieldValue<MII, 25U>;
                using Value26 = FieldValue<MII, 26U>;
                using Value27 = FieldValue<MII, 27U>;
                using Value28 = FieldValue<MII, 28U>;
                using Value29 = FieldValue<MII, 29U>;
                using Value30 = FieldValue<MII, 30U>;
                using Value31 = FieldValue<MII, 31U>;
            };

            struct PA : public RegisterField<MACMIIADDR, 11, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<PA, 0U>;
                using Value1 = FieldValue<PA, 1U>;
                using Value2 = FieldValue<PA, 2U>;
                using Value3 = FieldValue<PA, 3U>;
                using Value4 = FieldValue<PA, 4U>;
                using Value5 = FieldValue<PA, 5U>;
                using Value6 = FieldValue<PA, 6U>;
                using Value7 = FieldValue<PA, 7U>;
                using Value8 = FieldValue<PA, 8U>;
                using Value9 = FieldValue<PA, 9U>;
                using Value10 = FieldValue<PA, 10U>;
                using Value11 = FieldValue<PA, 11U>;
                using Value12 = FieldValue<PA, 12U>;
                using Value13 = FieldValue<PA, 13U>;
                using Value14 = FieldValue<PA, 14U>;
                using Value15 = FieldValue<PA, 15U>;
                using Value16 = FieldValue<PA, 16U>;
                using Value17 = FieldValue<PA, 17U>;
                using Value18 = FieldValue<PA, 18U>;
                using Value19 = FieldValue<PA, 19U>;
                using Value20 = FieldValue<PA, 20U>;
                using Value21 = FieldValue<PA, 21U>;
                using Value22 = FieldValue<PA, 22U>;
                using Value23 = FieldValue<PA, 23U>;
                using Value24 = FieldValue<PA, 24U>;
                using Value25 = FieldValue<PA, 25U>;
                using Value26 = FieldValue<PA, 26U>;
                using Value27 = FieldValue<PA, 27U>;
                using Value28 = FieldValue<PA, 28U>;
                using Value29 = FieldValue<PA, 29U>;
                using Value30 = FieldValue<PA, 30U>;
                using Value31 = FieldValue<PA, 31U>;
            };

        };

        struct MACMIIDT : public Register<0x40028014, 32, ReadWriteMode>
        {
            struct MD : public RegisterField<MACMIIDT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct MACFCTRL : public Register<0x40028018, 32, ReadWriteMode>
        {
            struct FCB_BPA : public RegisterField<MACFCTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FCB_BPA, 0U>;
                using Value1 = FieldValue<FCB_BPA, 1U>;
            };

            struct ETF : public RegisterField<MACFCTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ETF, 0U>;
                using Value1 = FieldValue<ETF, 1U>;
            };

            struct ERF : public RegisterField<MACFCTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERF, 0U>;
                using Value1 = FieldValue<ERF, 1U>;
            };

            struct DUP : public RegisterField<MACFCTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DUP, 0U>;
                using Value1 = FieldValue<DUP, 1U>;
            };

            struct PLT : public RegisterField<MACFCTRL, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PLT, 0U>;
                using Value1 = FieldValue<PLT, 1U>;
                using Value2 = FieldValue<PLT, 2U>;
                using Value3 = FieldValue<PLT, 3U>;
            };

            struct DZQP : public RegisterField<MACFCTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DZQP, 0U>;
                using Value1 = FieldValue<DZQP, 1U>;
            };

            struct PT : public RegisterField<MACFCTRL, 16, 16, ReadWriteMode>
            {
            };

        };

        struct MACVLT : public Register<0x4002801C, 32, ReadWriteMode>
        {
            struct VTI : public RegisterField<MACVLT, 0, 16, ReadWriteMode>
            {
            };

            struct ETV : public RegisterField<MACVLT, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ETV, 0U>;
                using Value1 = FieldValue<ETV, 1U>;
            };

        };

        struct MACRWFF : public Register<0x40028028, 32, ReadWriteMode>
        {
        };

        struct MACPMTCTRLSTS : public Register<0x4002802C, 32, ReadWriteMode>
        {
            struct PD : public RegisterField<MACPMTCTRLSTS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PD, 0U>;
                using Value1 = FieldValue<PD, 1U>;
            };

            struct EMP : public RegisterField<MACPMTCTRLSTS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMP, 0U>;
                using Value1 = FieldValue<EMP, 1U>;
            };

            struct ERWF : public RegisterField<MACPMTCTRLSTS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERWF, 0U>;
                using Value1 = FieldValue<ERWF, 1U>;
            };

            struct RMP : public RegisterField<MACPMTCTRLSTS, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RMP, 0U>;
                using Value1 = FieldValue<RMP, 1U>;
            };

            struct RRWF : public RegisterField<MACPMTCTRLSTS, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RRWF, 0U>;
                using Value1 = FieldValue<RRWF, 1U>;
            };

            struct GUC : public RegisterField<MACPMTCTRLSTS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GUC, 0U>;
                using Value1 = FieldValue<GUC, 1U>;
            };

            struct RWFFPR : public RegisterField<MACPMTCTRLSTS, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RWFFPR, 0U>;
                using Value1 = FieldValue<RWFFPR, 1U>;
            };

        };

        struct MACISTS : public Register<0x40028038, 32, ReadWriteMode>
        {
            struct PIS : public RegisterField<MACISTS, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PIS, 0U>;
                using Value1 = FieldValue<PIS, 1U>;
            };

            struct MIS : public RegisterField<MACISTS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MIS, 0U>;
                using Value1 = FieldValue<MIS, 1U>;
            };

            struct MRIS : public RegisterField<MACISTS, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MRIS, 0U>;
                using Value1 = FieldValue<MRIS, 1U>;
            };

            struct MTIS : public RegisterField<MACISTS, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MTIS, 0U>;
                using Value1 = FieldValue<MTIS, 1U>;
            };

            struct TIS : public RegisterField<MACISTS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TIS, 0U>;
                using Value1 = FieldValue<TIS, 1U>;
            };

        };

        struct MACIMR : public Register<0x4002803C, 32, ReadWriteMode>
        {
            struct PIM : public RegisterField<MACIMR, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PIM, 0U>;
                using Value1 = FieldValue<PIM, 1U>;
            };

            struct TIM : public RegisterField<MACIMR, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TIM, 0U>;
                using Value1 = FieldValue<TIM, 1U>;
            };

        };

        struct MACA0H : public Register<0x40028040, 32, ReadWriteMode>
        {
            struct MA0H : public RegisterField<MACA0H, 0, 16, ReadWriteMode>
            {
            };

            struct AE : public RegisterField<MACA0H, 31, 1, ReadMode>
            {
                using Value0 = FieldValue<AE, 0U>;
                using Value1 = FieldValue<AE, 1U>;
            };

        };

        struct MACA0L : public Register<0x40028044, 32, ReadWriteMode>
        {
            struct MA0L : public RegisterField<MACA0L, 0, 32, ReadWriteMode>
            {
            };

        };

        struct MACA1H : public Register<0x40028048, 32, ReadWriteMode>
        {
            struct MA1H : public RegisterField<MACA1H, 0, 16, ReadWriteMode>
            {
            };

            struct MBC : public RegisterField<MACA1H, 24, 6, ReadWriteMode>
            {
            };

            struct SA : public RegisterField<MACA1H, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SA, 0U>;
                using Value1 = FieldValue<SA, 1U>;
            };

            struct AE : public RegisterField<MACA1H, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AE, 0U>;
                using Value1 = FieldValue<AE, 1U>;
            };

        };

        struct MACA1L : public Register<0x4002804C, 32, ReadWriteMode>
        {
            struct MA1L : public RegisterField<MACA1L, 0, 32, ReadWriteMode>
            {
            };

        };

        struct MACA2H : public Register<0x40028050, 32, ReadWriteMode>
        {
            struct MA2H : public RegisterField<MACA2H, 0, 16, ReadWriteMode>
            {
            };

            struct MBC : public RegisterField<MACA2H, 24, 6, ReadWriteMode>
            {
            };

            struct SA : public RegisterField<MACA2H, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SA, 0U>;
                using Value1 = FieldValue<SA, 1U>;
            };

            struct AE : public RegisterField<MACA2H, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AE, 0U>;
                using Value1 = FieldValue<AE, 1U>;
            };

        };

        struct MACA2L : public Register<0x40028054, 32, ReadWriteMode>
        {
            struct MA2L : public RegisterField<MACA2L, 0, 31, ReadWriteMode>
            {
            };

        };

        struct MACA3H : public Register<0x40028058, 32, ReadWriteMode>
        {
            struct MA3H : public RegisterField<MACA3H, 0, 16, ReadWriteMode>
            {
            };

            struct MBC : public RegisterField<MACA3H, 24, 6, ReadWriteMode>
            {
            };

            struct SA : public RegisterField<MACA3H, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SA, 0U>;
                using Value1 = FieldValue<SA, 1U>;
            };

            struct AE : public RegisterField<MACA3H, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AE, 0U>;
                using Value1 = FieldValue<AE, 1U>;
            };

        };

        struct MACA3L : public Register<0x4002805C, 32, ReadWriteMode>
        {
            struct MA3L : public RegisterField<MACA3L, 0, 32, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(ETHERNETMACREGISTERS_HPP)
