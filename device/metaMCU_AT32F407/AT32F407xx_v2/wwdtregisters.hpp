/*******************************************************************************
* Filename      : wwdtregisters.hpp
*
* Details       : Window watchdog. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(WWDTREGISTERS_HPP)
#define WWDTREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct WWDT
    {
        struct CTRL : public Register<0x40002C00, 32, ReadWriteMode>
        {
            struct CNT : public RegisterField<CTRL, 0, 7, ReadWriteMode>
            {
            };

            struct WWDTEN : public RegisterField<CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WWDTEN, 0U>;
                using Value1 = FieldValue<WWDTEN, 1U>;
            };

        };

        struct CFG : public Register<0x40002C04, 32, ReadWriteMode>
        {
            struct WIN : public RegisterField<CFG, 0, 7, ReadWriteMode>
            {
            };

            struct DIV : public RegisterField<CFG, 7, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<DIV, 0U>;
                using Value1 = FieldValue<DIV, 1U>;
                using Value2 = FieldValue<DIV, 2U>;
                using Value3 = FieldValue<DIV, 3U>;
            };

            struct RLDIEN : public RegisterField<CFG, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RLDIEN, 0U>;
                using Value1 = FieldValue<RLDIEN, 1U>;
            };

        };

        struct STS : public Register<0x40002C08, 32, ReadWriteMode>
        {
            struct RLDF : public RegisterField<STS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RLDF, 0U>;
                using Value1 = FieldValue<RLDF, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(WWDTREGISTERS_HPP)
