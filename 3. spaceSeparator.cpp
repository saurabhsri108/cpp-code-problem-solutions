#include <sstream>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>


int main(int argc, char const *argv[])
{
    std::string sCal;
    std::cout << "Enter the two numbers to perform desired operation [+, -, *, /, %] (Example: 5 + 6): ";
    getline(std::cin, sCal);

    std::vector<std::string> vCal;
    std::stringstream ssCal(sCal);
    std::string sSymbols;
    char charSeparator = ' ';

    while(getline(ssCal, sSymbols, charSeparator)){
        vCal.push_back(sSymbols);
    }

    double num1 = std::stod(vCal[0]);
    double num2 = std::stod(vCal[2]);

    std::string operation = vCal[1];

    if(operation == "+"){
        std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1+num2 << std::endl;
    } else if(operation == "-"){
        std::cout << "The difference of " << num1 << " and " << num2 << " is " << num1-num2 << std::endl;
    } else if(operation == "*"){
        std::cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1*num2 << std::endl;
    } else if(operation == "/"){
        std::cout << "The division of " << num1 << " by " << num2 << " is " << num1/num2 << std::endl;
    }
    return 0;
}
