/*******************************************************************************
* Filename      : dma2registers.hpp
*
* Details       : DMA controller. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(DMA2REGISTERS_HPP)
#define DMA2REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct DMA2
    {
        struct STS : public Register<0x40020400, 32, ReadMode>
        {
            struct GF1 : public RegisterField<STS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<GF1, 0U>;
                using Value1 = FieldValue<GF1, 1U>;
            };

            struct GF2 : public RegisterField<STS, 4, 1, ReadMode>
            {
                using Value0 = FieldValue<GF2, 0U>;
                using Value1 = FieldValue<GF2, 1U>;
            };

            struct GF3 : public RegisterField<STS, 8, 1, ReadMode>
            {
                using Value0 = FieldValue<GF3, 0U>;
                using Value1 = FieldValue<GF3, 1U>;
            };

            struct GF4 : public RegisterField<STS, 12, 1, ReadMode>
            {
                using Value0 = FieldValue<GF4, 0U>;
                using Value1 = FieldValue<GF4, 1U>;
            };

            struct GF5 : public RegisterField<STS, 16, 1, ReadMode>
            {
                using Value0 = FieldValue<GF5, 0U>;
                using Value1 = FieldValue<GF5, 1U>;
            };

            struct GF6 : public RegisterField<STS, 20, 1, ReadMode>
            {
                using Value0 = FieldValue<GF6, 0U>;
                using Value1 = FieldValue<GF6, 1U>;
            };

            struct GF7 : public RegisterField<STS, 24, 1, ReadMode>
            {
                using Value0 = FieldValue<GF7, 0U>;
                using Value1 = FieldValue<GF7, 1U>;
            };

            struct FDTF1 : public RegisterField<STS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<FDTF1, 0U>;
                using Value1 = FieldValue<FDTF1, 1U>;
            };

            struct FDTF2 : public RegisterField<STS, 5, 1, ReadMode>
            {
                using Value0 = FieldValue<FDTF2, 0U>;
                using Value1 = FieldValue<FDTF2, 1U>;
            };

            struct FDTF3 : public RegisterField<STS, 9, 1, ReadMode>
            {
                using Value0 = FieldValue<FDTF3, 0U>;
                using Value1 = FieldValue<FDTF3, 1U>;
            };

            struct FDTF4 : public RegisterField<STS, 13, 1, ReadMode>
            {
                using Value0 = FieldValue<FDTF4, 0U>;
                using Value1 = FieldValue<FDTF4, 1U>;
            };

            struct FDTF5 : public RegisterField<STS, 17, 1, ReadMode>
            {
                using Value0 = FieldValue<FDTF5, 0U>;
                using Value1 = FieldValue<FDTF5, 1U>;
            };

            struct FDTF6 : public RegisterField<STS, 21, 1, ReadMode>
            {
                using Value0 = FieldValue<FDTF6, 0U>;
                using Value1 = FieldValue<FDTF6, 1U>;
            };

            struct FDTF7 : public RegisterField<STS, 25, 1, ReadMode>
            {
                using Value0 = FieldValue<FDTF7, 0U>;
                using Value1 = FieldValue<FDTF7, 1U>;
            };

            struct HDTF1 : public RegisterField<STS, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<HDTF1, 0U>;
                using Value1 = FieldValue<HDTF1, 1U>;
            };

            struct HDTF2 : public RegisterField<STS, 6, 1, ReadMode>
            {
                using Value0 = FieldValue<HDTF2, 0U>;
                using Value1 = FieldValue<HDTF2, 1U>;
            };

            struct HDTF3 : public RegisterField<STS, 10, 1, ReadMode>
            {
                using Value0 = FieldValue<HDTF3, 0U>;
                using Value1 = FieldValue<HDTF3, 1U>;
            };

            struct HDTF4 : public RegisterField<STS, 14, 1, ReadMode>
            {
                using Value0 = FieldValue<HDTF4, 0U>;
                using Value1 = FieldValue<HDTF4, 1U>;
            };

            struct HDTF5 : public RegisterField<STS, 18, 1, ReadMode>
            {
                using Value0 = FieldValue<HDTF5, 0U>;
                using Value1 = FieldValue<HDTF5, 1U>;
            };

            struct HDTF6 : public RegisterField<STS, 22, 1, ReadMode>
            {
                using Value0 = FieldValue<HDTF6, 0U>;
                using Value1 = FieldValue<HDTF6, 1U>;
            };

            struct HDTF7 : public RegisterField<STS, 26, 1, ReadMode>
            {
                using Value0 = FieldValue<HDTF7, 0U>;
                using Value1 = FieldValue<HDTF7, 1U>;
            };

            struct DTERRF1 : public RegisterField<STS, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<DTERRF1, 0U>;
                using Value1 = FieldValue<DTERRF1, 1U>;
            };

            struct DTERRF2 : public RegisterField<STS, 7, 1, ReadMode>
            {
                using Value0 = FieldValue<DTERRF2, 0U>;
                using Value1 = FieldValue<DTERRF2, 1U>;
            };

            struct DTERRF3 : public RegisterField<STS, 11, 1, ReadMode>
            {
                using Value0 = FieldValue<DTERRF3, 0U>;
                using Value1 = FieldValue<DTERRF3, 1U>;
            };

            struct DTERRF4 : public RegisterField<STS, 15, 1, ReadMode>
            {
                using Value0 = FieldValue<DTERRF4, 0U>;
                using Value1 = FieldValue<DTERRF4, 1U>;
            };

            struct DTERRF5 : public RegisterField<STS, 19, 1, ReadMode>
            {
                using Value0 = FieldValue<DTERRF5, 0U>;
                using Value1 = FieldValue<DTERRF5, 1U>;
            };

            struct DTERRF6 : public RegisterField<STS, 23, 1, ReadMode>
            {
                using Value0 = FieldValue<DTERRF6, 0U>;
                using Value1 = FieldValue<DTERRF6, 1U>;
            };

            struct DTERRF7 : public RegisterField<STS, 27, 1, ReadMode>
            {
                using Value0 = FieldValue<DTERRF7, 0U>;
                using Value1 = FieldValue<DTERRF7, 1U>;
            };

        };

        struct CLR : public Register<0x40020404, 32, ReadWriteMode>
        {
            struct GFC1 : public RegisterField<CLR, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GFC1, 0U>;
                using Value1 = FieldValue<GFC1, 1U>;
            };

            struct GFC2 : public RegisterField<CLR, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GFC2, 0U>;
                using Value1 = FieldValue<GFC2, 1U>;
            };

            struct GFC3 : public RegisterField<CLR, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GFC3, 0U>;
                using Value1 = FieldValue<GFC3, 1U>;
            };

            struct GFC4 : public RegisterField<CLR, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GFC4, 0U>;
                using Value1 = FieldValue<GFC4, 1U>;
            };

            struct GFC5 : public RegisterField<CLR, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GFC5, 0U>;
                using Value1 = FieldValue<GFC5, 1U>;
            };

            struct GFC6 : public RegisterField<CLR, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GFC6, 0U>;
                using Value1 = FieldValue<GFC6, 1U>;
            };

            struct GFC7 : public RegisterField<CLR, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GFC7, 0U>;
                using Value1 = FieldValue<GFC7, 1U>;
            };

            struct FDTFC1 : public RegisterField<CLR, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTFC1, 0U>;
                using Value1 = FieldValue<FDTFC1, 1U>;
            };

            struct FDTFC2 : public RegisterField<CLR, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTFC2, 0U>;
                using Value1 = FieldValue<FDTFC2, 1U>;
            };

            struct FDTFC3 : public RegisterField<CLR, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTFC3, 0U>;
                using Value1 = FieldValue<FDTFC3, 1U>;
            };

            struct FDTFC4 : public RegisterField<CLR, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTFC4, 0U>;
                using Value1 = FieldValue<FDTFC4, 1U>;
            };

            struct FDTFC5 : public RegisterField<CLR, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTFC5, 0U>;
                using Value1 = FieldValue<FDTFC5, 1U>;
            };

            struct FDTFC6 : public RegisterField<CLR, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTFC6, 0U>;
                using Value1 = FieldValue<FDTFC6, 1U>;
            };

            struct FDTFC7 : public RegisterField<CLR, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTFC7, 0U>;
                using Value1 = FieldValue<FDTFC7, 1U>;
            };

            struct HDTFC1 : public RegisterField<CLR, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTFC1, 0U>;
                using Value1 = FieldValue<HDTFC1, 1U>;
            };

            struct HDTFC2 : public RegisterField<CLR, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTFC2, 0U>;
                using Value1 = FieldValue<HDTFC2, 1U>;
            };

            struct HDTFC3 : public RegisterField<CLR, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTFC3, 0U>;
                using Value1 = FieldValue<HDTFC3, 1U>;
            };

            struct HDTFC4 : public RegisterField<CLR, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTFC4, 0U>;
                using Value1 = FieldValue<HDTFC4, 1U>;
            };

            struct HDTFC5 : public RegisterField<CLR, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTFC5, 0U>;
                using Value1 = FieldValue<HDTFC5, 1U>;
            };

            struct HDTFC6 : public RegisterField<CLR, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTFC6, 0U>;
                using Value1 = FieldValue<HDTFC6, 1U>;
            };

            struct HDTFC7 : public RegisterField<CLR, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTFC7, 0U>;
                using Value1 = FieldValue<HDTFC7, 1U>;
            };

            struct DTERRFC1 : public RegisterField<CLR, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRFC1, 0U>;
                using Value1 = FieldValue<DTERRFC1, 1U>;
            };

            struct DTERRFC2 : public RegisterField<CLR, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRFC2, 0U>;
                using Value1 = FieldValue<DTERRFC2, 1U>;
            };

            struct DTERRFC3 : public RegisterField<CLR, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRFC3, 0U>;
                using Value1 = FieldValue<DTERRFC3, 1U>;
            };

            struct DTERRFC4 : public RegisterField<CLR, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRFC4, 0U>;
                using Value1 = FieldValue<DTERRFC4, 1U>;
            };

            struct DTERRFC5 : public RegisterField<CLR, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRFC5, 0U>;
                using Value1 = FieldValue<DTERRFC5, 1U>;
            };

            struct DTERRFC6 : public RegisterField<CLR, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRFC6, 0U>;
                using Value1 = FieldValue<DTERRFC6, 1U>;
            };

            struct DTERRFC7 : public RegisterField<CLR, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRFC7, 0U>;
                using Value1 = FieldValue<DTERRFC7, 1U>;
            };

        };

        struct C1CTRL : public Register<0x40020408, 32, ReadWriteMode>
        {
            struct CHEN : public RegisterField<C1CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CHEN, 0U>;
                using Value1 = FieldValue<CHEN, 1U>;
            };

            struct FDTIEN : public RegisterField<C1CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTIEN, 0U>;
                using Value1 = FieldValue<FDTIEN, 1U>;
            };

            struct HDTIEN : public RegisterField<C1CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTIEN, 0U>;
                using Value1 = FieldValue<HDTIEN, 1U>;
            };

            struct DTERRIEN : public RegisterField<C1CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRIEN, 0U>;
                using Value1 = FieldValue<DTERRIEN, 1U>;
            };

            struct DTD : public RegisterField<C1CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTD, 0U>;
                using Value1 = FieldValue<DTD, 1U>;
            };

            struct LM : public RegisterField<C1CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LM, 0U>;
                using Value1 = FieldValue<LM, 1U>;
            };

            struct PINCM : public RegisterField<C1CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PINCM, 0U>;
                using Value1 = FieldValue<PINCM, 1U>;
            };

            struct MINCM : public RegisterField<C1CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MINCM, 0U>;
                using Value1 = FieldValue<MINCM, 1U>;
            };

            struct PWIDTH : public RegisterField<C1CTRL, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PWIDTH, 0U>;
                using Value1 = FieldValue<PWIDTH, 1U>;
                using Value2 = FieldValue<PWIDTH, 2U>;
                using Value3 = FieldValue<PWIDTH, 3U>;
            };

            struct MWIDTH : public RegisterField<C1CTRL, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<MWIDTH, 0U>;
                using Value1 = FieldValue<MWIDTH, 1U>;
                using Value2 = FieldValue<MWIDTH, 2U>;
                using Value3 = FieldValue<MWIDTH, 3U>;
            };

            struct CHPL : public RegisterField<C1CTRL, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CHPL, 0U>;
                using Value1 = FieldValue<CHPL, 1U>;
                using Value2 = FieldValue<CHPL, 2U>;
                using Value3 = FieldValue<CHPL, 3U>;
            };

            struct M2M : public RegisterField<C1CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<M2M, 0U>;
                using Value1 = FieldValue<M2M, 1U>;
            };

        };

        struct C1DTCNT : public Register<0x4002040C, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<C1DTCNT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C1PADDR : public Register<0x40020410, 32, ReadWriteMode>
        {
            struct PADDR : public RegisterField<C1PADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C1MADDR : public Register<0x40020414, 32, ReadWriteMode>
        {
            struct MADDR : public RegisterField<C1MADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C2CTRL : public Register<0x4002041C, 32, ReadWriteMode>
        {
            struct CHEN : public RegisterField<C2CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CHEN, 0U>;
                using Value1 = FieldValue<CHEN, 1U>;
            };

            struct FDTIEN : public RegisterField<C2CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTIEN, 0U>;
                using Value1 = FieldValue<FDTIEN, 1U>;
            };

            struct HDTIEN : public RegisterField<C2CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTIEN, 0U>;
                using Value1 = FieldValue<HDTIEN, 1U>;
            };

            struct DTERRIEN : public RegisterField<C2CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRIEN, 0U>;
                using Value1 = FieldValue<DTERRIEN, 1U>;
            };

            struct DTD : public RegisterField<C2CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTD, 0U>;
                using Value1 = FieldValue<DTD, 1U>;
            };

            struct LM : public RegisterField<C2CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LM, 0U>;
                using Value1 = FieldValue<LM, 1U>;
            };

            struct PINCM : public RegisterField<C2CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PINCM, 0U>;
                using Value1 = FieldValue<PINCM, 1U>;
            };

            struct MINCM : public RegisterField<C2CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MINCM, 0U>;
                using Value1 = FieldValue<MINCM, 1U>;
            };

            struct PWIDTH : public RegisterField<C2CTRL, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PWIDTH, 0U>;
                using Value1 = FieldValue<PWIDTH, 1U>;
                using Value2 = FieldValue<PWIDTH, 2U>;
                using Value3 = FieldValue<PWIDTH, 3U>;
            };

            struct MWIDTH : public RegisterField<C2CTRL, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<MWIDTH, 0U>;
                using Value1 = FieldValue<MWIDTH, 1U>;
                using Value2 = FieldValue<MWIDTH, 2U>;
                using Value3 = FieldValue<MWIDTH, 3U>;
            };

            struct CHPL : public RegisterField<C2CTRL, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CHPL, 0U>;
                using Value1 = FieldValue<CHPL, 1U>;
                using Value2 = FieldValue<CHPL, 2U>;
                using Value3 = FieldValue<CHPL, 3U>;
            };

            struct M2M : public RegisterField<C2CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<M2M, 0U>;
                using Value1 = FieldValue<M2M, 1U>;
            };

        };

        struct C2DTCNT : public Register<0x40020420, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<C2DTCNT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C2PADDR : public Register<0x40020424, 32, ReadWriteMode>
        {
            struct PADDR : public RegisterField<C2PADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C2MADDR : public Register<0x40020428, 32, ReadWriteMode>
        {
            struct MADDR : public RegisterField<C2MADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C3CTRL : public Register<0x40020430, 32, ReadWriteMode>
        {
            struct CHEN : public RegisterField<C3CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CHEN, 0U>;
                using Value1 = FieldValue<CHEN, 1U>;
            };

            struct FDTIEN : public RegisterField<C3CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTIEN, 0U>;
                using Value1 = FieldValue<FDTIEN, 1U>;
            };

            struct HDTIEN : public RegisterField<C3CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTIEN, 0U>;
                using Value1 = FieldValue<HDTIEN, 1U>;
            };

            struct DTERRIEN : public RegisterField<C3CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRIEN, 0U>;
                using Value1 = FieldValue<DTERRIEN, 1U>;
            };

            struct DTD : public RegisterField<C3CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTD, 0U>;
                using Value1 = FieldValue<DTD, 1U>;
            };

            struct LM : public RegisterField<C3CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LM, 0U>;
                using Value1 = FieldValue<LM, 1U>;
            };

            struct PINCM : public RegisterField<C3CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PINCM, 0U>;
                using Value1 = FieldValue<PINCM, 1U>;
            };

            struct MINCM : public RegisterField<C3CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MINCM, 0U>;
                using Value1 = FieldValue<MINCM, 1U>;
            };

            struct PWIDTH : public RegisterField<C3CTRL, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PWIDTH, 0U>;
                using Value1 = FieldValue<PWIDTH, 1U>;
                using Value2 = FieldValue<PWIDTH, 2U>;
                using Value3 = FieldValue<PWIDTH, 3U>;
            };

            struct MWIDTH : public RegisterField<C3CTRL, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<MWIDTH, 0U>;
                using Value1 = FieldValue<MWIDTH, 1U>;
                using Value2 = FieldValue<MWIDTH, 2U>;
                using Value3 = FieldValue<MWIDTH, 3U>;
            };

            struct CHPL : public RegisterField<C3CTRL, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CHPL, 0U>;
                using Value1 = FieldValue<CHPL, 1U>;
                using Value2 = FieldValue<CHPL, 2U>;
                using Value3 = FieldValue<CHPL, 3U>;
            };

            struct M2M : public RegisterField<C3CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<M2M, 0U>;
                using Value1 = FieldValue<M2M, 1U>;
            };

        };

        struct C3DTCNT : public Register<0x40020434, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<C3DTCNT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C3PADDR : public Register<0x40020438, 32, ReadWriteMode>
        {
            struct PADDR : public RegisterField<C3PADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C3MADDR : public Register<0x4002043C, 32, ReadWriteMode>
        {
            struct MADDR : public RegisterField<C3MADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C4CTRL : public Register<0x40020444, 32, ReadWriteMode>
        {
            struct CHEN : public RegisterField<C4CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CHEN, 0U>;
                using Value1 = FieldValue<CHEN, 1U>;
            };

            struct FDTIEN : public RegisterField<C4CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTIEN, 0U>;
                using Value1 = FieldValue<FDTIEN, 1U>;
            };

            struct HDTIEN : public RegisterField<C4CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTIEN, 0U>;
                using Value1 = FieldValue<HDTIEN, 1U>;
            };

            struct DTERRIEN : public RegisterField<C4CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRIEN, 0U>;
                using Value1 = FieldValue<DTERRIEN, 1U>;
            };

            struct DTD : public RegisterField<C4CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTD, 0U>;
                using Value1 = FieldValue<DTD, 1U>;
            };

            struct LM : public RegisterField<C4CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LM, 0U>;
                using Value1 = FieldValue<LM, 1U>;
            };

            struct PINCM : public RegisterField<C4CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PINCM, 0U>;
                using Value1 = FieldValue<PINCM, 1U>;
            };

            struct MINCM : public RegisterField<C4CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MINCM, 0U>;
                using Value1 = FieldValue<MINCM, 1U>;
            };

            struct PWIDTH : public RegisterField<C4CTRL, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PWIDTH, 0U>;
                using Value1 = FieldValue<PWIDTH, 1U>;
                using Value2 = FieldValue<PWIDTH, 2U>;
                using Value3 = FieldValue<PWIDTH, 3U>;
            };

            struct MWIDTH : public RegisterField<C4CTRL, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<MWIDTH, 0U>;
                using Value1 = FieldValue<MWIDTH, 1U>;
                using Value2 = FieldValue<MWIDTH, 2U>;
                using Value3 = FieldValue<MWIDTH, 3U>;
            };

            struct CHPL : public RegisterField<C4CTRL, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CHPL, 0U>;
                using Value1 = FieldValue<CHPL, 1U>;
                using Value2 = FieldValue<CHPL, 2U>;
                using Value3 = FieldValue<CHPL, 3U>;
            };

            struct M2M : public RegisterField<C4CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<M2M, 0U>;
                using Value1 = FieldValue<M2M, 1U>;
            };

        };

        struct C4DTCNT : public Register<0x40020448, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<C4DTCNT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C4PADDR : public Register<0x4002044C, 32, ReadWriteMode>
        {
            struct PADDR : public RegisterField<C4PADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C4MADDR : public Register<0x40020450, 32, ReadWriteMode>
        {
            struct MADDR : public RegisterField<C4MADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C5CTRL : public Register<0x40020458, 32, ReadWriteMode>
        {
            struct CHEN : public RegisterField<C5CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CHEN, 0U>;
                using Value1 = FieldValue<CHEN, 1U>;
            };

            struct FDTIEN : public RegisterField<C5CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTIEN, 0U>;
                using Value1 = FieldValue<FDTIEN, 1U>;
            };

            struct HDTIEN : public RegisterField<C5CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTIEN, 0U>;
                using Value1 = FieldValue<HDTIEN, 1U>;
            };

            struct DTERRIEN : public RegisterField<C5CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRIEN, 0U>;
                using Value1 = FieldValue<DTERRIEN, 1U>;
            };

            struct DTD : public RegisterField<C5CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTD, 0U>;
                using Value1 = FieldValue<DTD, 1U>;
            };

            struct LM : public RegisterField<C5CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LM, 0U>;
                using Value1 = FieldValue<LM, 1U>;
            };

            struct PINCM : public RegisterField<C5CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PINCM, 0U>;
                using Value1 = FieldValue<PINCM, 1U>;
            };

            struct MINCM : public RegisterField<C5CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MINCM, 0U>;
                using Value1 = FieldValue<MINCM, 1U>;
            };

            struct PWIDTH : public RegisterField<C5CTRL, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PWIDTH, 0U>;
                using Value1 = FieldValue<PWIDTH, 1U>;
                using Value2 = FieldValue<PWIDTH, 2U>;
                using Value3 = FieldValue<PWIDTH, 3U>;
            };

            struct MWIDTH : public RegisterField<C5CTRL, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<MWIDTH, 0U>;
                using Value1 = FieldValue<MWIDTH, 1U>;
                using Value2 = FieldValue<MWIDTH, 2U>;
                using Value3 = FieldValue<MWIDTH, 3U>;
            };

            struct CHPL : public RegisterField<C5CTRL, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CHPL, 0U>;
                using Value1 = FieldValue<CHPL, 1U>;
                using Value2 = FieldValue<CHPL, 2U>;
                using Value3 = FieldValue<CHPL, 3U>;
            };

            struct M2M : public RegisterField<C5CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<M2M, 0U>;
                using Value1 = FieldValue<M2M, 1U>;
            };

        };

        struct C5DTCNT : public Register<0x4002045C, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<C5DTCNT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C5PADDR : public Register<0x40020460, 32, ReadWriteMode>
        {
            struct PADDR : public RegisterField<C5PADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C5MADDR : public Register<0x40020464, 32, ReadWriteMode>
        {
            struct MADDR : public RegisterField<C5MADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C6CTRL : public Register<0x4002046C, 32, ReadWriteMode>
        {
            struct CHEN : public RegisterField<C6CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CHEN, 0U>;
                using Value1 = FieldValue<CHEN, 1U>;
            };

            struct FDTIEN : public RegisterField<C6CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTIEN, 0U>;
                using Value1 = FieldValue<FDTIEN, 1U>;
            };

            struct HDTIEN : public RegisterField<C6CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTIEN, 0U>;
                using Value1 = FieldValue<HDTIEN, 1U>;
            };

            struct DTERRIEN : public RegisterField<C6CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRIEN, 0U>;
                using Value1 = FieldValue<DTERRIEN, 1U>;
            };

            struct DTD : public RegisterField<C6CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTD, 0U>;
                using Value1 = FieldValue<DTD, 1U>;
            };

            struct LM : public RegisterField<C6CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LM, 0U>;
                using Value1 = FieldValue<LM, 1U>;
            };

            struct PINCM : public RegisterField<C6CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PINCM, 0U>;
                using Value1 = FieldValue<PINCM, 1U>;
            };

            struct MINCM : public RegisterField<C6CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MINCM, 0U>;
                using Value1 = FieldValue<MINCM, 1U>;
            };

            struct PWIDTH : public RegisterField<C6CTRL, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PWIDTH, 0U>;
                using Value1 = FieldValue<PWIDTH, 1U>;
                using Value2 = FieldValue<PWIDTH, 2U>;
                using Value3 = FieldValue<PWIDTH, 3U>;
            };

            struct MWIDTH : public RegisterField<C6CTRL, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<MWIDTH, 0U>;
                using Value1 = FieldValue<MWIDTH, 1U>;
                using Value2 = FieldValue<MWIDTH, 2U>;
                using Value3 = FieldValue<MWIDTH, 3U>;
            };

            struct CHPL : public RegisterField<C6CTRL, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CHPL, 0U>;
                using Value1 = FieldValue<CHPL, 1U>;
                using Value2 = FieldValue<CHPL, 2U>;
                using Value3 = FieldValue<CHPL, 3U>;
            };

            struct M2M : public RegisterField<C6CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<M2M, 0U>;
                using Value1 = FieldValue<M2M, 1U>;
            };

        };

        struct C6DTCNT : public Register<0x40020470, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<C6DTCNT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C6PADDR : public Register<0x40020474, 32, ReadWriteMode>
        {
            struct PADDR : public RegisterField<C6PADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C6MADDR : public Register<0x40020478, 32, ReadWriteMode>
        {
            struct MADDR : public RegisterField<C6MADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C7CTRL : public Register<0x40020480, 32, ReadWriteMode>
        {
            struct CHEN : public RegisterField<C7CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CHEN, 0U>;
                using Value1 = FieldValue<CHEN, 1U>;
            };

            struct FDTIEN : public RegisterField<C7CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FDTIEN, 0U>;
                using Value1 = FieldValue<FDTIEN, 1U>;
            };

            struct HDTIEN : public RegisterField<C7CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDTIEN, 0U>;
                using Value1 = FieldValue<HDTIEN, 1U>;
            };

            struct DTERRIEN : public RegisterField<C7CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTERRIEN, 0U>;
                using Value1 = FieldValue<DTERRIEN, 1U>;
            };

            struct DTD : public RegisterField<C7CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DTD, 0U>;
                using Value1 = FieldValue<DTD, 1U>;
            };

            struct LM : public RegisterField<C7CTRL, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LM, 0U>;
                using Value1 = FieldValue<LM, 1U>;
            };

            struct PINCM : public RegisterField<C7CTRL, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PINCM, 0U>;
                using Value1 = FieldValue<PINCM, 1U>;
            };

            struct MINCM : public RegisterField<C7CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<MINCM, 0U>;
                using Value1 = FieldValue<MINCM, 1U>;
            };

            struct PWIDTH : public RegisterField<C7CTRL, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PWIDTH, 0U>;
                using Value1 = FieldValue<PWIDTH, 1U>;
                using Value2 = FieldValue<PWIDTH, 2U>;
                using Value3 = FieldValue<PWIDTH, 3U>;
            };

            struct MWIDTH : public RegisterField<C7CTRL, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<MWIDTH, 0U>;
                using Value1 = FieldValue<MWIDTH, 1U>;
                using Value2 = FieldValue<MWIDTH, 2U>;
                using Value3 = FieldValue<MWIDTH, 3U>;
            };

            struct CHPL : public RegisterField<C7CTRL, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<CHPL, 0U>;
                using Value1 = FieldValue<CHPL, 1U>;
                using Value2 = FieldValue<CHPL, 2U>;
                using Value3 = FieldValue<CHPL, 3U>;
            };

            struct M2M : public RegisterField<C7CTRL, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<M2M, 0U>;
                using Value1 = FieldValue<M2M, 1U>;
            };

        };

        struct C7DTCNT : public Register<0x40020484, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<C7DTCNT, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C7PADDR : public Register<0x40020488, 32, ReadWriteMode>
        {
            struct PADDR : public RegisterField<C7PADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct C7MADDR : public Register<0x4002048C, 32, ReadWriteMode>
        {
            struct MADDR : public RegisterField<C7MADDR, 0, 32, ReadWriteMode>
            {
            };

        };

        struct DMA_SRC_SEL0 : public Register<0x400204A0, 32, ReadWriteMode>
        {
            struct CH1_SRC : public RegisterField<DMA_SRC_SEL0, 0, 8, ReadWriteMode>
            {
            };

            struct CH2_SRC : public RegisterField<DMA_SRC_SEL0, 8, 8, ReadWriteMode>
            {
            };

            struct CH3_SRC : public RegisterField<DMA_SRC_SEL0, 16, 8, ReadWriteMode>
            {
            };

            struct CH4_SRC : public RegisterField<DMA_SRC_SEL0, 24, 8, ReadWriteMode>
            {
            };

        };

        struct DMA_SRC_SEL1 : public Register<0x400204A4, 32, ReadWriteMode>
        {
            struct CH5_SRC : public RegisterField<DMA_SRC_SEL1, 0, 8, ReadWriteMode>
            {
            };

            struct CH6_SRC : public RegisterField<DMA_SRC_SEL1, 8, 8, ReadWriteMode>
            {
            };

            struct CH7_SRC : public RegisterField<DMA_SRC_SEL1, 16, 8, ReadWriteMode>
            {
            };

            struct DMA_FLEX_EN : public RegisterField<DMA_SRC_SEL1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMA_FLEX_EN, 0U>;
                using Value1 = FieldValue<DMA_FLEX_EN, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(DMA2REGISTERS_HPP)
