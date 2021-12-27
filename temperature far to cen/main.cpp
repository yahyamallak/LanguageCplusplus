#include <iostream>

int main() {

    float temperatue, result;

    std::cout << "Enter temperature in Farenheit : ";
    std::cin >> temperatue;

    result = (temperatue - 32) * 5/9;

    std::cout << "The temperature in centigrade : ";
    std::cout << result;

    return 0;

}