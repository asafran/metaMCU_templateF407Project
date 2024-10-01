/*******************************************************************************
* Filename      : crcregisters.hpp
*
* Details       : CRC calculation unit. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(CRCREGISTERS_HPP)
#define CRCREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct CRC
    {
        struct DT : public Register<0x40023000, 32, ReadWriteMode>
        {
            struct DTField : public RegisterField<DT, 0, 32, ReadWriteMode>
            {
            };

        };

        struct CDT : public Register<0x40023004, 32, ReadWriteMode>
        {
            struct CDTField : public RegisterField<CDT, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CDTField, 0U>;
                using Value1 = FieldValue<CDTField, 1U>;
            };

        };

        struct CTRL : public Register<0x40023008, 32, ReadWriteMode>
        {
            struct RST : public RegisterField<CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RST, 0U>;
                using Value1 = FieldValue<RST, 1U>;
            };

            struct REVID : public RegisterField<CTRL, 5, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<REVID, 0U>;
                using Value1 = FieldValue<REVID, 1U>;
                using Value2 = FieldValue<REVID, 2U>;
                using Value3 = FieldValue<REVID, 3U>;
            };

            struct REVOD : public RegisterField<CTRL, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<REVOD, 0U>;
                using Value1 = FieldValue<REVOD, 1U>;
            };

        };

        struct IDT : public Register<0x40023010, 32, ReadWriteMode>
        {
            struct IDTField : public RegisterField<IDT, 0, 32, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(CRCREGISTERS_HPP)
