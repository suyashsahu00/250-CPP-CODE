#include <iostream>
using namespace std;

/*
    Count the Number of Digits of an Integer
    =========================================
    Example: 123
    count = 0 + 1 = 1  |  123 / 10 = 12
    count = 1 + 1 = 2  |  12 / 10 = 1
    count = 2 + 1 = 3  |  1 / 10 = 0
    → total digits = 3 ✓
*/

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num; 

    int digitCount = 0;
    
    do
    {                                  // num=123          | num=12        | num=1       
        digitCount++;                  // count=1          | count=2       | count=3     
        num = num / 10;                // 123/10=12        | 12/10=1       | 1/10=0      
    } while (num != 0);                // 12!=0 (true)     | 1!=0 (true)   | 0!=0 (false)

    cout << "No. of digits in the integer: " << digitCount << endl;

    return 0;
}
