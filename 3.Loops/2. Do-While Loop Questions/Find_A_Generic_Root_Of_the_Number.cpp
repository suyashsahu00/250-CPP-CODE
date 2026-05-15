#include <iostream>
using namespace std;

int main()
{
    int num, originalNum;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    int sum = 0;
    do
    {
        sum += num % 10;
        num /= 10;
    } while (num != 0);

    int genericRoot = (originalNum == 0) ? 0 : ((originalNum % 9 == 0) ? 9 : (originalNum % 9));

    cout << "Generic Root: " << genericRoot << endl;

    return 0;
}
