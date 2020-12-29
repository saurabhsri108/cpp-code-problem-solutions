#include <iostream>
#include <vector>
#include <sstream>
#include <cstdlib>

std::vector<int> Range(int start, int max, int step);

// My Solution - 1
// int main(int argc, char const *argv[])
// {
//     int t_length;
//     std::cout << "How tall is the tree : ";
//     std::cin >> t_length;
//     int t_width = t_length - 1;
//     int t_height = t_width;
//     for (auto y : Range(1, t_length, 1))
//     {
//         for (int i = 0; i < t_width; i++)
//         {
//             std::cout << " ";
//         }
//         for (int i = 1; i < 2 * y; i++)
//         {
//             std::cout << "*";
//         }
//         std::cout << "\n";
//         t_width--;
//     }

//     for (int i = 0; i < t_height; i++)
//     {
//         std::cout << " ";
//     }
//     std::cout << "*";

//     return 0;
// }

// Improved Solution - 2

// int main(int argc, char const *argv[])
// {
//     std::cout << "How tall is the tree : ";
//     int treeHeight = 0, spaces = 0, stars = 1, stumpspaces = 0;
//     std::cin >> treeHeight;
//     spaces = treeHeight - 1;
//     stumpspaces = spaces;

//     while (treeHeight != 0)
//     {
//         for (auto x : Range(1, spaces, 1))
//         {
//             std::cout << " ";
//         }
//         for (auto x : Range(1, stars, 1))
//         {
//             std::cout << "*";
//         }
//         std::cout << "\n";
//         treeHeight--;
//         spaces--;
//         stars += 2;
//     }

//     for (auto x : Range(1, stumpspaces, 1))
//     {
//         std::cout << " ";
//     }
//     std::cout << "*";
//     return 0;
// }

// 3. Exception Handling
// int main()
// {
//     double num1 = 0, num2 = 0;
//     std::cout << "Enter number 1 : ";
//     std::cin >> num1;
//     std::cout << "Enter number 2 : ";
//     std::cin >> num2;

//     try
//     {
//         if (num2 == 0)
//         {
//             throw "Division by zero is not possible";
//         }
//         else
//         {
//             printf("%.1f / %.1f = %.2f", num1, num2, (num1 / num2));
//         }
//     }

//     catch (const char *exp)
//     {
//         std::cout << "Error : " << exp << "\n";
//     }
// }

// 4. Exception via runtime_error
// int main()
// {
//     try
//     {
//         std::cout << "Throwing exception\n";
//         throw std::runtime_error("Error Occurred");
//         std::cout << "Can you print me?\n"; // This won't print if error occurs
//     }
//     catch (std::exception &exp)
//     {
//         std::cout << "Handled Exception : " << exp.what() << "\n";
//     }
//     catch (...) //throw all
//     {
//         std::cout << "All other error handled here";
//     }
// }

// 5. Random Number Game
#include <ctime>

int main()
{
    srand(time(NULL));
    int secret_num = std::rand() % 11;
    int guess = 0;

    while (true)
    {
        std::cout << "Guess the number : ";
        std::cin >> guess;
        if (guess > secret_num)
            std::cout << "Too Big\n";
        if (guess < secret_num)
            std::cout << "Too small\n";
        if (secret_num == guess)
            break;
    }

    // do
    // {
    //     std::cout << "Guess the number : ";
    //     std::cin >> guess;
    //     if (guess > secret_num)
    //         std::cout << "Too Big\n";
    //     if (guess < secret_num)
    //         std::cout << "Too small\n";
    // } while (secret_num != guess);

    std::cout << "Correctly Guessed!";
}

std::vector<int> Range(int start, int max, int step)
{
    int i = start;

    std::vector<int> range;

    while (i <= max)
    {
        range.push_back(i);
        i += step;
    }

    return range;
}