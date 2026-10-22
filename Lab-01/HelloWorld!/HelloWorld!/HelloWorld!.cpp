// HelloWorld!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int main()
{
	std::cout << "---Task 1---" << std::endl;

	std::cout << "Hello world! \n";

    std::cout << "---Task 2 and 3---" << std::endl;

    int z, y;
    std::cout << "z = "; std::cin >> z;
    std::cout << "y = "; std::cin >> y;
    int result = z + y;
    std::cout << "result = " << result << std::endl;

    std::cout << "---Task 4---" << std::endl;

    bool heaterState;
    std::string message;
    std::cout << "Type 1 to switch the heater on \n" << "Type 0 to switch the heater off" << std::endl;
    std::cin >> heaterState;
    std::cout << (heaterState ? "It's hot!" : "It's cold!") << std::endl;

    std::cout << "---Task 5---" << std::endl;

    double a = 0, b = 0;
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;

    if (a == 0 and b == 0)
    {
        std::cout << "Any x is the solution" << std::endl;
    }
    else if (a == 0)
    {
        std::cout << "Something is wrong..." << std::endl;
    }
    else
    {
        double x = -b / a;
        std::cout << "x = " << x << std::endl;
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
