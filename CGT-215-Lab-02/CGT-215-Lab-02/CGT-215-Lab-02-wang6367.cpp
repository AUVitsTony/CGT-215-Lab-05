// CGT-215-Lab-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std; // Lets us write cout and cin instead of std::cout and std::cin

int main()
{
    // Create three float variables.
    // A and B will store the numbers entered by the user.
    // x will store the final answer.
    float A;
    float B;
    float x;

    // Greeting and showing the equation we are going to solve.
    cout << "Hello, my name is Tony and I'm going to solve the equation:" << endl;
    cout << "Ax + B = 0" << endl;
    cout << "For x" << endl;
    cout << endl;

    // Ask the user to enter a value for A.
    cout << "Please enter a value for A: ";
    cin >> A;

    // Ask the user to enter a value for B.
    cout << "Please enter a value for B: ";
    cin >> B;

    cout << endl;

    // Show the equation again, but use the numbers that the user entered for A and B.
    cout << "Solving " << A << "x + " << B << " = 0 for x..." << endl;

    cout << endl;

	//solving for x using the formula x = -B / A
    x = -B / A;

    // Display the final answer.
    cout << "The answer is:" << endl;
    cout << "x = " << x << endl;

    return 0; // Ends the program
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

