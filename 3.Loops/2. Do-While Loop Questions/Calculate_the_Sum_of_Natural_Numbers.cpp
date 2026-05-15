#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, r = 0;
    cout << "Enter a number: ";
    cin >> n; // Example input: 153

    do
    {
        r = n % 10;    
        sum = sum + r; 
        n = n / 10;    
    } while (n > 0);

    cout << "Sum of natural number is :";
    cout << sum;

    return 0;
}
