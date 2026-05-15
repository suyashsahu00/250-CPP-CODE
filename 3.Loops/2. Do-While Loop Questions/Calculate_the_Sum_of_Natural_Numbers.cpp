#include <iostream>
using namespace std;
/*
    Calculate the Sum of Digits of a Number
    ========================================
    Example: 153
    153 % 10 = 3  |  sum = 0 + 3 = 3  |  153 / 10 = 15
    15 % 10 = 5   |  sum = 3 + 5 = 8  |  15 / 10 = 1
    1 % 10 = 1    |  sum = 8 + 1 = 9  |  1 / 10 = 0
    → sum = 9 ✓
*/

int main()
{
    int n, sum = 0, r = 0;
    cout << "Enter a number: ";
    cin >> n; // Example input: 153

    do
    {                                  // n=153            | n=15          | n=1         
        r = n % 10;                    // 153%10=3         | 15%10=5       | 1%10=1      
        sum = sum + r;                 // sum=0+3=3        | sum=3+5=8     | sum=8+1=9   
        n = n / 10;                    // 153/10=15        | 15/10=1       | 1/10=0      
    } while (n > 0);                   // 15>0 (true)      | 1>0 (true)    | 0>0 (false) 

    cout << "Sum of natural number is :";
    cout << sum;

    return 0;
}
