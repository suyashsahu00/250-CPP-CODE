#include <iostream>
using namespace std;

/*
    Find the GCD (Greatest Common Divisor) of Two Numbers
    =====================================================
    Example: num1 = 4, num2 = 6
    i = 1 | 4%1==0 && 6%1==0 (True)  -> gcd = 1
    i = 2 | 4%2==0 && 6%2==0 (True)  -> gcd = 2
    i = 3 | 4%3!=0 (False)           -> gcd = 2
    i = 4 | 4%4==0 && 6%4!=0 (False) -> gcd = 2
    
    -> Final GCD = 2 ✓
*/

int main()
{
    int num1;
    int num2;
    int gcd = 1;

    cout << "Enter first number: ";
    cin >> num1; // Example input: 4
    
    cout << "Enter second number: ";
    cin >> num2; // Example input: 6

    // Loop from 1 up to the smaller of the two numbers
    for (int i = 1; i <= num1 && i <= num2; i++)  // i=1               | i=2               | i=3
    {
        if (num1 % i == 0 && num2 % i == 0)       // 4%1==0 & 6%1==0   | 4%2==0 & 6%2==0   | 4%3!=0 (False)
        {
            gcd = i;                              // gcd = 1           | gcd = 2           | (No change)
        }
    }

    cout << "GCD of " << num1 << " & " << num2 << " is " << gcd << endl;
    
    return 0;
}