#include <iostream>
#include <cstdlib>
#include <string>

int main(int argc, char const *argv[])
{
    std::string sAge;
    std::cout << "Enter your age: ";
    getline(std::cin, sAge);

    int nAge = std::stoi(sAge);

    if(nAge < 5) {
        std::cout << "You are too young to attend school\n";
    } else if(nAge == 5) {
        std::cout << "Go to kindergarden\n";
    } else if (nAge >5 && nAge <18) {
        printf("Go to grade %d\n", nAge-5);
    } else {
        std::cout << "Go to College\n";
    }
    return 0;
}

