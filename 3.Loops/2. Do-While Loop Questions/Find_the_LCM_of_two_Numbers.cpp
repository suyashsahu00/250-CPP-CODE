#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    int ans = 0, max;
    max = (a > b) ? a : b;
    int i = max;
    do
    {
        if ((i % a == 0) && (i % b == 0))
        {
            ans = i;
            break;
        }
        i += max;
    } while (i <= a * b);
    return ans;
}

int main()
{
    int a, b = 0;
    cin >> a >> b;
    cout << lcm(a, b) << "\n";
    cout << "\n";
    return 0;
}
