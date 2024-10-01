/*******************************************************************************
* Filename      : gpiobregisters.hpp
*
* Details       : General purpose IO. This header file is auto-generated for
*                 AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(GPIOBREGISTERS_HPP)
#define GPIOBREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct GPIOB
    {
        struct CFGLR : public Register<0x40010C00, 32, ReadWriteMode>
        {
            struct IOMC0 : public RegisterField<CFGLR, 0, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC0, 0U>;
                using Value1 = FieldValue<IOMC0, 1U>;
                using Value2 = FieldValue<IOMC0, 2U>;
                using Value3 = FieldValue<IOMC0, 3U>;
            };

            struct IOFC0 : public RegisterField<CFGLR, 2, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC0, 0U>;
                using Value1 = FieldValue<IOFC0, 1U>;
                using Value2 = FieldValue<IOFC0, 2U>;
                using Value3 = FieldValue<IOFC0, 3U>;
            };

            struct IOMC1 : public RegisterField<CFGLR, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC1, 0U>;
                using Value1 = FieldValue<IOMC1, 1U>;
                using Value2 = FieldValue<IOMC1, 2U>;
                using Value3 = FieldValue<IOMC1, 3U>;
            };

            struct IOFC1 : public RegisterField<CFGLR, 6, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC1, 0U>;
                using Value1 = FieldValue<IOFC1, 1U>;
                using Value2 = FieldValue<IOFC1, 2U>;
                using Value3 = FieldValue<IOFC1, 3U>;
            };

            struct IOMC2 : public RegisterField<CFGLR, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC2, 0U>;
                using Value1 = FieldValue<IOMC2, 1U>;
                using Value2 = FieldValue<IOMC2, 2U>;
                using Value3 = FieldValue<IOMC2, 3U>;
            };

            struct IOFC2 : public RegisterField<CFGLR, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC2, 0U>;
                using Value1 = FieldValue<IOFC2, 1U>;
                using Value2 = FieldValue<IOFC2, 2U>;
                using Value3 = FieldValue<IOFC2, 3U>;
            };

            struct IOMC3 : public RegisterField<CFGLR, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC3, 0U>;
                using Value1 = FieldValue<IOMC3, 1U>;
                using Value2 = FieldValue<IOMC3, 2U>;
                using Value3 = FieldValue<IOMC3, 3U>;
            };

            struct IOFC3 : public RegisterField<CFGLR, 14, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC3, 0U>;
                using Value1 = FieldValue<IOFC3, 1U>;
                using Value2 = FieldValue<IOFC3, 2U>;
                using Value3 = FieldValue<IOFC3, 3U>;
            };

            struct IOMC4 : public RegisterField<CFGLR, 16, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC4, 0U>;
                using Value1 = FieldValue<IOMC4, 1U>;
                using Value2 = FieldValue<IOMC4, 2U>;
                using Value3 = FieldValue<IOMC4, 3U>;
            };

            struct IOFC4 : public RegisterField<CFGLR, 18, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC4, 0U>;
                using Value1 = FieldValue<IOFC4, 1U>;
                using Value2 = FieldValue<IOFC4, 2U>;
                using Value3 = FieldValue<IOFC4, 3U>;
            };

            struct IOMC5 : public RegisterField<CFGLR, 20, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC5, 0U>;
                using Value1 = FieldValue<IOMC5, 1U>;
                using Value2 = FieldValue<IOMC5, 2U>;
                using Value3 = FieldValue<IOMC5, 3U>;
            };

            struct IOFC5 : public RegisterField<CFGLR, 22, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC5, 0U>;
                using Value1 = FieldValue<IOFC5, 1U>;
                using Value2 = FieldValue<IOFC5, 2U>;
                using Value3 = FieldValue<IOFC5, 3U>;
            };

            struct IOMC6 : public RegisterField<CFGLR, 24, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC6, 0U>;
                using Value1 = FieldValue<IOMC6, 1U>;
                using Value2 = FieldValue<IOMC6, 2U>;
                using Value3 = FieldValue<IOMC6, 3U>;
            };

            struct IOFC6 : public RegisterField<CFGLR, 26, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC6, 0U>;
                using Value1 = FieldValue<IOFC6, 1U>;
                using Value2 = FieldValue<IOFC6, 2U>;
                using Value3 = FieldValue<IOFC6, 3U>;
            };

            struct IOMC7 : public RegisterField<CFGLR, 28, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC7, 0U>;
                using Value1 = FieldValue<IOMC7, 1U>;
                using Value2 = FieldValue<IOMC7, 2U>;
                using Value3 = FieldValue<IOMC7, 3U>;
            };

            struct IOFC7 : public RegisterField<CFGLR, 30, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC7, 0U>;
                using Value1 = FieldValue<IOFC7, 1U>;
                using Value2 = FieldValue<IOFC7, 2U>;
                using Value3 = FieldValue<IOFC7, 3U>;
            };

        };

        struct CFGHR : public Register<0x40010C04, 32, ReadWriteMode>
        {
            struct IOMC8 : public RegisterField<CFGHR, 0, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC8, 0U>;
                using Value1 = FieldValue<IOMC8, 1U>;
                using Value2 = FieldValue<IOMC8, 2U>;
                using Value3 = FieldValue<IOMC8, 3U>;
            };

            struct IOFC8 : public RegisterField<CFGHR, 2, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC8, 0U>;
                using Value1 = FieldValue<IOFC8, 1U>;
                using Value2 = FieldValue<IOFC8, 2U>;
                using Value3 = FieldValue<IOFC8, 3U>;
            };

            struct IOMC9 : public RegisterField<CFGHR, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC9, 0U>;
                using Value1 = FieldValue<IOMC9, 1U>;
                using Value2 = FieldValue<IOMC9, 2U>;
                using Value3 = FieldValue<IOMC9, 3U>;
            };

            struct IOFC9 : public RegisterField<CFGHR, 6, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC9, 0U>;
                using Value1 = FieldValue<IOFC9, 1U>;
                using Value2 = FieldValue<IOFC9, 2U>;
                using Value3 = FieldValue<IOFC9, 3U>;
            };

            struct IOMC10 : public RegisterField<CFGHR, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC10, 0U>;
                using Value1 = FieldValue<IOMC10, 1U>;
                using Value2 = FieldValue<IOMC10, 2U>;
                using Value3 = FieldValue<IOMC10, 3U>;
            };

            struct IOFC10 : public RegisterField<CFGHR, 10, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC10, 0U>;
                using Value1 = FieldValue<IOFC10, 1U>;
                using Value2 = FieldValue<IOFC10, 2U>;
                using Value3 = FieldValue<IOFC10, 3U>;
            };

            struct IOMC11 : public RegisterField<CFGHR, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC11, 0U>;
                using Value1 = FieldValue<IOMC11, 1U>;
                using Value2 = FieldValue<IOMC11, 2U>;
                using Value3 = FieldValue<IOMC11, 3U>;
            };

            struct IOFC11 : public RegisterField<CFGHR, 14, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC11, 0U>;
                using Value1 = FieldValue<IOFC11, 1U>;
                using Value2 = FieldValue<IOFC11, 2U>;
                using Value3 = FieldValue<IOFC11, 3U>;
            };

            struct IOMC12 : public RegisterField<CFGHR, 16, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC12, 0U>;
                using Value1 = FieldValue<IOMC12, 1U>;
                using Value2 = FieldValue<IOMC12, 2U>;
                using Value3 = FieldValue<IOMC12, 3U>;
            };

            struct IOFC12 : public RegisterField<CFGHR, 18, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC12, 0U>;
                using Value1 = FieldValue<IOFC12, 1U>;
                using Value2 = FieldValue<IOFC12, 2U>;
                using Value3 = FieldValue<IOFC12, 3U>;
            };

            struct IOMC13 : public RegisterField<CFGHR, 20, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC13, 0U>;
                using Value1 = FieldValue<IOMC13, 1U>;
                using Value2 = FieldValue<IOMC13, 2U>;
                using Value3 = FieldValue<IOMC13, 3U>;
            };

            struct IOFC13 : public RegisterField<CFGHR, 22, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC13, 0U>;
                using Value1 = FieldValue<IOFC13, 1U>;
                using Value2 = FieldValue<IOFC13, 2U>;
                using Value3 = FieldValue<IOFC13, 3U>;
            };

            struct IOMC14 : public RegisterField<CFGHR, 24, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC14, 0U>;
                using Value1 = FieldValue<IOMC14, 1U>;
                using Value2 = FieldValue<IOMC14, 2U>;
                using Value3 = FieldValue<IOMC14, 3U>;
            };

            struct IOFC14 : public RegisterField<CFGHR, 26, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC14, 0U>;
                using Value1 = FieldValue<IOFC14, 1U>;
                using Value2 = FieldValue<IOFC14, 2U>;
                using Value3 = FieldValue<IOFC14, 3U>;
            };

            struct IOMC15 : public RegisterField<CFGHR, 28, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMC15, 0U>;
                using Value1 = FieldValue<IOMC15, 1U>;
                using Value2 = FieldValue<IOMC15, 2U>;
                using Value3 = FieldValue<IOMC15, 3U>;
            };

            struct IOFC15 : public RegisterField<CFGHR, 30, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<IOFC15, 0U>;
                using Value1 = FieldValue<IOFC15, 1U>;
                using Value2 = FieldValue<IOFC15, 2U>;
                using Value3 = FieldValue<IOFC15, 3U>;
            };

        };

        struct IDT : public Register<0x40010C08, 32, ReadMode>
        {
            struct IDT0 : public RegisterField<IDT, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT0, 0U>;
                using Value1 = FieldValue<IDT0, 1U>;
            };

            struct IDT1 : public RegisterField<IDT, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT1, 0U>;
                using Value1 = FieldValue<IDT1, 1U>;
            };

            struct IDT2 : public RegisterField<IDT, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT2, 0U>;
                using Value1 = FieldValue<IDT2, 1U>;
            };

            struct IDT3 : public RegisterField<IDT, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT3, 0U>;
                using Value1 = FieldValue<IDT3, 1U>;
            };

            struct IDT4 : public RegisterField<IDT, 4, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT4, 0U>;
                using Value1 = FieldValue<IDT4, 1U>;
            };

            struct IDT5 : public RegisterField<IDT, 5, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT5, 0U>;
                using Value1 = FieldValue<IDT5, 1U>;
            };

            struct IDT6 : public RegisterField<IDT, 6, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT6, 0U>;
                using Value1 = FieldValue<IDT6, 1U>;
            };

            struct IDT7 : public RegisterField<IDT, 7, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT7, 0U>;
                using Value1 = FieldValue<IDT7, 1U>;
            };

            struct IDT8 : public RegisterField<IDT, 8, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT8, 0U>;
                using Value1 = FieldValue<IDT8, 1U>;
            };

            struct IDT9 : public RegisterField<IDT, 9, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT9, 0U>;
                using Value1 = FieldValue<IDT9, 1U>;
            };

            struct IDT10 : public RegisterField<IDT, 10, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT10, 0U>;
                using Value1 = FieldValue<IDT10, 1U>;
            };

            struct IDT11 : public RegisterField<IDT, 11, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT11, 0U>;
                using Value1 = FieldValue<IDT11, 1U>;
            };

            struct IDT12 : public RegisterField<IDT, 12, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT12, 0U>;
                using Value1 = FieldValue<IDT12, 1U>;
            };

            struct IDT13 : public RegisterField<IDT, 13, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT13, 0U>;
                using Value1 = FieldValue<IDT13, 1U>;
            };

            struct IDT14 : public RegisterField<IDT, 14, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT14, 0U>;
                using Value1 = FieldValue<IDT14, 1U>;
            };

            struct IDT15 : public RegisterField<IDT, 15, 1, ReadMode>
            {
                using Value0 = FieldValue<IDT15, 0U>;
                using Value1 = FieldValue<IDT15, 1U>;
            };

        };

        struct ODT : public Register<0x40010C0C, 32, ReadWriteMode>
        {
            struct ODT0 : public RegisterField<ODT, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT0, 0U>;
                using Value1 = FieldValue<ODT0, 1U>;
            };

            struct ODT1 : public RegisterField<ODT, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT1, 0U>;
                using Value1 = FieldValue<ODT1, 1U>;
            };

            struct ODT2 : public RegisterField<ODT, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT2, 0U>;
                using Value1 = FieldValue<ODT2, 1U>;
            };

            struct ODT3 : public RegisterField<ODT, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT3, 0U>;
                using Value1 = FieldValue<ODT3, 1U>;
            };

            struct ODT4 : public RegisterField<ODT, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT4, 0U>;
                using Value1 = FieldValue<ODT4, 1U>;
            };

            struct ODT5 : public RegisterField<ODT, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT5, 0U>;
                using Value1 = FieldValue<ODT5, 1U>;
            };

            struct ODT6 : public RegisterField<ODT, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT6, 0U>;
                using Value1 = FieldValue<ODT6, 1U>;
            };

            struct ODT7 : public RegisterField<ODT, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT7, 0U>;
                using Value1 = FieldValue<ODT7, 1U>;
            };

            struct ODT8 : public RegisterField<ODT, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT8, 0U>;
                using Value1 = FieldValue<ODT8, 1U>;
            };

            struct ODT9 : public RegisterField<ODT, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT9, 0U>;
                using Value1 = FieldValue<ODT9, 1U>;
            };

            struct ODT10 : public RegisterField<ODT, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT10, 0U>;
                using Value1 = FieldValue<ODT10, 1U>;
            };

            struct ODT11 : public RegisterField<ODT, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT11, 0U>;
                using Value1 = FieldValue<ODT11, 1U>;
            };

            struct ODT12 : public RegisterField<ODT, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT12, 0U>;
                using Value1 = FieldValue<ODT12, 1U>;
            };

            struct ODT13 : public RegisterField<ODT, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT13, 0U>;
                using Value1 = FieldValue<ODT13, 1U>;
            };

            struct ODT14 : public RegisterField<ODT, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT14, 0U>;
                using Value1 = FieldValue<ODT14, 1U>;
            };

            struct ODT15 : public RegisterField<ODT, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ODT15, 0U>;
                using Value1 = FieldValue<ODT15, 1U>;
            };

        };

        struct SCR : public Register<0x40010C10, 32, ReadWriteMode>
        {
            struct IOSB0 : public RegisterField<SCR, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB0, 0U>;
                using Value1 = FieldValue<IOSB0, 1U>;
            };

            struct IOSB1 : public RegisterField<SCR, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB1, 0U>;
                using Value1 = FieldValue<IOSB1, 1U>;
            };

            struct IOSB2 : public RegisterField<SCR, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB2, 0U>;
                using Value1 = FieldValue<IOSB2, 1U>;
            };

            struct IOSB3 : public RegisterField<SCR, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB3, 0U>;
                using Value1 = FieldValue<IOSB3, 1U>;
            };

            struct IOSB4 : public RegisterField<SCR, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB4, 0U>;
                using Value1 = FieldValue<IOSB4, 1U>;
            };

            struct IOSB5 : public RegisterField<SCR, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB5, 0U>;
                using Value1 = FieldValue<IOSB5, 1U>;
            };

            struct IOSB6 : public RegisterField<SCR, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB6, 0U>;
                using Value1 = FieldValue<IOSB6, 1U>;
            };

            struct IOSB7 : public RegisterField<SCR, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB7, 0U>;
                using Value1 = FieldValue<IOSB7, 1U>;
            };

            struct IOSB8 : public RegisterField<SCR, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB8, 0U>;
                using Value1 = FieldValue<IOSB8, 1U>;
            };

            struct IOSB9 : public RegisterField<SCR, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB9, 0U>;
                using Value1 = FieldValue<IOSB9, 1U>;
            };

            struct IOSB10 : public RegisterField<SCR, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB10, 0U>;
                using Value1 = FieldValue<IOSB10, 1U>;
            };

            struct IOSB11 : public RegisterField<SCR, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB11, 0U>;
                using Value1 = FieldValue<IOSB11, 1U>;
            };

            struct IOSB12 : public RegisterField<SCR, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB12, 0U>;
                using Value1 = FieldValue<IOSB12, 1U>;
            };

            struct IOSB13 : public RegisterField<SCR, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB13, 0U>;
                using Value1 = FieldValue<IOSB13, 1U>;
            };

            struct IOSB14 : public RegisterField<SCR, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB14, 0U>;
                using Value1 = FieldValue<IOSB14, 1U>;
            };

            struct IOSB15 : public RegisterField<SCR, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOSB15, 0U>;
                using Value1 = FieldValue<IOSB15, 1U>;
            };

            struct IOCB0 : public RegisterField<SCR, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB0, 0U>;
                using Value1 = FieldValue<IOCB0, 1U>;
            };

            struct IOCB1 : public RegisterField<SCR, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB1, 0U>;
                using Value1 = FieldValue<IOCB1, 1U>;
            };

            struct IOCB2 : public RegisterField<SCR, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB2, 0U>;
                using Value1 = FieldValue<IOCB2, 1U>;
            };

            struct IOCB3 : public RegisterField<SCR, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB3, 0U>;
                using Value1 = FieldValue<IOCB3, 1U>;
            };

            struct IOCB4 : public RegisterField<SCR, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB4, 0U>;
                using Value1 = FieldValue<IOCB4, 1U>;
            };

            struct IOCB5 : public RegisterField<SCR, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB5, 0U>;
                using Value1 = FieldValue<IOCB5, 1U>;
            };

            struct IOCB6 : public RegisterField<SCR, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB6, 0U>;
                using Value1 = FieldValue<IOCB6, 1U>;
            };

            struct IOCB7 : public RegisterField<SCR, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB7, 0U>;
                using Value1 = FieldValue<IOCB7, 1U>;
            };

            struct IOCB8 : public RegisterField<SCR, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB8, 0U>;
                using Value1 = FieldValue<IOCB8, 1U>;
            };

            struct IOCB9 : public RegisterField<SCR, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB9, 0U>;
                using Value1 = FieldValue<IOCB9, 1U>;
            };

            struct IOCB10 : public RegisterField<SCR, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB10, 0U>;
                using Value1 = FieldValue<IOCB10, 1U>;
            };

            struct IOCB11 : public RegisterField<SCR, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB11, 0U>;
                using Value1 = FieldValue<IOCB11, 1U>;
            };

            struct IOCB12 : public RegisterField<SCR, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB12, 0U>;
                using Value1 = FieldValue<IOCB12, 1U>;
            };

            struct IOCB13 : public RegisterField<SCR, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB13, 0U>;
                using Value1 = FieldValue<IOCB13, 1U>;
            };

            struct IOCB14 : public RegisterField<SCR, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB14, 0U>;
                using Value1 = FieldValue<IOCB14, 1U>;
            };

            struct IOCB15 : public RegisterField<SCR, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB15, 0U>;
                using Value1 = FieldValue<IOCB15, 1U>;
            };

        };

        struct CLR : public Register<0x40010C14, 32, ReadWriteMode>
        {
            struct IOCB0 : public RegisterField<CLR, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB0, 0U>;
                using Value1 = FieldValue<IOCB0, 1U>;
            };

            struct IOCB1 : public RegisterField<CLR, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB1, 0U>;
                using Value1 = FieldValue<IOCB1, 1U>;
            };

            struct IOCB2 : public RegisterField<CLR, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB2, 0U>;
                using Value1 = FieldValue<IOCB2, 1U>;
            };

            struct IOCB3 : public RegisterField<CLR, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB3, 0U>;
                using Value1 = FieldValue<IOCB3, 1U>;
            };

            struct IOCB4 : public RegisterField<CLR, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB4, 0U>;
                using Value1 = FieldValue<IOCB4, 1U>;
            };

            struct IOCB5 : public RegisterField<CLR, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB5, 0U>;
                using Value1 = FieldValue<IOCB5, 1U>;
            };

            struct IOCB6 : public RegisterField<CLR, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB6, 0U>;
                using Value1 = FieldValue<IOCB6, 1U>;
            };

            struct IOCB7 : public RegisterField<CLR, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB7, 0U>;
                using Value1 = FieldValue<IOCB7, 1U>;
            };

            struct IOCB8 : public RegisterField<CLR, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB8, 0U>;
                using Value1 = FieldValue<IOCB8, 1U>;
            };

            struct IOCB9 : public RegisterField<CLR, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB9, 0U>;
                using Value1 = FieldValue<IOCB9, 1U>;
            };

            struct IOCB10 : public RegisterField<CLR, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB10, 0U>;
                using Value1 = FieldValue<IOCB10, 1U>;
            };

            struct IOCB11 : public RegisterField<CLR, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB11, 0U>;
                using Value1 = FieldValue<IOCB11, 1U>;
            };

            struct IOCB12 : public RegisterField<CLR, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB12, 0U>;
                using Value1 = FieldValue<IOCB12, 1U>;
            };

            struct IOCB13 : public RegisterField<CLR, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB13, 0U>;
                using Value1 = FieldValue<IOCB13, 1U>;
            };

            struct IOCB14 : public RegisterField<CLR, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB14, 0U>;
                using Value1 = FieldValue<IOCB14, 1U>;
            };

            struct IOCB15 : public RegisterField<CLR, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOCB15, 0U>;
                using Value1 = FieldValue<IOCB15, 1U>;
            };

        };

        struct WPR : public Register<0x40010C18, 32, ReadWriteMode>
        {
            struct WPEN0 : public RegisterField<WPR, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN0, 0U>;
                using Value1 = FieldValue<WPEN0, 1U>;
            };

            struct WPEN1 : public RegisterField<WPR, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN1, 0U>;
                using Value1 = FieldValue<WPEN1, 1U>;
            };

            struct WPEN2 : public RegisterField<WPR, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN2, 0U>;
                using Value1 = FieldValue<WPEN2, 1U>;
            };

            struct WPEN3 : public RegisterField<WPR, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN3, 0U>;
                using Value1 = FieldValue<WPEN3, 1U>;
            };

            struct WPEN4 : public RegisterField<WPR, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN4, 0U>;
                using Value1 = FieldValue<WPEN4, 1U>;
            };

            struct WPEN5 : public RegisterField<WPR, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN5, 0U>;
                using Value1 = FieldValue<WPEN5, 1U>;
            };

            struct WPEN6 : public RegisterField<WPR, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN6, 0U>;
                using Value1 = FieldValue<WPEN6, 1U>;
            };

            struct WPEN7 : public RegisterField<WPR, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN7, 0U>;
                using Value1 = FieldValue<WPEN7, 1U>;
            };

            struct WPEN8 : public RegisterField<WPR, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN8, 0U>;
                using Value1 = FieldValue<WPEN8, 1U>;
            };

            struct WPEN9 : public RegisterField<WPR, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN9, 0U>;
                using Value1 = FieldValue<WPEN9, 1U>;
            };

            struct WPEN10 : public RegisterField<WPR, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN10, 0U>;
                using Value1 = FieldValue<WPEN10, 1U>;
            };

            struct WPEN11 : public RegisterField<WPR, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN11, 0U>;
                using Value1 = FieldValue<WPEN11, 1U>;
            };

            struct WPEN12 : public RegisterField<WPR, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN12, 0U>;
                using Value1 = FieldValue<WPEN12, 1U>;
            };

            struct WPEN13 : public RegisterField<WPR, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN13, 0U>;
                using Value1 = FieldValue<WPEN13, 1U>;
            };

            struct WPEN14 : public RegisterField<WPR, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN14, 0U>;
                using Value1 = FieldValue<WPEN14, 1U>;
            };

            struct WPEN15 : public RegisterField<WPR, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPEN15, 0U>;
                using Value1 = FieldValue<WPEN15, 1U>;
            };

            struct WPSEQ : public RegisterField<WPR, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WPSEQ, 0U>;
                using Value1 = FieldValue<WPSEQ, 1U>;
            };

        };

        struct HDRV : public Register<0x40010C3C, 32, ReadWriteMode>
        {
            struct HDRV0 : public RegisterField<HDRV, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV0, 0U>;
                using Value1 = FieldValue<HDRV0, 1U>;
            };

            struct HDRV1 : public RegisterField<HDRV, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV1, 0U>;
                using Value1 = FieldValue<HDRV1, 1U>;
            };

            struct HDRV2 : public RegisterField<HDRV, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV2, 0U>;
                using Value1 = FieldValue<HDRV2, 1U>;
            };

            struct HDRV3 : public RegisterField<HDRV, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV3, 0U>;
                using Value1 = FieldValue<HDRV3, 1U>;
            };

            struct HDRV4 : public RegisterField<HDRV, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV4, 0U>;
                using Value1 = FieldValue<HDRV4, 1U>;
            };

            struct HDRV5 : public RegisterField<HDRV, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV5, 0U>;
                using Value1 = FieldValue<HDRV5, 1U>;
            };

            struct HDRV6 : public RegisterField<HDRV, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV6, 0U>;
                using Value1 = FieldValue<HDRV6, 1U>;
            };

            struct HDRV7 : public RegisterField<HDRV, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV7, 0U>;
                using Value1 = FieldValue<HDRV7, 1U>;
            };

            struct HDRV8 : public RegisterField<HDRV, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV8, 0U>;
                using Value1 = FieldValue<HDRV8, 1U>;
            };

            struct HDRV9 : public RegisterField<HDRV, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV9, 0U>;
                using Value1 = FieldValue<HDRV9, 1U>;
            };

            struct HDRV10 : public RegisterField<HDRV, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV10, 0U>;
                using Value1 = FieldValue<HDRV10, 1U>;
            };

            struct HDRV11 : public RegisterField<HDRV, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV11, 0U>;
                using Value1 = FieldValue<HDRV11, 1U>;
            };

            struct HDRV12 : public RegisterField<HDRV, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV12, 0U>;
                using Value1 = FieldValue<HDRV12, 1U>;
            };

            struct HDRV13 : public RegisterField<HDRV, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV13, 0U>;
                using Value1 = FieldValue<HDRV13, 1U>;
            };

            struct HDRV14 : public RegisterField<HDRV, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV14, 0U>;
                using Value1 = FieldValue<HDRV14, 1U>;
            };

            struct HDRV15 : public RegisterField<HDRV, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HDRV15, 0U>;
                using Value1 = FieldValue<HDRV15, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(GPIOBREGISTERS_HPP)
