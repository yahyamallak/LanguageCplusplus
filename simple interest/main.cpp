#include <iostream>

int main()
{
    float principle, rate, time, result;

    std::cout << "Enter the principle : \n";
    std::cin >> principle;

    std::cout << "Enter the rate : \n";
    std::cin >> rate;

    std::cout << "Enter the time : \n";
    std::cin >> time;

    result = principle * (1 + rate * time);

    std::cout << "The simple interest : " << result;


    return 0;
}
