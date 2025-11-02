// | Data Type              | Size (Bytes) | Range                                                   |
// | ---------------------- | ------------ | ------------------------------------------------------- |
// | signed int             | 4            | -2,147,483,648 to 2,147,483,647                         |
// | unsigned int           | 4            | 0 to 4,294,967,295                                      |
// | short int              | 2            | -32,768 to 32,767                                       |
// | unsigned short int     | 2            | 0 to 65,535                                             |
// | long int               | 4            | -2,147,483,648 to 2,147,483,647                         |
// | unsigned long int      | 4            | 0 to 4,294,967,295                                      |
// | long long int          | 8            | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
// | unsigned long long int | 8            | 0 to 18,446,744,073,709,551,615                         |
// | signed char            | 1            | -128 to 127                                             |
// | unsigned char          | 1            | 0 to 255                                                |
// | float                  | 4            | 1.2E-38 to 3.4E+38                                      |
// | double                 | 8            | 2.3E-308 to 1.7E+308                                    |
// | long double            | 12 or 16     | 3.4E-4932 to 1.1E+4932                                  |
// | bool                   | 1            | true or false                                           |
// | wchar_t                | 2 or 4       | 1 wide character                                        |

#include <iostream>
using namespace std;
int main()
{
    int number;
    unsigned long long factorial = 1;
    cout << " Enter the number: ";
    cin >> number;
    if (number < 0)
    {
        cout << "Cannot compute factorial for negative numbers" << endl;
        return 1;
    }
    if (number > 20)
    {
        cout << "number is to large - would cause overflow";
        return 1;
    }
    if (number == 0 || number == 1)
    {
        factorial = 1;
    }
    else
    {
        for (int num = number; num > 1; num--)
        {
            factorial *= num;
        }
    }
    cout << number << "! = " << factorial << endl;

    return 0;
}