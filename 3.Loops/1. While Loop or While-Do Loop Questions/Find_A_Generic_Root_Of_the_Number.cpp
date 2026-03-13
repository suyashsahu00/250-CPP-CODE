#include <iostream>
using namespace std;

int main()
{
    int num, originalNum;
    cout << "Enter a number: ";
    cin >> num;

    // Save the original number before the loop changes it
    originalNum = num;

    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    // Generic Root Logic using '?'
    // If the original number was 0, the root is 0.
    // If originalNumber is divisible by 9, the root is 9.
    // Otherwise, the root is originalNumber % 9.
    int genericRoot = (originalNum == 0) ? 0 : ((originalNum % 9 == 0) ? 9 : (originalNum % 9));

    cout << "Generic Root: " << genericRoot << endl;

    return 0;
}