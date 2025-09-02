#include <iostream>
#include <format>
#include <limits>
#include <cctype>


int main()
{
    double celcius, kelvin=0.0, farenheight=0.0;
    std::cout << "Converter from celcius to kelvin & fahrengheit" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "type ctrl + z to quit\n";

    while(true)
    {
        std::cout << "Insert degrees Celcius: ";

        if(!(std::cin >> celcius))
        {
            if(std::cin.eof()) break;
            std::cout << "Invalid input! Please enter a number.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        kelvin = celcius + 273.15;
        farenheight = celcius * 9.0/5.0 + 32.0;
        std::cout << std::format("|{:^15}|{:^15}|{:^15}|\n", "Celcius", "Kelvin", "Fahrenheit");
        std::cout << std::format("|{:^15.5}|{:^15.5}|{:^15.5}|\n", celcius, kelvin, farenheight);
    }
    return 0;
}
