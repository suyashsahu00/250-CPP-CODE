#include <iostream>
using namespace std;

/*
    Find A Generic Root Of the Number
    ==================================
    Example: 123
    123 % 10 = 3  | sum = 0+3 = 3  | 123 / 10 = 12
    12 % 10 = 2   | sum = 3+2 = 5  | 12 / 10 = 1
    1 % 10 = 1    | sum = 5+1 = 6  | 1 / 10 = 0
    → Generic Root calculation using % 9 formula ✓
*/

int main()
{
    int num, originalNum;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    int sum = 0;
    do
    {                                  // num=123          | num=12        | num=1       
        sum += num % 10;               // sum=0+3=3        | sum=3+2=5     | sum=5+1=6   
        num /= 10;                     // 123/10=12        | 12/10=1       | 1/10=0      
    } while (num != 0);                // 12!=0 (true)     | 1!=0 (true)   | 0!=0 (false)

    int genericRoot = (originalNum == 0) ? 0 : ((originalNum % 9 == 0) ? 9 : (originalNum % 9));

    cout << "Generic Root: " << genericRoot << endl;

    return 0;
}
