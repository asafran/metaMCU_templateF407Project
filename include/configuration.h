#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include "gpioaregisters.hpp"

#include "arterypin.hpp"

using namespace AT32F407xx_v2;

using LedPin1 = AT32F407xx_v2::ArteryPin<GPIOA, 16>;
using LedPin2 = AT32F407xx_v2::ArteryPin<GPIOA, 15>;

template <>
struct PinsConfiguration<LedPin1> : StartupConfiguration<PULLUP_INPUT> {};

template <>
struct PinsConfiguration<LedPin2>
{
    constexpr static PinConfiguration Mode = ANALOG_INPUT;
    constexpr static PinStrenght Strenght = NORMAL_STR;
    constexpr static PinPolicy Policy = PIN_CONFIGURABLE;
};


#endif // CONFIGURATION_H
