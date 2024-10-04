/*******************************************************************************
* Filename      : crmregisters.hpp
*
* Details       : Clock and reset management. This header file is auto-generated
*                 for AT32F407xx_v2 device.
*
*
*******************************************************************************/

#if !defined(CRMREGISTERS_HPP)
#define CRMREGISTERS_HPP

#include "register.hpp"

namespace AT32F407xx_v2
{
    struct CRM
    {
        struct CTRL : public Register<0x40021000, 32, ReadWriteMode>
        {
            struct HICKEN : public RegisterField<CTRL, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HICKEN, 0U>;
                using Value1 = FieldValue<HICKEN, 1U>;
            };

            struct HICKSTBL : public RegisterField<CTRL, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<HICKSTBL, 0U>;
                using Value1 = FieldValue<HICKSTBL, 1U>;
            };

            struct HICKTRIM : public RegisterField<CTRL, 2, 6, ReadWriteMode>
            {
            };

            struct HICKCAL : public RegisterField<CTRL, 8, 8, ReadMode>
            {
            };

            struct HEXTEN : public RegisterField<CTRL, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HEXTEN, 0U>;
                using Value1 = FieldValue<HEXTEN, 1U>;
            };

            struct HEXTSTBL : public RegisterField<CTRL, 17, 1, ReadMode>
            {
                using Value0 = FieldValue<HEXTSTBL, 0U>;
                using Value1 = FieldValue<HEXTSTBL, 1U>;
            };

            struct HEXTBYPS : public RegisterField<CTRL, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HEXTBYPS, 0U>;
                using Value1 = FieldValue<HEXTBYPS, 1U>;
            };

            struct CFDEN : public RegisterField<CTRL, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CFDEN, 0U>;
                using Value1 = FieldValue<CFDEN, 1U>;
            };

            struct PLLEN : public RegisterField<CTRL, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PLLEN, 0U>;
                using Value1 = FieldValue<PLLEN, 1U>;
            };

            struct PLLSTBL : public RegisterField<CTRL, 25, 1, ReadMode>
            {
                using Value0 = FieldValue<PLLSTBL, 0U>;
                using Value1 = FieldValue<PLLSTBL, 1U>;
            };

        };

        struct CFG : public Register<0x40021004, 32, ReadWriteMode>
        {
            struct SCLKSEL : public RegisterField<CFG, 0, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<SCLKSEL, 0U>;
                using Value1 = FieldValue<SCLKSEL, 1U>;
                using Value2 = FieldValue<SCLKSEL, 2U>;
                using Value3 = FieldValue<SCLKSEL, 3U>;
            };

            struct SCLKSTS : public RegisterField<CFG, 2, 2, ReadMode>
            {
                using Value0 = FieldValue<SCLKSTS, 0U>;
                using Value1 = FieldValue<SCLKSTS, 1U>;
                using Value2 = FieldValue<SCLKSTS, 2U>;
                using Value3 = FieldValue<SCLKSTS, 3U>;
            };

            struct AHBDIV : public RegisterField<CFG, 4, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<AHBDIV, 0U>;
                using Value1 = FieldValue<AHBDIV, 1U>;
                using Value2 = FieldValue<AHBDIV, 2U>;
                using Value3 = FieldValue<AHBDIV, 3U>;
                using Value4 = FieldValue<AHBDIV, 4U>;
                using Value5 = FieldValue<AHBDIV, 5U>;
                using Value6 = FieldValue<AHBDIV, 6U>;
                using Value7 = FieldValue<AHBDIV, 7U>;
                using Value8 = FieldValue<AHBDIV, 8U>;
                using Value9 = FieldValue<AHBDIV, 9U>;
                using Value10 = FieldValue<AHBDIV, 10U>;
                using Value11 = FieldValue<AHBDIV, 11U>;
                using Value12 = FieldValue<AHBDIV, 12U>;
                using Value13 = FieldValue<AHBDIV, 13U>;
                using Value14 = FieldValue<AHBDIV, 14U>;
                using Value15 = FieldValue<AHBDIV, 15U>;
            };

            struct APB1DIV : public RegisterField<CFG, 8, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<APB1DIV, 0U>;
                using Value1 = FieldValue<APB1DIV, 1U>;
                using Value2 = FieldValue<APB1DIV, 2U>;
                using Value3 = FieldValue<APB1DIV, 3U>;
                using Value4 = FieldValue<APB1DIV, 4U>;
                using Value5 = FieldValue<APB1DIV, 5U>;
                using Value6 = FieldValue<APB1DIV, 6U>;
                using Value7 = FieldValue<APB1DIV, 7U>;
            };

            struct APB2DIV : public RegisterField<CFG, 11, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<APB2DIV, 0U>;
                using Value1 = FieldValue<APB2DIV, 1U>;
                using Value2 = FieldValue<APB2DIV, 2U>;
                using Value3 = FieldValue<APB2DIV, 3U>;
                using Value4 = FieldValue<APB2DIV, 4U>;
                using Value5 = FieldValue<APB2DIV, 5U>;
                using Value6 = FieldValue<APB2DIV, 6U>;
                using Value7 = FieldValue<APB2DIV, 7U>;
            };

            struct ADCDIV1_0 : public RegisterField<CFG, 14, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<ADCDIV1_0, 0U>;
                using Value1 = FieldValue<ADCDIV1_0, 1U>;
                using Value2 = FieldValue<ADCDIV1_0, 2U>;
                using Value3 = FieldValue<ADCDIV1_0, 3U>;
            };

            struct PLLRCS : public RegisterField<CFG, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PLLRCS, 0U>;
                using Value1 = FieldValue<PLLRCS, 1U>;
            };

            struct PLLHEXTDIV : public RegisterField<CFG, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PLLHEXTDIV, 0U>;
                using Value1 = FieldValue<PLLHEXTDIV, 1U>;
            };

            struct PLLMULT3_0 : public RegisterField<CFG, 18, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<PLLMULT3_0, 0U>;
                using Value1 = FieldValue<PLLMULT3_0, 1U>;
                using Value2 = FieldValue<PLLMULT3_0, 2U>;
                using Value3 = FieldValue<PLLMULT3_0, 3U>;
                using Value4 = FieldValue<PLLMULT3_0, 4U>;
                using Value5 = FieldValue<PLLMULT3_0, 5U>;
                using Value6 = FieldValue<PLLMULT3_0, 6U>;
                using Value7 = FieldValue<PLLMULT3_0, 7U>;
                using Value8 = FieldValue<PLLMULT3_0, 8U>;
                using Value9 = FieldValue<PLLMULT3_0, 9U>;
                using Value10 = FieldValue<PLLMULT3_0, 10U>;
                using Value11 = FieldValue<PLLMULT3_0, 11U>;
                using Value12 = FieldValue<PLLMULT3_0, 12U>;
                using Value13 = FieldValue<PLLMULT3_0, 13U>;
                using Value14 = FieldValue<PLLMULT3_0, 14U>;
                using Value15 = FieldValue<PLLMULT3_0, 15U>;
            };

            struct USBDIV1_0 : public RegisterField<CFG, 22, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<USBDIV1_0, 0U>;
                using Value1 = FieldValue<USBDIV1_0, 1U>;
                using Value2 = FieldValue<USBDIV1_0, 2U>;
                using Value3 = FieldValue<USBDIV1_0, 3U>;
            };

            struct CLKOUT_SEL : public RegisterField<CFG, 24, 3, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKOUT_SEL, 0U>;
                using Value1 = FieldValue<CLKOUT_SEL, 1U>;
                using Value2 = FieldValue<CLKOUT_SEL, 2U>;
                using Value3 = FieldValue<CLKOUT_SEL, 3U>;
                using Value4 = FieldValue<CLKOUT_SEL, 4U>;
                using Value5 = FieldValue<CLKOUT_SEL, 5U>;
                using Value6 = FieldValue<CLKOUT_SEL, 6U>;
                using Value7 = FieldValue<CLKOUT_SEL, 7U>;
            };

            struct USBDIV2 : public RegisterField<CFG, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USBDIV2, 0U>;
                using Value1 = FieldValue<USBDIV2, 1U>;
            };

            struct ADCDIV2 : public RegisterField<CFG, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADCDIV2, 0U>;
                using Value1 = FieldValue<ADCDIV2, 1U>;
            };

            struct PLLMULT5_4 : public RegisterField<CFG, 29, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<PLLMULT5_4, 0U>;
                using Value1 = FieldValue<PLLMULT5_4, 1U>;
                using Value2 = FieldValue<PLLMULT5_4, 2U>;
                using Value3 = FieldValue<PLLMULT5_4, 3U>;
            };

            struct PLLRANGE : public RegisterField<CFG, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PLLRANGE, 0U>;
                using Value1 = FieldValue<PLLRANGE, 1U>;
            };

        };

        struct CLKINT : public Register<0x40021008, 32, ReadWriteMode>
        {
            struct LICKSTBLF : public RegisterField<CLKINT, 0, 1, ReadMode>
            {
                using Value0 = FieldValue<LICKSTBLF, 0U>;
                using Value1 = FieldValue<LICKSTBLF, 1U>;
            };

            struct LEXTSTBLF : public RegisterField<CLKINT, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<LEXTSTBLF, 0U>;
                using Value1 = FieldValue<LEXTSTBLF, 1U>;
            };

            struct HICKSTBLF : public RegisterField<CLKINT, 2, 1, ReadMode>
            {
                using Value0 = FieldValue<HICKSTBLF, 0U>;
                using Value1 = FieldValue<HICKSTBLF, 1U>;
            };

            struct HEXTSTBLF : public RegisterField<CLKINT, 3, 1, ReadMode>
            {
                using Value0 = FieldValue<HEXTSTBLF, 0U>;
                using Value1 = FieldValue<HEXTSTBLF, 1U>;
            };

            struct PLLSTBLF : public RegisterField<CLKINT, 4, 1, ReadMode>
            {
                using Value0 = FieldValue<PLLSTBLF, 0U>;
                using Value1 = FieldValue<PLLSTBLF, 1U>;
            };

            struct CFDF : public RegisterField<CLKINT, 7, 1, ReadMode>
            {
                using Value0 = FieldValue<CFDF, 0U>;
                using Value1 = FieldValue<CFDF, 1U>;
            };

            struct LICKSTBLIEN : public RegisterField<CLKINT, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LICKSTBLIEN, 0U>;
                using Value1 = FieldValue<LICKSTBLIEN, 1U>;
            };

            struct LEXTSTBLIEN : public RegisterField<CLKINT, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LEXTSTBLIEN, 0U>;
                using Value1 = FieldValue<LEXTSTBLIEN, 1U>;
            };

            struct HICKSTBLIEN : public RegisterField<CLKINT, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HICKSTBLIEN, 0U>;
                using Value1 = FieldValue<HICKSTBLIEN, 1U>;
            };

            struct HEXTSTBLIEN : public RegisterField<CLKINT, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HEXTSTBLIEN, 0U>;
                using Value1 = FieldValue<HEXTSTBLIEN, 1U>;
            };

            struct PLLSTBLIEN : public RegisterField<CLKINT, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PLLSTBLIEN, 0U>;
                using Value1 = FieldValue<PLLSTBLIEN, 1U>;
            };

            struct LICKSTBLFC : public RegisterField<CLKINT, 16, 1, WriteMode>
            {
                using Value0 = FieldValue<LICKSTBLFC, 0U>;
                using Value1 = FieldValue<LICKSTBLFC, 1U>;
            };

            struct LEXTSTBLFC : public RegisterField<CLKINT, 17, 1, WriteMode>
            {
                using Value0 = FieldValue<LEXTSTBLFC, 0U>;
                using Value1 = FieldValue<LEXTSTBLFC, 1U>;
            };

            struct HICKSTBLFC : public RegisterField<CLKINT, 18, 1, WriteMode>
            {
                using Value0 = FieldValue<HICKSTBLFC, 0U>;
                using Value1 = FieldValue<HICKSTBLFC, 1U>;
            };

            struct HEXTSTBLFC : public RegisterField<CLKINT, 19, 1, WriteMode>
            {
                using Value0 = FieldValue<HEXTSTBLFC, 0U>;
                using Value1 = FieldValue<HEXTSTBLFC, 1U>;
            };

            struct PLLSTBLFC : public RegisterField<CLKINT, 20, 1, WriteMode>
            {
                using Value0 = FieldValue<PLLSTBLFC, 0U>;
                using Value1 = FieldValue<PLLSTBLFC, 1U>;
            };

            struct CFDFC : public RegisterField<CLKINT, 23, 1, WriteMode>
            {
                using Value0 = FieldValue<CFDFC, 0U>;
                using Value1 = FieldValue<CFDFC, 1U>;
            };

        };

        struct APB2RST : public Register<0x4002100C, 32, ReadWriteMode>
        {
            struct IOMUXRST : public RegisterField<APB2RST, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMUXRST, 0U>;
                using Value1 = FieldValue<IOMUXRST, 1U>;
            };

            struct EXINTRST : public RegisterField<APB2RST, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EXINTRST, 0U>;
                using Value1 = FieldValue<EXINTRST, 1U>;
            };

            struct GPIOARST : public RegisterField<APB2RST, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIOARST, 0U>;
                using Value1 = FieldValue<GPIOARST, 1U>;
            };

            struct GPIOBRST : public RegisterField<APB2RST, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIOBRST, 0U>;
                using Value1 = FieldValue<GPIOBRST, 1U>;
            };

            struct GPIOCRST : public RegisterField<APB2RST, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIOCRST, 0U>;
                using Value1 = FieldValue<GPIOCRST, 1U>;
            };

            struct GPIODRST : public RegisterField<APB2RST, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIODRST, 0U>;
                using Value1 = FieldValue<GPIODRST, 1U>;
            };

            struct GPIOERST : public RegisterField<APB2RST, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIOERST, 0U>;
                using Value1 = FieldValue<GPIOERST, 1U>;
            };

            struct ADC1RST : public RegisterField<APB2RST, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC1RST, 0U>;
                using Value1 = FieldValue<ADC1RST, 1U>;
            };

            struct ADC2RST : public RegisterField<APB2RST, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC2RST, 0U>;
                using Value1 = FieldValue<ADC2RST, 1U>;
            };

            struct TMR1RST : public RegisterField<APB2RST, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR1RST, 0U>;
                using Value1 = FieldValue<TMR1RST, 1U>;
            };

            struct SPI1RST : public RegisterField<APB2RST, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI1RST, 0U>;
                using Value1 = FieldValue<SPI1RST, 1U>;
            };

            struct TMR8RST : public RegisterField<APB2RST, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR8RST, 0U>;
                using Value1 = FieldValue<TMR8RST, 1U>;
            };

            struct USART1RST : public RegisterField<APB2RST, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART1RST, 0U>;
                using Value1 = FieldValue<USART1RST, 1U>;
            };

            struct ADC3RST : public RegisterField<APB2RST, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC3RST, 0U>;
                using Value1 = FieldValue<ADC3RST, 1U>;
            };

            struct TMR9RST : public RegisterField<APB2RST, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR9RST, 0U>;
                using Value1 = FieldValue<TMR9RST, 1U>;
            };

            struct TMR10RST : public RegisterField<APB2RST, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR10RST, 0U>;
                using Value1 = FieldValue<TMR10RST, 1U>;
            };

            struct TMR11RST : public RegisterField<APB2RST, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR11RST, 0U>;
                using Value1 = FieldValue<TMR11RST, 1U>;
            };

            struct ACCRST : public RegisterField<APB2RST, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ACCRST, 0U>;
                using Value1 = FieldValue<ACCRST, 1U>;
            };

            struct I2C3RST : public RegisterField<APB2RST, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C3RST, 0U>;
                using Value1 = FieldValue<I2C3RST, 1U>;
            };

            struct USART6RST : public RegisterField<APB2RST, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART6RST, 0U>;
                using Value1 = FieldValue<USART6RST, 1U>;
            };

            struct UART7RST : public RegisterField<APB2RST, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UART7RST, 0U>;
                using Value1 = FieldValue<UART7RST, 1U>;
            };

            struct UART8RST : public RegisterField<APB2RST, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UART8RST, 0U>;
                using Value1 = FieldValue<UART8RST, 1U>;
            };

        };

        struct APB1RST : public Register<0x40021010, 32, ReadWriteMode>
        {
            struct TMR2RST : public RegisterField<APB1RST, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR2RST, 0U>;
                using Value1 = FieldValue<TMR2RST, 1U>;
            };

            struct TMR3RST : public RegisterField<APB1RST, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR3RST, 0U>;
                using Value1 = FieldValue<TMR3RST, 1U>;
            };

            struct TMR4RST : public RegisterField<APB1RST, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR4RST, 0U>;
                using Value1 = FieldValue<TMR4RST, 1U>;
            };

            struct TMR5RST : public RegisterField<APB1RST, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR5RST, 0U>;
                using Value1 = FieldValue<TMR5RST, 1U>;
            };

            struct TMR6RST : public RegisterField<APB1RST, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR6RST, 0U>;
                using Value1 = FieldValue<TMR6RST, 1U>;
            };

            struct TMR7RST : public RegisterField<APB1RST, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR7RST, 0U>;
                using Value1 = FieldValue<TMR7RST, 1U>;
            };

            struct TMR12RST : public RegisterField<APB1RST, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR12RST, 0U>;
                using Value1 = FieldValue<TMR12RST, 1U>;
            };

            struct TMR13RST : public RegisterField<APB1RST, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR13RST, 0U>;
                using Value1 = FieldValue<TMR13RST, 1U>;
            };

            struct TMR14RST : public RegisterField<APB1RST, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR14RST, 0U>;
                using Value1 = FieldValue<TMR14RST, 1U>;
            };

            struct WWDTRST : public RegisterField<APB1RST, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WWDTRST, 0U>;
                using Value1 = FieldValue<WWDTRST, 1U>;
            };

            struct SPI2RST : public RegisterField<APB1RST, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI2RST, 0U>;
                using Value1 = FieldValue<SPI2RST, 1U>;
            };

            struct SPI3RST : public RegisterField<APB1RST, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI3RST, 0U>;
                using Value1 = FieldValue<SPI3RST, 1U>;
            };

            struct SPI4RST : public RegisterField<APB1RST, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI4RST, 0U>;
                using Value1 = FieldValue<SPI4RST, 1U>;
            };

            struct USART2RST : public RegisterField<APB1RST, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART2RST, 0U>;
                using Value1 = FieldValue<USART2RST, 1U>;
            };

            struct USART3RST : public RegisterField<APB1RST, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART3RST, 0U>;
                using Value1 = FieldValue<USART3RST, 1U>;
            };

            struct UART4RST : public RegisterField<APB1RST, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UART4RST, 0U>;
                using Value1 = FieldValue<UART4RST, 1U>;
            };

            struct UART5RST : public RegisterField<APB1RST, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UART5RST, 0U>;
                using Value1 = FieldValue<UART5RST, 1U>;
            };

            struct I2C1RST : public RegisterField<APB1RST, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C1RST, 0U>;
                using Value1 = FieldValue<I2C1RST, 1U>;
            };

            struct I2C2RST : public RegisterField<APB1RST, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C2RST, 0U>;
                using Value1 = FieldValue<I2C2RST, 1U>;
            };

            struct USBRST : public RegisterField<APB1RST, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USBRST, 0U>;
                using Value1 = FieldValue<USBRST, 1U>;
            };

            struct CAN1RST : public RegisterField<APB1RST, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN1RST, 0U>;
                using Value1 = FieldValue<CAN1RST, 1U>;
            };

            struct CAN2RST : public RegisterField<APB1RST, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN2RST, 0U>;
                using Value1 = FieldValue<CAN2RST, 1U>;
            };

            struct BPRRST : public RegisterField<APB1RST, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BPRRST, 0U>;
                using Value1 = FieldValue<BPRRST, 1U>;
            };

            struct PWCRST : public RegisterField<APB1RST, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PWCRST, 0U>;
                using Value1 = FieldValue<PWCRST, 1U>;
            };

            struct DACRST : public RegisterField<APB1RST, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DACRST, 0U>;
                using Value1 = FieldValue<DACRST, 1U>;
            };

        };

        struct AHBEN : public Register<0x40021014, 32, ReadWriteMode>
        {
            struct DMA1EN : public RegisterField<AHBEN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMA1EN, 0U>;
                using Value1 = FieldValue<DMA1EN, 1U>;
            };

            struct DMA2EN : public RegisterField<AHBEN, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DMA2EN, 0U>;
                using Value1 = FieldValue<DMA2EN, 1U>;
            };

            struct SRAMEN : public RegisterField<AHBEN, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SRAMEN, 0U>;
                using Value1 = FieldValue<SRAMEN, 1U>;
            };

            struct FLASHEN : public RegisterField<AHBEN, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<FLASHEN, 0U>;
                using Value1 = FieldValue<FLASHEN, 1U>;
            };

            struct CRCEN : public RegisterField<AHBEN, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CRCEN, 0U>;
                using Value1 = FieldValue<CRCEN, 1U>;
            };

            struct XMCEN : public RegisterField<AHBEN, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<XMCEN, 0U>;
                using Value1 = FieldValue<XMCEN, 1U>;
            };

            struct SDIO1EN : public RegisterField<AHBEN, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SDIO1EN, 0U>;
                using Value1 = FieldValue<SDIO1EN, 1U>;
            };

            struct SDIO2EN : public RegisterField<AHBEN, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SDIO2EN, 0U>;
                using Value1 = FieldValue<SDIO2EN, 1U>;
            };

            struct EMACEN : public RegisterField<AHBEN, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMACEN, 0U>;
                using Value1 = FieldValue<EMACEN, 1U>;
            };

            struct EMACTXEN : public RegisterField<AHBEN, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMACTXEN, 0U>;
                using Value1 = FieldValue<EMACTXEN, 1U>;
            };

            struct EMACRXEN : public RegisterField<AHBEN, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMACRXEN, 0U>;
                using Value1 = FieldValue<EMACRXEN, 1U>;
            };

            struct EMACPTPEN : public RegisterField<AHBEN, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMACPTPEN, 0U>;
                using Value1 = FieldValue<EMACPTPEN, 1U>;
            };

        };

        struct APB2EN : public Register<0x40021018, 32, ReadWriteMode>
        {
            struct IOMUXEN : public RegisterField<APB2EN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<IOMUXEN, 0U>;
                using Value1 = FieldValue<IOMUXEN, 1U>;
            };

            struct GPIOAEN : public RegisterField<APB2EN, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIOAEN, 0U>;
                using Value1 = FieldValue<GPIOAEN, 1U>;
            };

            struct GPIOBEN : public RegisterField<APB2EN, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIOBEN, 0U>;
                using Value1 = FieldValue<GPIOBEN, 1U>;
            };

            struct GPIOCEN : public RegisterField<APB2EN, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIOCEN, 0U>;
                using Value1 = FieldValue<GPIOCEN, 1U>;
            };

            struct GPIODEN : public RegisterField<APB2EN, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIODEN, 0U>;
                using Value1 = FieldValue<GPIODEN, 1U>;
            };

            struct GPIOEEN : public RegisterField<APB2EN, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<GPIOEEN, 0U>;
                using Value1 = FieldValue<GPIOEEN, 1U>;
            };

            struct ADC1EN : public RegisterField<APB2EN, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC1EN, 0U>;
                using Value1 = FieldValue<ADC1EN, 1U>;
            };

            struct ADC2EN : public RegisterField<APB2EN, 10, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC2EN, 0U>;
                using Value1 = FieldValue<ADC2EN, 1U>;
            };

            struct TMR1EN : public RegisterField<APB2EN, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR1EN, 0U>;
                using Value1 = FieldValue<TMR1EN, 1U>;
            };

            struct SPI1EN : public RegisterField<APB2EN, 12, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI1EN, 0U>;
                using Value1 = FieldValue<SPI1EN, 1U>;
            };

            struct TMR8EN : public RegisterField<APB2EN, 13, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR8EN, 0U>;
                using Value1 = FieldValue<TMR8EN, 1U>;
            };

            struct USART1EN : public RegisterField<APB2EN, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART1EN, 0U>;
                using Value1 = FieldValue<USART1EN, 1U>;
            };

            struct ADC3EN : public RegisterField<APB2EN, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ADC3EN, 0U>;
                using Value1 = FieldValue<ADC3EN, 1U>;
            };

            struct TMR9EN : public RegisterField<APB2EN, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR9EN, 0U>;
                using Value1 = FieldValue<TMR9EN, 1U>;
            };

            struct TMR10EN : public RegisterField<APB2EN, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR10EN, 0U>;
                using Value1 = FieldValue<TMR10EN, 1U>;
            };

            struct TMR11EN : public RegisterField<APB2EN, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR11EN, 0U>;
                using Value1 = FieldValue<TMR11EN, 1U>;
            };

            struct ACCEN : public RegisterField<APB2EN, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<ACCEN, 0U>;
                using Value1 = FieldValue<ACCEN, 1U>;
            };

            struct I2C3EN : public RegisterField<APB2EN, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C3EN, 0U>;
                using Value1 = FieldValue<I2C3EN, 1U>;
            };

            struct USART6EN : public RegisterField<APB2EN, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART6EN, 0U>;
                using Value1 = FieldValue<USART6EN, 1U>;
            };

            struct UART7EN : public RegisterField<APB2EN, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UART7EN, 0U>;
                using Value1 = FieldValue<UART7EN, 1U>;
            };

            struct UART8EN : public RegisterField<APB2EN, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UART8EN, 0U>;
                using Value1 = FieldValue<UART8EN, 1U>;
            };

        };

        struct APB1EN : public Register<0x4002101C, 32, ReadWriteMode>
        {
            struct TMR2EN : public RegisterField<APB1EN, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR2EN, 0U>;
                using Value1 = FieldValue<TMR2EN, 1U>;
            };

            struct TMR3EN : public RegisterField<APB1EN, 1, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR3EN, 0U>;
                using Value1 = FieldValue<TMR3EN, 1U>;
            };

            struct TMR4EN : public RegisterField<APB1EN, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR4EN, 0U>;
                using Value1 = FieldValue<TMR4EN, 1U>;
            };

            struct TMR5EN : public RegisterField<APB1EN, 3, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR5EN, 0U>;
                using Value1 = FieldValue<TMR5EN, 1U>;
            };

            struct TMR6EN : public RegisterField<APB1EN, 4, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR6EN, 0U>;
                using Value1 = FieldValue<TMR6EN, 1U>;
            };

            struct TMR7EN : public RegisterField<APB1EN, 5, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR7EN, 0U>;
                using Value1 = FieldValue<TMR7EN, 1U>;
            };

            struct TMR12EN : public RegisterField<APB1EN, 6, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR12EN, 0U>;
                using Value1 = FieldValue<TMR12EN, 1U>;
            };

            struct TMR13EN : public RegisterField<APB1EN, 7, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR13EN, 0U>;
                using Value1 = FieldValue<TMR13EN, 1U>;
            };

            struct TMR14EN : public RegisterField<APB1EN, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<TMR14EN, 0U>;
                using Value1 = FieldValue<TMR14EN, 1U>;
            };

            struct WWDTEN : public RegisterField<APB1EN, 11, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WWDTEN, 0U>;
                using Value1 = FieldValue<WWDTEN, 1U>;
            };

            struct SPI2EN : public RegisterField<APB1EN, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI2EN, 0U>;
                using Value1 = FieldValue<SPI2EN, 1U>;
            };

            struct SPI3EN : public RegisterField<APB1EN, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI3EN, 0U>;
                using Value1 = FieldValue<SPI3EN, 1U>;
            };

            struct SPI4EN : public RegisterField<APB1EN, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SPI4EN, 0U>;
                using Value1 = FieldValue<SPI4EN, 1U>;
            };

            struct USART2EN : public RegisterField<APB1EN, 17, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART2EN, 0U>;
                using Value1 = FieldValue<USART2EN, 1U>;
            };

            struct USART3EN : public RegisterField<APB1EN, 18, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USART3EN, 0U>;
                using Value1 = FieldValue<USART3EN, 1U>;
            };

            struct UART4EN : public RegisterField<APB1EN, 19, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UART4EN, 0U>;
                using Value1 = FieldValue<UART4EN, 1U>;
            };

            struct UART5EN : public RegisterField<APB1EN, 20, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<UART5EN, 0U>;
                using Value1 = FieldValue<UART5EN, 1U>;
            };

            struct I2C1EN : public RegisterField<APB1EN, 21, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C1EN, 0U>;
                using Value1 = FieldValue<I2C1EN, 1U>;
            };

            struct I2C2EN : public RegisterField<APB1EN, 22, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<I2C2EN, 0U>;
                using Value1 = FieldValue<I2C2EN, 1U>;
            };

            struct USBEN : public RegisterField<APB1EN, 23, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USBEN, 0U>;
                using Value1 = FieldValue<USBEN, 1U>;
            };

            struct CAN1EN : public RegisterField<APB1EN, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN1EN, 0U>;
                using Value1 = FieldValue<CAN1EN, 1U>;
            };

            struct CAN2EN : public RegisterField<APB1EN, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CAN2EN, 0U>;
                using Value1 = FieldValue<CAN2EN, 1U>;
            };

            struct BPREN : public RegisterField<APB1EN, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BPREN, 0U>;
                using Value1 = FieldValue<BPREN, 1U>;
            };

            struct PWCEN : public RegisterField<APB1EN, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PWCEN, 0U>;
                using Value1 = FieldValue<PWCEN, 1U>;
            };

            struct DACEN : public RegisterField<APB1EN, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<DACEN, 0U>;
                using Value1 = FieldValue<DACEN, 1U>;
            };

        };

        struct BPDC : public Register<0x40021020, 32, ReadWriteMode>
        {
            struct LEXTEN : public RegisterField<BPDC, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LEXTEN, 0U>;
                using Value1 = FieldValue<LEXTEN, 1U>;
            };

            struct LEXTSTBL : public RegisterField<BPDC, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<LEXTSTBL, 0U>;
                using Value1 = FieldValue<LEXTSTBL, 1U>;
            };

            struct LEXTBYPS : public RegisterField<BPDC, 2, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LEXTBYPS, 0U>;
                using Value1 = FieldValue<LEXTBYPS, 1U>;
            };

            struct RTCSEL : public RegisterField<BPDC, 8, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<RTCSEL, 0U>;
                using Value1 = FieldValue<RTCSEL, 1U>;
                using Value2 = FieldValue<RTCSEL, 2U>;
                using Value3 = FieldValue<RTCSEL, 3U>;
            };

            struct RTCEN : public RegisterField<BPDC, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RTCEN, 0U>;
                using Value1 = FieldValue<RTCEN, 1U>;
            };

            struct BPDRST : public RegisterField<BPDC, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<BPDRST, 0U>;
                using Value1 = FieldValue<BPDRST, 1U>;
            };

        };

        struct CTRLSTS : public Register<0x40021024, 32, ReadWriteMode>
        {
            struct LICKEN : public RegisterField<CTRLSTS, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LICKEN, 0U>;
                using Value1 = FieldValue<LICKEN, 1U>;
            };

            struct LICKSTBL : public RegisterField<CTRLSTS, 1, 1, ReadMode>
            {
                using Value0 = FieldValue<LICKSTBL, 0U>;
                using Value1 = FieldValue<LICKSTBL, 1U>;
            };

            struct RSTFC : public RegisterField<CTRLSTS, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<RSTFC, 0U>;
                using Value1 = FieldValue<RSTFC, 1U>;
            };

            struct NRSTF : public RegisterField<CTRLSTS, 26, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<NRSTF, 0U>;
                using Value1 = FieldValue<NRSTF, 1U>;
            };

            struct PORRSTF : public RegisterField<CTRLSTS, 27, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<PORRSTF, 0U>;
                using Value1 = FieldValue<PORRSTF, 1U>;
            };

            struct SWRSTF : public RegisterField<CTRLSTS, 28, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<SWRSTF, 0U>;
                using Value1 = FieldValue<SWRSTF, 1U>;
            };

            struct WDTRSTF : public RegisterField<CTRLSTS, 29, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WDTRSTF, 0U>;
                using Value1 = FieldValue<WDTRSTF, 1U>;
            };

            struct WWDTRSTF : public RegisterField<CTRLSTS, 30, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<WWDTRSTF, 0U>;
                using Value1 = FieldValue<WWDTRSTF, 1U>;
            };

            struct LPRSTF : public RegisterField<CTRLSTS, 31, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<LPRSTF, 0U>;
                using Value1 = FieldValue<LPRSTF, 1U>;
            };

        };

        struct AHBRST : public Register<0x40021028, 32, ReadWriteMode>
        {
            struct EMACRST : public RegisterField<AHBRST, 14, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMACRST, 0U>;
                using Value1 = FieldValue<EMACRST, 1U>;
            };

        };

        struct MISC1 : public Register<0x40021030, 32, ReadWriteMode>
        {
            struct HICKCAL_KEY : public RegisterField<MISC1, 0, 8, ReadWriteMode>
            {
            };

            struct CLKOUT_SEL3 : public RegisterField<MISC1, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKOUT_SEL3, 0U>;
                using Value1 = FieldValue<CLKOUT_SEL3, 1U>;
            };

            struct USBBUFS : public RegisterField<MISC1, 24, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USBBUFS, 0U>;
                using Value1 = FieldValue<USBBUFS, 1U>;
            };

            struct HICKDIV : public RegisterField<MISC1, 25, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HICKDIV, 0U>;
                using Value1 = FieldValue<HICKDIV, 1U>;
            };

            struct CLKOUTDIV : public RegisterField<MISC1, 28, 4, ReadWriteMode>
            {
                using Value0 = FieldValue<CLKOUTDIV, 0U>;
                using Value1 = FieldValue<CLKOUTDIV, 1U>;
                using Value2 = FieldValue<CLKOUTDIV, 2U>;
                using Value3 = FieldValue<CLKOUTDIV, 3U>;
                using Value4 = FieldValue<CLKOUTDIV, 4U>;
                using Value5 = FieldValue<CLKOUTDIV, 5U>;
                using Value6 = FieldValue<CLKOUTDIV, 6U>;
                using Value7 = FieldValue<CLKOUTDIV, 7U>;
                using Value8 = FieldValue<CLKOUTDIV, 8U>;
                using Value9 = FieldValue<CLKOUTDIV, 9U>;
                using Value10 = FieldValue<CLKOUTDIV, 10U>;
                using Value11 = FieldValue<CLKOUTDIV, 11U>;
                using Value12 = FieldValue<CLKOUTDIV, 12U>;
                using Value13 = FieldValue<CLKOUTDIV, 13U>;
                using Value14 = FieldValue<CLKOUTDIV, 14U>;
                using Value15 = FieldValue<CLKOUTDIV, 15U>;
            };

        };

        struct MISC2 : public Register<0x40021050, 32, ReadWriteMode>
        {
            struct CLK_TO_TMR : public RegisterField<MISC2, 16, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<CLK_TO_TMR, 0U>;
                using Value1 = FieldValue<CLK_TO_TMR, 1U>;
            };

        };

        struct MISC3 : public Register<0x40021054, 32, ReadWriteMode>
        {
            struct AUTO_STEP_EN : public RegisterField<MISC3, 4, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<AUTO_STEP_EN, 0U>;
                using Value1 = FieldValue<AUTO_STEP_EN, 1U>;
                using Value2 = FieldValue<AUTO_STEP_EN, 2U>;
                using Value3 = FieldValue<AUTO_STEP_EN, 3U>;
            };

            struct HICK_TO_USB : public RegisterField<MISC3, 8, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HICK_TO_USB, 0U>;
                using Value1 = FieldValue<HICK_TO_USB, 1U>;
            };

            struct HICK_TO_SCLK : public RegisterField<MISC3, 9, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<HICK_TO_SCLK, 0U>;
                using Value1 = FieldValue<HICK_TO_SCLK, 1U>;
            };

            struct HEXTDIV : public RegisterField<MISC3, 12, 2, ReadWriteMode>
            {
                using Value0 = FieldValue<HEXTDIV, 0U>;
                using Value1 = FieldValue<HEXTDIV, 1U>;
                using Value2 = FieldValue<HEXTDIV, 2U>;
                using Value3 = FieldValue<HEXTDIV, 3U>;
            };

            struct EMAC_PPS_SEL : public RegisterField<MISC3, 15, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<EMAC_PPS_SEL, 0U>;
                using Value1 = FieldValue<EMAC_PPS_SEL, 1U>;
            };

        };

        struct INTMAP : public Register<0x4002105C, 32, ReadWriteMode>
        {
            struct USB_INT_MAP : public RegisterField<INTMAP, 0, 1, ReadWriteMode>
            {
                using Value0 = FieldValue<USB_INT_MAP, 0U>;
                using Value1 = FieldValue<USB_INT_MAP, 1U>;
            };

        };

    };

} // namespace AT32F407xx_v2
#endif //#if !defined(CRMREGISTERS_HPP)
