#include <cstdint>
#include "rectangle.h"

std::uint32_t calculate_area(std::uint32_t a, std::uint32_t b)
{
    std::uint32_t result = a * b;
    return result;
}

std::uint32_t calculate_perimeter(std::uint32_t a, std::uint32_t b)
{
    std::uint32_t result = 2 * (a + b);
    return result;
}
