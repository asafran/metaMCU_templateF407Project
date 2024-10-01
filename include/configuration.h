#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include "gpioaregisters.hpp"

#include "arterypin.hpp"
#include "pin.hpp"

using namespace AT32F407xx_v2;

using LedPin1 = ArteryPin<GPIOA, 16>;
using LedPin2 = ArteryPin<GPIOA, 15>;

template <typename Pin>
struct PinsConfiguration : StartupConfiguration<FLOAT_INPUT> {};

template <>
struct PinsConfiguration<LedPin1> : StartupConfiguration<PULLUP_INPUT> {};

template <>
struct PinsConfiguration<LedPin2>
{
    constexpr static PinConfiguration Mode = ANALOG_INPUT;
    constexpr static PinStrenght Strenght = NORMAL_STR;
};


#endif // CONFIGURATION_H
