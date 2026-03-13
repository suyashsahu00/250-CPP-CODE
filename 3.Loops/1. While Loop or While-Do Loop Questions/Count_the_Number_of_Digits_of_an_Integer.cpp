#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num; // Example input: 123

    int digitCount = 0;

    // Handle the case where the number is 0
    if (num == 0)
    {
        digitCount = 1;
    }
    else
    {
        // Loop to count digits
        while (num != 0)
        {
            digitCount++;      // 1 | 2 | 3
            num = num / 10;    // 12 | 1 | 0
        }
    }

    cout << "No. of digits in the integer: " << digitCount << endl;

    return 0;
}