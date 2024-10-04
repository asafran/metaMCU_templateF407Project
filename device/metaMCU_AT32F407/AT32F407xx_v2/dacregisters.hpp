/*******************************************************************************
* Filename      : dacregisters.hpp
*
* Details       : Digital to analog converter. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(DACREGISTERS_HPP)
#define DACREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct DAC
    {
        struct CTRL : public Register<0x40007400, 32, ReadWriteMode>
        {
            struct D1EN : public RegisterField<CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<D1EN, 0U>;
                using Value1 = FieldValue<D1EN, 1U>;
            };

            struct D1OBDIS : public RegisterField<CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<D1OBDIS, 0U>;
                using Value1 = FieldValue<D1OBDIS, 1U>;
            };

            struct D1TRGEN : public RegisterField<CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<D1TRGEN, 0U>;
                using Value1 = FieldValue<D1TRGEN, 1U>;
            };

            struct D1TRGSEL : public RegisterField<CTRL, 3, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<D1TRGSEL, 0U>;
                using Value1 = FieldValue<D1TRGSEL, 1U>;
                using Value2 = FieldValue<D1TRGSEL, 2U>;
                using Value3 = FieldValue<D1TRGSEL, 3U>;
                using Value4 = FieldValue<D1TRGSEL, 4U>;
                using Value5 = FieldValue<D1TRGSEL, 5U>;
                using Value6 = FieldValue<D1TRGSEL, 6U>;
                using Value7 = FieldValue<D1TRGSEL, 7U>;
            };

            struct D1NM : public RegisterField<CTRL, 6, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<D1NM, 0U>;
                using Value1 = FieldValue<D1NM, 1U>;
                using Value2 = FieldValue<D1NM, 2U>;
                using Value3 = FieldValue<D1NM, 3U>;
            };

            struct D1NBSEL : public RegisterField<CTRL, 8, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<D1NBSEL, 0U>;
                using Value1 = FieldValue<D1NBSEL, 1U>;
                using Value2 = FieldValue<D1NBSEL, 2U>;
                using Value3 = FieldValue<D1NBSEL, 3U>;
                using Value4 = FieldValue<D1NBSEL, 4U>;
                using Value5 = FieldValue<D1NBSEL, 5U>;
                using Value6 = FieldValue<D1NBSEL, 6U>;
                using Value7 = FieldValue<D1NBSEL, 7U>;
                using Value8 = FieldValue<D1NBSEL, 8U>;
                using Value9 = FieldValue<D1NBSEL, 9U>;
                using Value10 = FieldValue<D1NBSEL, 10U>;
                using Value11 = FieldValue<D1NBSEL, 11U>;
                using Value12 = FieldValue<D1NBSEL, 12U>;
                using Value13 = FieldValue<D1NBSEL, 13U>;
                using Value14 = FieldValue<D1NBSEL, 14U>;
                using Value15 = FieldValue<D1NBSEL, 15U>;
            };

            struct D1DMAEN : public RegisterField<CTRL, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<D1DMAEN, 0U>;
                using Value1 = FieldValue<D1DMAEN, 1U>;
            };

            struct D2EN : public RegisterField<CTRL, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<D2EN, 0U>;
                using Value1 = FieldValue<D2EN, 1U>;
            };

            struct D2OBDIS : public RegisterField<CTRL, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<D2OBDIS, 0U>;
                using Value1 = FieldValue<D2OBDIS, 1U>;
            };

            struct D2TRGEN : public RegisterField<CTRL, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<D2TRGEN, 0U>;
                using Value1 = FieldValue<D2TRGEN, 1U>;
            };

            struct D2TRGSEL : public RegisterField<CTRL, 19, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<D2TRGSEL, 0U>;
                using Value1 = FieldValue<D2TRGSEL, 1U>;
                using Value2 = FieldValue<D2TRGSEL, 2U>;
                using Value3 = FieldValue<D2TRGSEL, 3U>;
                using Value4 = FieldValue<D2TRGSEL, 4U>;
                using Value5 = FieldValue<D2TRGSEL, 5U>;
                using Value6 = FieldValue<D2TRGSEL, 6U>;
                using Value7 = FieldValue<D2TRGSEL, 7U>;
            };

            struct D2NM : public RegisterField<CTRL, 22, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<D2NM, 0U>;
                using Value1 = FieldValue<D2NM, 1U>;
                using Value2 = FieldValue<D2NM, 2U>;
                using Value3 = FieldValue<D2NM, 3U>;
            };

            struct D2NBSEL : public RegisterField<CTRL, 24, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<D2NBSEL, 0U>;
                using Value1 = FieldValue<D2NBSEL, 1U>;
                using Value2 = FieldValue<D2NBSEL, 2U>;
                using Value3 = FieldValue<D2NBSEL, 3U>;
                using Value4 = FieldValue<D2NBSEL, 4U>;
                using Value5 = FieldValue<D2NBSEL, 5U>;
                using Value6 = FieldValue<D2NBSEL, 6U>;
                using Value7 = FieldValue<D2NBSEL, 7U>;
                using Value8 = FieldValue<D2NBSEL, 8U>;
                using Value9 = FieldValue<D2NBSEL, 9U>;
                using Value10 = FieldValue<D2NBSEL, 10U>;
                using Value11 = FieldValue<D2NBSEL, 11U>;
                using Value12 = FieldValue<D2NBSEL, 12U>;
                using Value13 = FieldValue<D2NBSEL, 13U>;
                using Value14 = FieldValue<D2NBSEL, 14U>;
                using Value15 = FieldValue<D2NBSEL, 15U>;
            };

            struct D2DMAEN : public RegisterField<CTRL, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<D2DMAEN, 0U>;
                using Value1 = FieldValue<D2DMAEN, 1U>;
            };

        };

        struct SWTRG : public Register<0x40007404, 32, WriteMode>
        {
            struct D1SWTRG : public RegisterField<SWTRG, 0, 1, WriteMode>
            {
                using Value0 = FieldValue<D1SWTRG, 0U>;
                using Value1 = FieldValue<D1SWTRG, 1U>;
            };

            struct D2SWTRG : public RegisterField<SWTRG, 1, 1, WriteMode>
            {
                using Value0 = FieldValue<D2SWTRG, 0U>;
                using Value1 = FieldValue<D2SWTRG, 1U>;
            };

        };

        struct D1DTH12R : public Register<0x40007408, 32, ReadWriteMode>
        {
            struct D1DT12R : public RegisterField<D1DTH12R, 0, 12, ReadWriteMode>
            {
            };

        };

        struct D1DTH12L : public Register<0x4000740C, 32, ReadWriteMode>
        {
            struct D1DT12L : public RegisterField<D1DTH12L, 4, 12, ReadWriteMode>
            {
            };

        };

        struct D1DTH8R : public Register<0x40007410, 32, ReadWriteMode>
        {
            struct D1DT8R : public RegisterField<D1DTH8R, 0, 8, ReadWriteMode>
            {
            };

        };

        struct D2DTH12R : public Register<0x40007414, 32, ReadWriteMode>
        {
            struct D2DT12R : public RegisterField<D2DTH12R, 0, 12, ReadWriteMode>
            {
            };

        };

        struct D2DTH12L : public Register<0x40007418, 32, ReadWriteMode>
        {
            struct D2DT12L : public RegisterField<D2DTH12L, 4, 12, ReadWriteMode>
            {
            };

        };

        struct D2DTH8R : public Register<0x4000741C, 32, ReadWriteMode>
        {
            struct D2DT8R : public RegisterField<D2DTH8R, 0, 8, ReadWriteMode>
            {
            };

        };

        struct DDTH12R : public Register<0x40007420, 32, ReadWriteMode>
        {
            struct DD1DT12R : public RegisterField<DDTH12R, 0, 12, ReadWriteMode>
            {
            };

            struct DD2DT12R : public RegisterField<DDTH12R, 16, 12, ReadWriteMode>
            {
            };

        };

        struct DDTH12L : public Register<0x40007424, 32, ReadWriteMode>
        {
            struct DD1DT12L : public RegisterField<DDTH12L, 4, 12, ReadWriteMode>
            {
            };

            struct DD2DT12L : public RegisterField<DDTH12L, 20, 12, ReadWriteMode>
            {
            };

        };

        struct DDTH8R : public Register<0x40007428, 32, ReadWriteMode>
        {
            struct DD1DT8R : public RegisterField<DDTH8R, 0, 8, ReadWriteMode>
            {
            };

            struct DD2DT8R : public RegisterField<DDTH8R, 8, 8, ReadWriteMode>
            {
            };

        };

        struct D1ODT : public Register<0x4000742C, 32, ReadMode>
        {
            struct D1ODTField : public RegisterField<D1ODT, 0, 12, ReadMode>
            {
            };

        };

        struct D2ODT : public Register<0x40007430, 32, ReadMode>
        {
            struct D2ODTField : public RegisterField<D2ODT, 0, 12, ReadMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(DACREGISTERS_HPP)
