#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    int ans, max;
    max = (a > b) ? a : b;
    // a= 3 , b = 11 , max = 11,22,33...
    for (int i = max; i <= a * b; i += max)
    {
        if ((i % a == 0) && (i % b == 0))
        {
            ans = i;
            break;
        }
    }
}

int main()
{
    int a, b = 0;
    cin >> a >> b;
    cout << lcm(a, b) << "\n";
    cout << "\n";
    return 0;
}