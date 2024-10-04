/*******************************************************************************
* Filename      : pwcregisters.hpp
*
* Details       : Power control. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(PWCREGISTERS_HPP)
#define PWCREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct PWC
    {
        struct CTRL : public Register<0x40007000, 32, ReadWriteMode>
        {
            struct VRSEL : public RegisterField<CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<VRSEL, 0U>;
                using Value1 = FieldValue<VRSEL, 1U>;
            };

            struct LPSEL : public RegisterField<CTRL, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LPSEL, 0U>;
                using Value1 = FieldValue<LPSEL, 1U>;
            };

            struct CLSWEF : public RegisterField<CTRL, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLSWEF, 0U>;
                using Value1 = FieldValue<CLSWEF, 1U>;
            };

            struct CLSEF : public RegisterField<CTRL, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLSEF, 0U>;
                using Value1 = FieldValue<CLSEF, 1U>;
            };

            struct PVMEN : public RegisterField<CTRL, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PVMEN, 0U>;
                using Value1 = FieldValue<PVMEN, 1U>;
            };

            struct PVMSEL : public RegisterField<CTRL, 5, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<PVMSEL, 0U>;
                using Value1 = FieldValue<PVMSEL, 1U>;
                using Value2 = FieldValue<PVMSEL, 2U>;
                using Value3 = FieldValue<PVMSEL, 3U>;
                using Value4 = FieldValue<PVMSEL, 4U>;
                using Value5 = FieldValue<PVMSEL, 5U>;
                using Value6 = FieldValue<PVMSEL, 6U>;
                using Value7 = FieldValue<PVMSEL, 7U>;
            };

            struct BPWEN : public RegisterField<CTRL, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BPWEN, 0U>;
                using Value1 = FieldValue<BPWEN, 1U>;
            };

        };

        struct CTRLSTS : public Register<0x40007004, 32, ReadWriteMode>
        {
            struct SWEF : public RegisterField<CTRLSTS, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<SWEF, 0U>;
                using Value1 = FieldValue<SWEF, 1U>;
            };

            struct SEF : public RegisterField<CTRLSTS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<SEF, 0U>;
                using Value1 = FieldValue<SEF, 1U>;
            };

            struct PVMOF : public RegisterField<CTRLSTS, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<PVMOF, 0U>;
                using Value1 = FieldValue<PVMOF, 1U>;
            };

            struct SWPEN : public RegisterField<CTRLSTS, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWPEN, 0U>;
                using Value1 = FieldValue<SWPEN, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(PWCREGISTERS_HPP)
