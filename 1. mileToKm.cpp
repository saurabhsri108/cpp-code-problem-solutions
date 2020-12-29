#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char const *argv[])
{
    std::string sQuestion("Enter miles to convert: ");
    std::cout << sQuestion;
    std::string s_miles;
    getline(std::cin, s_miles);
    double i_miles = std::stod(s_miles);
    double i_kilometers = 1.60934 * i_miles;
    std::cout << i_miles << " miles equals to " << i_kilometers << " kilometers" << std::endl;
    return 0;
}

