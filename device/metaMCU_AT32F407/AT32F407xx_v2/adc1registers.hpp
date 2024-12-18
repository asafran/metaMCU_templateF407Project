/*******************************************************************************
* Filename      : adc1registers.hpp
*
* Details       : Analog to digital converter. This header file is
*                 auto-generated for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(ADC1REGISTERS_HPP)
#define ADC1REGISTERS_HPP

#include "field.hpp"

namespace metaMCU {
    namespace AT32F407xx_v2 {
        namespace ADC1 {
            constexpr core::Register<0x40012400, uint32_t, Read_write_t> RTS;
            namespace RTS_b
            {
                constexpr core::Field<decltype(RTS), 4, 1, Read_write_t> OCCS;
                namespace OCCS_v
                {
                    constexpr core::Field_value<decltype(OCCS), 0U> Value0;
                    constexpr core::Field_value<decltype(OCCS), 0U> Value1;
                }
            }


                /*
                struct ODT : public Register<0x4001244C, 32, ReadMode>
                {
                    struct ADC2ODT : public RegisterField<ODT, 16, 16, ReadMode>
                    {
                    };

                    struct ODTField : public RegisterField<ODT, 0, 16, ReadMode>
                    {
                    };

                };
                */
        }
/*
        struct ADC2_t
        {
        private:
            struct STS_t : core::Register<0x40012400, uint32_t, Read_write_t>
            {
            private:
                struct OCCS_t : public core::Field<STS_t, 4, 1, Read_write_t>
                {
                    core::Field_value<OCCS_t, 0U> Value0{};
                };
            public:
                OCCS_t OCCS{};
            };
        public:
            STS_t STS{};
        } constexpr ADC2;
*/
    }
}

#endif //#if !defined(ADC1REGISTERS_HPP)
