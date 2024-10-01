/*******************************************************************************
* Filename      : tmr6registers.hpp
*
* Details       : Basic timer. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(TMR6REGISTERS_HPP)
#define TMR6REGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct TMR6
    {
        struct CTRL1 : public Register<0x40001000, 32, ReadWriteMode>
        {
            struct PRBEN : public RegisterField<CTRL1, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PRBEN, 0U>;
                using Value1 = FieldValue<PRBEN, 1U>;
            };

            struct OCMEN : public RegisterField<CTRL1, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OCMEN, 0U>;
                using Value1 = FieldValue<OCMEN, 1U>;
            };

            struct OVFS : public RegisterField<CTRL1, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFS, 0U>;
                using Value1 = FieldValue<OVFS, 1U>;
            };

            struct OVFEN : public RegisterField<CTRL1, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFEN, 0U>;
                using Value1 = FieldValue<OVFEN, 1U>;
            };

            struct TMREN : public RegisterField<CTRL1, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMREN, 0U>;
                using Value1 = FieldValue<TMREN, 1U>;
            };

        };

        struct CTRL2 : public Register<0x40001004, 32, ReadWriteMode>
        {
            struct PTOS : public RegisterField<CTRL2, 4, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<PTOS, 0U>;
                using Value1 = FieldValue<PTOS, 1U>;
                using Value2 = FieldValue<PTOS, 2U>;
                using Value3 = FieldValue<PTOS, 3U>;
                using Value4 = FieldValue<PTOS, 4U>;
                using Value5 = FieldValue<PTOS, 5U>;
                using Value6 = FieldValue<PTOS, 6U>;
                using Value7 = FieldValue<PTOS, 7U>;
            };

        };

        struct IDEN : public Register<0x4000100C, 32, ReadWriteMode>
        {
            struct OVFDEN : public RegisterField<IDEN, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFDEN, 0U>;
                using Value1 = FieldValue<OVFDEN, 1U>;
            };

            struct OVFIEN : public RegisterField<IDEN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFIEN, 0U>;
                using Value1 = FieldValue<OVFIEN, 1U>;
            };

        };

        struct ISTS : public Register<0x40001010, 32, ReadWriteMode>
        {
            struct OVFIF : public RegisterField<ISTS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFIF, 0U>;
                using Value1 = FieldValue<OVFIF, 1U>;
            };

        };

        struct SWEVT : public Register<0x40001014, 32, ReadWriteMode>
        {
            struct OVFSWTR : public RegisterField<SWEVT, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<OVFSWTR, 0U>;
                using Value1 = FieldValue<OVFSWTR, 1U>;
            };

        };

        struct CVAL : public Register<0x40001024, 32, ReadWriteMode>
        {
            struct CVALField : public RegisterField<CVAL, 0, 16, ReadWriteMode>
            {
            };

        };

        struct DIV : public Register<0x40001028, 32, ReadWriteMode>
        {
            struct DIVField : public RegisterField<DIV, 0, 16, ReadWriteMode>
            {
            };

        };

        struct PR : public Register<0x4000102C, 32, ReadWriteMode>
        {
            struct PRField : public RegisterField<PR, 0, 16, ReadWriteMode>
            {
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(TMR6REGISTERS_HPP)
