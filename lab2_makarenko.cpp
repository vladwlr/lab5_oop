// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "fuzzynumber.h"
#include <iostream>

int main() {
    FuzzyNumber a, b;

    std::cout << "Enter values for fuzzy number A:" << std::endl;
    a.Read();

    std::cout << "Enter values for fuzzy number B:" << std::endl;
    b.Read();

    std::cout << "Number A: ";
    a.Display();
    std::cout << "Number B: ";
    b.Display();

    FuzzyNumber sum = a.add(b);
    std::cout << "Sum: ";
    sum.Display();

    FuzzyNumber diff = a.sub(b);
    std::cout << "Difference: ";
    diff.Display();

    FuzzyNumber prod = a.mul(b);
    std::cout << "Product: ";
    prod.Display();

    FuzzyNumber quot = a.div(b);
    std::cout << "Quotient: ";
    quot.Display();

    FuzzyNumber inv = a.inverse();
    std::cout << "Inverse of A: ";
    inv.Display();

    if (a.equal(b)) {
        std::cout << "A and B are equal." << std::endl;
    }
    else {
        std::cout << "A and B are not equal." << std::endl;
    }

    return 0;
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
