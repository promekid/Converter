#include <iostream>

using namespace std;

int main()
{
    double celcius, kelvin=0.0, farenheight=0.0;
    std::cout << "Converter from celcius to kelvin & fahrengheit" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Insert degrees Celcius: ";
    std::cin >> celcius;
    kelvin = celcius + 273,15;
    farenheight = celcius * (9/5) + 32;
    std::cout << std::format("|{:^15}|{:^15}|{:^15}|\n", "Celcius", "Kelvin", "Fahrenheit");
    std::cout << std::format("|{:^15}|{:^15}|{:^15}|\n", celcius, kelvin, farenheight);
    return 0;
}
