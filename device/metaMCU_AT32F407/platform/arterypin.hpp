#ifndef ARTERYPIN_HPP
#define ARTERYPIN_HPP

#include "configutils.hpp"
#include "register.hpp"
#include "fields.hpp"
#include "pin.hpp"

namespace AT32F407xx_v2 {
    template <unsigned int pinNum>
    concept LowConfigRegister = requires
    {
        (pinNum < 8) == true;
    };

    template <unsigned int pinNum>
    concept HighConfigRegister = requires
    {
        (pinNum >= 8) && (pinNum < 16) == true;
    };

    template <unsigned int pinNum>
    concept InRange = HighConfigRegister<pinNum> || LowConfigRegister<pinNum>;

    template <typename GPIO>
    concept CompatibleGPIO = requires
    {
        typename GPIO::CFGLR;
        typename GPIO::IDT;
        typename GPIO::ODT;
        typename GPIO::SCR;
        typename GPIO::HDRV;
    };

    //общий шаблон
    template<typename GPIO, unsigned int pinNum>
        requires InRange<pinNum>
    struct ArteryConfigurationFields;

    //"специализация" для младших пинов через концепт
    template<typename GPIO, unsigned int pinNum>
        requires LowConfigRegister<pinNum>
    struct ArteryConfigurationFields<GPIO, pinNum>
    {
        using CFGR = GPIO::CFGLR;
        using IOFC = RegisterField<CFGR, pinNum * 4 + 2, 2, ReadWriteMode>;
        using IOMC = RegisterField<CFGR, pinNum * 4, 2, ReadWriteMode>;
    };

    //"специализация" для старших пинов через концепт
    template<typename GPIO, unsigned int pinNum>
        requires HighConfigRegister<pinNum>
    struct ArteryConfigurationFields<GPIO, pinNum>
    {
        using CFGR = GPIO::CFGHR;
        using IOFC = RegisterField<CFGR, (pinNum - 8) * 4 + 2, 2, ReadWriteMode>;
        using IOMC = RegisterField<CFGR, (pinNum - 8) * 4, 2, ReadWriteMode>;
    };

    struct SpecializationKey{};

    template<typename GPIO, unsigned int pinNum>
        requires InRange<pinNum>
    struct ArteryPin
    {
    private:
        using IOFC = ArteryConfigurationFields<GPIO, pinNum>::IOFC;
        using IOMC = ArteryConfigurationFields<GPIO, pinNum>::IOMC;
        using IDT = RegisterField<typename GPIO::IDT, pinNum, 1, ReadMode>;
        using ODT = RegisterField<typename GPIO::ODT, pinNum, 1, ReadWriteMode>;
        using IOCB = RegisterField<typename GPIO::SCR, pinNum + 16, 1, WriteMode>;
        using IOSB = RegisterField<typename GPIO::SCR, pinNum, 1, WriteMode>;
        using HDRV = RegisterField<typename GPIO::HDRV, pinNum, 1, ReadWriteMode>;

        using InputModeValue = FieldValue<IOMC, 0U>;
        using LargeOutputModeValue = FieldValue<IOMC, 1U>;
        using NormalOutputModeValue = FieldValue<IOMC, 2U>;

    public:
        using SpecializationKey = SpecializationKey;

        using AnalogModeValue = Values<FieldValue<IOFC, 0U>, InputModeValue>;
        using FloatingModeValue = Values<FieldValue<IOFC, 1U>, InputModeValue>;
        using PullUpDownModeValue = Values<FieldValue<IOFC, 2U>, InputModeValue>;
        using PushPullModeValue = FieldValue<IOFC, 0U>;
        using OpenDrainModeValue = FieldValue<IOFC, 1U>;
        using AltPushPullModeValue = FieldValue<IOFC, 2U>;
        using AltOpenDrainModeValue = FieldValue<IOFC, 3U>;

        using ReadValue = FieldValue<IDT, 1U>;

        using OutputField = ODT;
        using LowOutputValue = FieldValue<ODT, 0U>;
        using HighOutputValue = FieldValue<ODT, 1U>;
        using PullUpValue = HighOutputValue;
        using PullDownValue = LowOutputValue;

        using ClearOutputValue = FieldValue<IOCB, 1U>;
        using SetOutputValue = FieldValue<IOSB, 1U>;

        using NormalStrValue = FieldValue<HDRV, 0U>;
        using MaximumStrValue = FieldValue<HDRV, 1U>;
    };
} // namespace artery

template <typename Pin>
struct PinsConfiguration<Pin, AT32F407xx_v2::SpecializationKey> : StartupConfiguration<PULLUP_INPUT> {};

#endif // ARTERYPIN_HPP
