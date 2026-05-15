#include <iostream>
using namespace std;

/*
    Reverse a Number (storing in variable)
    =======================================
    Example: 123
    123 % 10 = 3  | prev = 0*10 + 3 = 3    | 123 / 10 = 12
    12 % 10 = 2   | prev = 3*10 + 2 = 32   | 12 / 10 = 1
    1 % 10 = 1    | prev = 32*10 + 1 = 321 | 1 / 10 = 0
    → Reversed = 321 ✓
*/

int main()
{
    int prev = 0;
    int num = 0;
    cout << "Enter a number: ";
    cin >> num; // Example input: 123

    do
    {                                  // num=123          | num=12        | num=1       
        int r = num % 10;              // 123%10=3         | 12%10=2       | 1%10=1      
        prev = prev * 10 + r;          // prev=0*10+3=3    | prev=3*10+2=32| prev=32*10+1=321
        num = num / 10;                // 123/10=12        | 12/10=1       | 1/10=0      
    } while (num != 0);                // 12!=0 (true)     | 1!=0 (true)   | 0!=0 (false)

    cout << "Reversed Number is: " << prev << endl;

    return 0;
}
