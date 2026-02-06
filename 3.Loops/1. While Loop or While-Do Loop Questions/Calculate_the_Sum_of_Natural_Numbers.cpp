#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, r = 0;
    cout << "Enter a number: ";
    cin >> n; // Example input: 153

    // 153%10=3

    while (n > 0)
    {
        r = n % 10;    // 3 |5
        sum = sum + r; // 0+3 |3+5
        n = n / 10;    // 153/10=15 |15/10=1
    }
    cout << "Sum of natural number is :";
    cout << sum;

    return 0;
}