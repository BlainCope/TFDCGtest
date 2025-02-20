#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    TFDCG                       |
 * | Version: 1                           |
 * | Date:    08/22/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BasicTypes
{
    /**
     * 
     * Size -> 0x0000
     */
    template<typename TEnum>
    class TEnumAsByte
    {
    private:
        uint8_t                                                      _value;

    public:
        TEnumAsByte()
        {

        }
        TEnumAsByte(TEnum value)
        {
            _value = static_cast<uint8_t>(value);
        }
        TEnumAsByte(int32_t value)
        {
            _value = static_cast<uint8_t>(value);
        }
        TEnumAsByte(uint8_t value)
        {
            _value = value;
        }
        operator TEnum() const
        {
            return (TEnum)_value;
        }
        TEnum GetValue() const
        {
            return (TEnum)_value;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
