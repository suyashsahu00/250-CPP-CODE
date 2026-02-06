#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, n, i = 2;//i stated at 2 as 2 terms are already printed.
    cout << "Enter a number in n: ";
    cin >> n;
    cout << a << " " << b << " ";
    while (i < n) // 3<5
    {
        c = a + b; // 0 1 2
        cout<<c<<" ";
        a = b;     // a =1
        b = c;     // b= 2
        i++;
    }

    return 0;
}