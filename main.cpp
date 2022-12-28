/*
 * Geometric
 * Subject: Calculate area and perimeter of given sides.
 * Author: @niftycode
 * Date created: December 28th, 2022
 * Date modified: -
 */

#include <iostream>
#include "rectangle.h"

int main() {

    std::uint32_t length;
    std::uint32_t width;

    std::cout << "Enter the length: " << '\n';
    std::cin >> length;
    std::cout << "Enter the width: " << '\n';
    std::cin >> width;

    std::uint32_t area = calculate_area(length, width);
    std::uint32_t perimeter = calculate_perimeter(length, width);

    std::cout << "Area = " << area << std::endl;
    std::cout << "Perimeter = " << perimeter << std::endl;

    return 0;
}
