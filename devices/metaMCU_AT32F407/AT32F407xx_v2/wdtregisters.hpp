/*******************************************************************************
* Filename      : wdtregisters.hpp
*
* Details       : Watchdog. This header file is auto-generated for AT32F407xx_v2
*                 device.
*
*
*******************************************************************************/

#if !defined(WDTREGISTERS_HPP)
#define WDTREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct WDT
    {
        struct CMD : public Register<0x40003000, 32, ReadWriteMode>
        {
            struct CMDField : public RegisterField<CMD, 0, 16, ReadWriteMode>
            {
            };

        };

        struct DIV : public Register<0x40003004, 32, ReadWriteMode>
        {
            struct DIVField : public RegisterField<DIV, 0, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<DIVField, 0U>;
                using Value1 = FieldValue<DIVField, 1U>;
                using Value2 = FieldValue<DIVField, 2U>;
                using Value3 = FieldValue<DIVField, 3U>;
                using Value4 = FieldValue<DIVField, 4U>;
                using Value5 = FieldValue<DIVField, 5U>;
                using Value6 = FieldValue<DIVField, 6U>;
                using Value7 = FieldValue<DIVField, 7U>;
            };

        };

        struct RLD : public Register<0x40003008, 32, ReadWriteMode>
        {
            struct RLDField : public RegisterField<RLD, 0, 12, ReadWriteMode>
            {
            };

        };

        struct STS : public Register<0x4000300C, 32, ReadWriteMode>
        {
            struct DIVF : public RegisterField<STS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DIVF, 0U>;
                using Value1 = FieldValue<DIVF, 1U>;
            };

            struct RLDF : public RegisterField<STS, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RLDF, 0U>;
                using Value1 = FieldValue<RLDF, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(WDTREGISTERS_HPP)
