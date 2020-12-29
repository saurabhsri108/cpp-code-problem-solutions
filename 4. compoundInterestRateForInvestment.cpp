#include <cstdlib>
#include <iostream>
#include <vector>
#include <numeric>

std::vector<int> Range(int start, int max, int step);

int main(int argc, char const *argv[])
{
    double investment = 0.0, interestRate = 0.0;

    std::cout << "How much initial investment? : ";
    std::cin >> investment;

    std::cout << "Interest Rate (%) : ";
    std::cin >> interestRate;

    interestRate *= 0.01; // Convert it from Percentage
    for(auto y: Range(1, 10, 1)){
        investment += (investment * interestRate);
    }

    std::cout << "Value after 10 years: " << investment << "\n";

    return 0;
}

std::vector<int> Range(int start, int max, int step){
    int i = start;

    std::vector<int> range;

    while(i <= max) {
        range.push_back(i);
        i += step;
    }

    return range;
}
