/*******************************************************************************
* Filename      : ethernetdmaregisters.hpp
*
* Details       : Ethernet: DMA controller operation. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETDMAREGISTERS_HPP)
#define ETHERNETDMAREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct ETHERNET_DMA
    {
        struct DMABM : public Register<0x40029000, 32, ReadWriteMode>
        {
            struct SWR : public RegisterField<DMABM, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWR, 0U>;
                using Value1 = FieldValue<SWR, 1U>;
            };

            struct DA : public RegisterField<DMABM, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DA, 0U>;
                using Value1 = FieldValue<DA, 1U>;
            };

            struct DSL : public RegisterField<DMABM, 2, 5, ReadWriteMode>
            {
                using Value0 = FieldValue<DSL, 0U>;
                using Value1 = FieldValue<DSL, 1U>;
                using Value2 = FieldValue<DSL, 2U>;
                using Value3 = FieldValue<DSL, 3U>;
                using Value4 = FieldValue<DSL, 4U>;
                using Value5 = FieldValue<DSL, 5U>;
                using Value6 = FieldValue<DSL, 6U>;
                using Value7 = FieldValue<DSL, 7U>;
                using Value8 = FieldValue<DSL, 8U>;
                using Value9 = FieldValue<DSL, 9U>;
                using Value10 = FieldValue<DSL, 10U>;
                using Value11 = FieldValue<DSL, 11U>;
                using Value12 = FieldValue<DSL, 12U>;
                using Value13 = FieldValue<DSL, 13U>;
                using Value14 = FieldValue<DSL, 14U>;
                using Value15 = FieldValue<DSL, 15U>;
                using Value16 = FieldValue<DSL, 16U>;
                using Value17 = FieldValue<DSL, 17U>;
                using Value18 = FieldValue<DSL, 18U>;
                using Value19 = FieldValue<DSL, 19U>;
                using Value20 = FieldValue<DSL, 20U>;
                using Value21 = FieldValue<DSL, 21U>;
                using Value22 = FieldValue<DSL, 22U>;
                using Value23 = FieldValue<DSL, 23U>;
                using Value24 = FieldValue<DSL, 24U>;
                using Value25 = FieldValue<DSL, 25U>;
                using Value26 = FieldValue<DSL, 26U>;
                using Value27 = FieldValue<DSL, 27U>;
                using Value28 = FieldValue<DSL, 28U>;
                using Value29 = FieldValue<DSL, 29U>;
                using Value30 = FieldValue<DSL, 30U>;
                using Value31 = FieldValue<DSL, 31U>;
            };

            struct PBL : public RegisterField<DMABM, 8, 6, ReadWriteMode>
            {
            };

            struct PR : public RegisterField<DMABM, 14, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PR, 0U>;
                using Value1 = FieldValue<PR, 1U>;
                using Value2 = FieldValue<PR, 2U>;
                using Value3 = FieldValue<PR, 3U>;
            };

            struct FB : public RegisterField<DMABM, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FB, 0U>;
                using Value1 = FieldValue<FB, 1U>;
            };

            struct RDP : public RegisterField<DMABM, 17, 6, ReadWriteMode>
            {
            };

            struct USP : public RegisterField<DMABM, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USP, 0U>;
                using Value1 = FieldValue<USP, 1U>;
            };

            struct PBLx8 : public RegisterField<DMABM, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PBLx8, 0U>;
                using Value1 = FieldValue<PBLx8, 1U>;
            };

            struct AAB : public RegisterField<DMABM, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AAB, 0U>;
                using Value1 = FieldValue<AAB, 1U>;
            };

        };

        struct DMATPD : public Register<0x40029004, 32, ReadWriteMode>
        {
            struct TPD : public RegisterField<DMATPD, 0, 32, ReadWriteMode>
            {
            };

        };

        struct DMARPD : public Register<0x40029008, 32, ReadWriteMode>
        {
            struct RPD : public RegisterField<DMARPD, 0, 32, ReadWriteMode>
            {
            };

        };

        struct DMARDLADDR : public Register<0x4002900C, 32, ReadWriteMode>
        {
            struct SRL : public RegisterField<DMARDLADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct DMATDLADDR : public Register<0x40029010, 32, ReadWriteMode>
        {
            struct STL : public RegisterField<DMATDLADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct DMASTS : public Register<0x40029014, 32, ReadWriteMode>
        {
            struct TI : public RegisterField<DMASTS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TI, 0U>;
                using Value1 = FieldValue<TI, 1U>;
            };

            struct TPS : public RegisterField<DMASTS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TPS, 0U>;
                using Value1 = FieldValue<TPS, 1U>;
            };

            struct TBU : public RegisterField<DMASTS, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TBU, 0U>;
                using Value1 = FieldValue<TBU, 1U>;
            };

            struct TJT : public RegisterField<DMASTS, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TJT, 0U>;
                using Value1 = FieldValue<TJT, 1U>;
            };

            struct OVF : public RegisterField<DMASTS, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVF, 0U>;
                using Value1 = FieldValue<OVF, 1U>;
            };

            struct UNF : public RegisterField<DMASTS, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UNF, 0U>;
                using Value1 = FieldValue<UNF, 1U>;
            };

            struct RI : public RegisterField<DMASTS, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RI, 0U>;
                using Value1 = FieldValue<RI, 1U>;
            };

            struct RBU : public RegisterField<DMASTS, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RBU, 0U>;
                using Value1 = FieldValue<RBU, 1U>;
            };

            struct RPS : public RegisterField<DMASTS, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RPS, 0U>;
                using Value1 = FieldValue<RPS, 1U>;
            };

            struct RWT : public RegisterField<DMASTS, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RWT, 0U>;
                using Value1 = FieldValue<RWT, 1U>;
            };

            struct ETI : public RegisterField<DMASTS, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ETI, 0U>;
                using Value1 = FieldValue<ETI, 1U>;
            };

            struct FBEI : public RegisterField<DMASTS, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBEI, 0U>;
                using Value1 = FieldValue<FBEI, 1U>;
            };

            struct ERI : public RegisterField<DMASTS, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERI, 0U>;
                using Value1 = FieldValue<ERI, 1U>;
            };

            struct AIS : public RegisterField<DMASTS, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AIS, 0U>;
                using Value1 = FieldValue<AIS, 1U>;
            };

            struct NIS : public RegisterField<DMASTS, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NIS, 0U>;
                using Value1 = FieldValue<NIS, 1U>;
            };

            struct RS : public RegisterField<DMASTS, 17, 3, ReadMode>
            {
                using Value0 = FieldValue<RS, 0U>;
                using Value1 = FieldValue<RS, 1U>;
                using Value2 = FieldValue<RS, 2U>;
                using Value3 = FieldValue<RS, 3U>;
                using Value4 = FieldValue<RS, 4U>;
                using Value5 = FieldValue<RS, 5U>;
                using Value6 = FieldValue<RS, 6U>;
                using Value7 = FieldValue<RS, 7U>;
            };

            struct TS : public RegisterField<DMASTS, 20, 3, ReadMode>
            {
                using Value0 = FieldValue<TS, 0U>;
                using Value1 = FieldValue<TS, 1U>;
                using Value2 = FieldValue<TS, 2U>;
                using Value3 = FieldValue<TS, 3U>;
                using Value4 = FieldValue<TS, 4U>;
                using Value5 = FieldValue<TS, 5U>;
                using Value6 = FieldValue<TS, 6U>;
                using Value7 = FieldValue<TS, 7U>;
            };

            struct EB : public RegisterField<DMASTS, 23, 3, ReadMode>
            {
                using Value0 = FieldValue<EB, 0U>;
                using Value1 = FieldValue<EB, 1U>;
                using Value2 = FieldValue<EB, 2U>;
                using Value3 = FieldValue<EB, 3U>;
                using Value4 = FieldValue<EB, 4U>;
                using Value5 = FieldValue<EB, 5U>;
                using Value6 = FieldValue<EB, 6U>;
                using Value7 = FieldValue<EB, 7U>;
            };

            struct MMI : public RegisterField<DMASTS, 27, 1, ReadMode>
            {
                using Value0 = FieldValue<MMI, 0U>;
                using Value1 = FieldValue<MMI, 1U>;
            };

            struct MPI : public RegisterField<DMASTS, 28, 1, ReadMode>
            {
                using Value0 = FieldValue<MPI, 0U>;
                using Value1 = FieldValue<MPI, 1U>;
            };

            struct TTI : public RegisterField<DMASTS, 29, 1, ReadMode>
            {
                using Value0 = FieldValue<TTI, 0U>;
                using Value1 = FieldValue<TTI, 1U>;
            };

        };

        struct DMAOPM : public Register<0x40029018, 32, ReadWriteMode>
        {
            struct SSR : public RegisterField<DMAOPM, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SSR, 0U>;
                using Value1 = FieldValue<SSR, 1U>;
            };

            struct OSF : public RegisterField<DMAOPM, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OSF, 0U>;
                using Value1 = FieldValue<OSF, 1U>;
            };

            struct RTC : public RegisterField<DMAOPM, 3, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RTC, 0U>;
                using Value1 = FieldValue<RTC, 1U>;
                using Value2 = FieldValue<RTC, 2U>;
                using Value3 = FieldValue<RTC, 3U>;
            };

            struct FUGF : public RegisterField<DMAOPM, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FUGF, 0U>;
                using Value1 = FieldValue<FUGF, 1U>;
            };

            struct FEF : public RegisterField<DMAOPM, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FEF, 0U>;
                using Value1 = FieldValue<FEF, 1U>;
            };

            struct SSTC : public RegisterField<DMAOPM, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SSTC, 0U>;
                using Value1 = FieldValue<SSTC, 1U>;
            };

            struct TTC : public RegisterField<DMAOPM, 14, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<TTC, 0U>;
                using Value1 = FieldValue<TTC, 1U>;
                using Value2 = FieldValue<TTC, 2U>;
                using Value3 = FieldValue<TTC, 3U>;
                using Value4 = FieldValue<TTC, 4U>;
                using Value5 = FieldValue<TTC, 5U>;
                using Value6 = FieldValue<TTC, 6U>;
                using Value7 = FieldValue<TTC, 7U>;
            };

            struct FTF : public RegisterField<DMAOPM, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FTF, 0U>;
                using Value1 = FieldValue<FTF, 1U>;
            };

            struct TSF : public RegisterField<DMAOPM, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TSF, 0U>;
                using Value1 = FieldValue<TSF, 1U>;
            };

            struct DFRF : public RegisterField<DMAOPM, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DFRF, 0U>;
                using Value1 = FieldValue<DFRF, 1U>;
            };

            struct RSF : public RegisterField<DMAOPM, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RSF, 0U>;
                using Value1 = FieldValue<RSF, 1U>;
            };

            struct DT : public RegisterField<DMAOPM, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DT, 0U>;
                using Value1 = FieldValue<DT, 1U>;
            };

        };

        struct DMAIE : public Register<0x4002901C, 32, ReadWriteMode>
        {
            struct TIE : public RegisterField<DMAIE, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TIE, 0U>;
                using Value1 = FieldValue<TIE, 1U>;
            };

            struct TSE : public RegisterField<DMAIE, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TSE, 0U>;
                using Value1 = FieldValue<TSE, 1U>;
            };

            struct TUE : public RegisterField<DMAIE, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TUE, 0U>;
                using Value1 = FieldValue<TUE, 1U>;
            };

            struct TJE : public RegisterField<DMAIE, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TJE, 0U>;
                using Value1 = FieldValue<TJE, 1U>;
            };

            struct OVE : public RegisterField<DMAIE, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVE, 0U>;
                using Value1 = FieldValue<OVE, 1U>;
            };

            struct UNE : public RegisterField<DMAIE, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UNE, 0U>;
                using Value1 = FieldValue<UNE, 1U>;
            };

            struct RIE : public RegisterField<DMAIE, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RIE, 0U>;
                using Value1 = FieldValue<RIE, 1U>;
            };

            struct RBUE : public RegisterField<DMAIE, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RBUE, 0U>;
                using Value1 = FieldValue<RBUE, 1U>;
            };

            struct RSE : public RegisterField<DMAIE, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RSE, 0U>;
                using Value1 = FieldValue<RSE, 1U>;
            };

            struct RWTE : public RegisterField<DMAIE, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RWTE, 0U>;
                using Value1 = FieldValue<RWTE, 1U>;
            };

            struct EIE : public RegisterField<DMAIE, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EIE, 0U>;
                using Value1 = FieldValue<EIE, 1U>;
            };

            struct FBEE : public RegisterField<DMAIE, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FBEE, 0U>;
                using Value1 = FieldValue<FBEE, 1U>;
            };

            struct ERE : public RegisterField<DMAIE, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ERE, 0U>;
                using Value1 = FieldValue<ERE, 1U>;
            };

            struct AIE : public RegisterField<DMAIE, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<AIE, 0U>;
                using Value1 = FieldValue<AIE, 1U>;
            };

            struct NIE : public RegisterField<DMAIE, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NIE, 0U>;
                using Value1 = FieldValue<NIE, 1U>;
            };

        };

        struct DMAMFBOCNT : public Register<0x40029020, 32, ReadMode>
        {
            struct MFC : public RegisterField<DMAMFBOCNT, 0, 16, ReadMode>
            {
            };

            struct OBMFC : public RegisterField<DMAMFBOCNT, 16, 1, ReadMode>
            {
                using Value0 = FieldValue<OBMFC, 0U>;
                using Value1 = FieldValue<OBMFC, 1U>;
            };

            struct OFC : public RegisterField<DMAMFBOCNT, 17, 11, ReadMode>
            {
            };

            struct OBFOC : public RegisterField<DMAMFBOCNT, 28, 1, ReadMode>
            {
                using Value0 = FieldValue<OBFOC, 0U>;
                using Value1 = FieldValue<OBFOC, 1U>;
            };

        };

        struct DMACTD : public Register<0x40029048, 32, ReadMode>
        {
            struct HTDAP : public RegisterField<DMACTD, 0, 32, ReadMode>
            {
            };

        };

        struct DMACRD : public Register<0x4002904C, 32, ReadMode>
        {
            struct HRDAP : public RegisterField<DMACRD, 0, 32, ReadMode>
            {
            };

        };

        struct DMACTBADDR : public Register<0x40029050, 32, ReadMode>
        {
            struct HTBAP : public RegisterField<DMACTBADDR, 0, 32, ReadMode>
            {
            };

        };

        struct DMACRBADDR : public Register<0x40029054, 32, ReadMode>
        {
            struct HRBAP : public RegisterField<DMACRBADDR, 0, 32, ReadMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(ETHERNETDMAREGISTERS_HPP)
