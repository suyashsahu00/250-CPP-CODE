#include <iostream>
#include <cmath> // Required for the pow() function

using namespace std;

int main()
{
    double base, exponent;

    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    // Use the pow() function to calculate the result
    double result = pow(base, exponent);

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}