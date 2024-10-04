/*******************************************************************************
* Filename      : ethernetmmcregisters.hpp
*
* Details       : Ethernet: MAC management counters. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(ETHERNETMMCREGISTERS_HPP)
#define ETHERNETMMCREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct ETHERNET_MMC
    {
        struct MMCCTRL : public Register<0x40028100, 32, ReadWriteMode>
        {
            struct RC : public RegisterField<MMCCTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RC, 0U>;
                using Value1 = FieldValue<RC, 1U>;
            };

            struct SCR : public RegisterField<MMCCTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SCR, 0U>;
                using Value1 = FieldValue<SCR, 1U>;
            };

            struct RR : public RegisterField<MMCCTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RR, 0U>;
                using Value1 = FieldValue<RR, 1U>;
            };

            struct FMC : public RegisterField<MMCCTRL, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FMC, 0U>;
                using Value1 = FieldValue<FMC, 1U>;
            };

        };

        struct MMCRI : public Register<0x40028104, 32, ReadWriteMode>
        {
            struct RFCE : public RegisterField<MMCRI, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RFCE, 0U>;
                using Value1 = FieldValue<RFCE, 1U>;
            };

            struct RFAE : public RegisterField<MMCRI, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RFAE, 0U>;
                using Value1 = FieldValue<RFAE, 1U>;
            };

            struct RGUF : public RegisterField<MMCRI, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RGUF, 0U>;
                using Value1 = FieldValue<RGUF, 1U>;
            };

        };

        struct MMCTI : public Register<0x40028108, 32, ReadWriteMode>
        {
            struct TSCGFCI : public RegisterField<MMCTI, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TSCGFCI, 0U>;
                using Value1 = FieldValue<TSCGFCI, 1U>;
            };

            struct TGFMSC : public RegisterField<MMCTI, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TGFMSC, 0U>;
                using Value1 = FieldValue<TGFMSC, 1U>;
            };

            struct TGF : public RegisterField<MMCTI, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TGF, 0U>;
                using Value1 = FieldValue<TGF, 1U>;
            };

        };

        struct MMCRIM : public Register<0x4002810C, 32, ReadWriteMode>
        {
            struct RCEFCIM : public RegisterField<MMCRIM, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RCEFCIM, 0U>;
                using Value1 = FieldValue<RCEFCIM, 1U>;
            };

            struct RAEFACIM : public RegisterField<MMCRIM, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RAEFACIM, 0U>;
                using Value1 = FieldValue<RAEFACIM, 1U>;
            };

            struct RUGFCIM : public RegisterField<MMCRIM, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RUGFCIM, 0U>;
                using Value1 = FieldValue<RUGFCIM, 1U>;
            };

        };

        struct MMCTIM : public Register<0x40028110, 32, ReadWriteMode>
        {
            struct TSCGFCIM : public RegisterField<MMCTIM, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TSCGFCIM, 0U>;
                using Value1 = FieldValue<TSCGFCIM, 1U>;
            };

            struct TMCGFCIM : public RegisterField<MMCTIM, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMCGFCIM, 0U>;
                using Value1 = FieldValue<TMCGFCIM, 1U>;
            };

            struct TGFCIM : public RegisterField<MMCTIM, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TGFCIM, 0U>;
                using Value1 = FieldValue<TGFCIM, 1U>;
            };

        };

        struct MMCTFSCC : public Register<0x4002814C, 32, ReadMode>
        {
            struct TGFSCC : public RegisterField<MMCTFSCC, 0, 32, ReadMode>
            {
            };

        };

        struct MMCTFMSCC : public Register<0x40028150, 32, ReadMode>
        {
            struct TGFMSCC : public RegisterField<MMCTFMSCC, 0, 32, ReadMode>
            {
            };

        };

        struct MMCTFCNT : public Register<0x40028168, 32, ReadMode>
        {
            struct TGFC : public RegisterField<MMCTFCNT, 0, 32, ReadMode>
            {
            };

        };

        struct MMCRFCECNT : public Register<0x40028194, 32, ReadMode>
        {
            struct RFCEC : public RegisterField<MMCRFCECNT, 0, 32, ReadMode>
            {
            };

        };

        struct MMCRFAECNT : public Register<0x40028198, 32, ReadMode>
        {
            struct RFAEC : public RegisterField<MMCRFAECNT, 0, 32, ReadMode>
            {
            };

        };

        struct MMCRGUFCNT : public Register<0x400281C4, 32, ReadMode>
        {
            struct RGUFC : public RegisterField<MMCRGUFCNT, 0, 32, ReadMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(ETHERNETMMCREGISTERS_HPP)
