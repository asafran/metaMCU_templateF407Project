/*******************************************************************************
* Filename      : accregisters.hpp
*
* Details       : HICK Auto Clock Calibration. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(ACCREGISTERS_HPP)
#define ACCREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct ACC
    {
        struct STS : public Register<0x40015800, 32, ReadWriteMode>
        {
            struct RSLOST : public RegisterField<STS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RSLOST, 0U>;
                using Value1 = FieldValue<RSLOST, 1U>;
            };

            struct CALRDY : public RegisterField<STS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CALRDY, 0U>;
                using Value1 = FieldValue<CALRDY, 1U>;
            };

        };

        struct CTRL1 : public Register<0x40015804, 32, ReadWriteMode>
        {
            struct STEP : public RegisterField<CTRL1, 8, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<STEP, 0U>;
                using Value1 = FieldValue<STEP, 1U>;
                using Value2 = FieldValue<STEP, 2U>;
                using Value3 = FieldValue<STEP, 3U>;
                using Value4 = FieldValue<STEP, 4U>;
                using Value5 = FieldValue<STEP, 5U>;
                using Value6 = FieldValue<STEP, 6U>;
                using Value7 = FieldValue<STEP, 7U>;
                using Value8 = FieldValue<STEP, 8U>;
                using Value9 = FieldValue<STEP, 9U>;
                using Value10 = FieldValue<STEP, 10U>;
                using Value11 = FieldValue<STEP, 11U>;
                using Value12 = FieldValue<STEP, 12U>;
                using Value13 = FieldValue<STEP, 13U>;
                using Value14 = FieldValue<STEP, 14U>;
                using Value15 = FieldValue<STEP, 15U>;
            };

            struct CALRDYIEN : public RegisterField<CTRL1, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CALRDYIEN, 0U>;
                using Value1 = FieldValue<CALRDYIEN, 1U>;
            };

            struct EIEN : public RegisterField<CTRL1, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EIEN, 0U>;
                using Value1 = FieldValue<EIEN, 1U>;
            };

            struct ENTRIM : public RegisterField<CTRL1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ENTRIM, 0U>;
                using Value1 = FieldValue<ENTRIM, 1U>;
            };

            struct CALON : public RegisterField<CTRL1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CALON, 0U>;
                using Value1 = FieldValue<CALON, 1U>;
            };

        };

        struct CTRL2 : public Register<0x40015808, 32, ReadWriteMode>
        {
            struct HICKTWK : public RegisterField<CTRL2, 8, 6, ReadMode>
            {
            };

            struct HICKCAL : public RegisterField<CTRL2, 0, 8, ReadMode>
            {
            };

        };

        struct C1 : public Register<0x4001580C, 32, ReadWriteMode>
        {
            struct C1Field : public RegisterField<C1, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C2 : public Register<0x40015810, 32, ReadWriteMode>
        {
            struct C2Field : public RegisterField<C2, 0, 16, ReadWriteMode>
            {
            };

        };

        struct C3 : public Register<0x40015814, 32, ReadWriteMode>
        {
            struct C3Field : public RegisterField<C3, 0, 16, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(ACCREGISTERS_HPP)
