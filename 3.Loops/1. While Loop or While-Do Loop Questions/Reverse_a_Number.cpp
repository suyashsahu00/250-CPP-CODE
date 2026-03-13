#include <iostream>
using namespace std;

int main()
{
    int prev = 0;
    int num = 0;
    cout << "Enter a number: ";
    cin >> num; // Example input: 123

    while (num != 0)
    {
        int r = num % 10;     // 3 | 2 | 1
        prev = prev * 10 + r; // 3 | 32 | 321
        num = num / 10;       // 12 | 1 | 0
    }

    cout << "Reversed Number is: " << prev << endl;

    return 0;
}