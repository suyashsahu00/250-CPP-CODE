#include <iostream>
using namespace std;

/*
    Find the LCM of two Numbers
    ============================
    Example: a=3, b=11
    max = 11
    i=11 | 11%3 != 0                 | i += 11 (i=22)
    i=22 | 22%3 != 0                 | i += 11 (i=33)
    i=33 | 33%3 == 0 && 33%11 == 0   | ans = 33, break
    → LCM is 33 ✓
*/

int lcm(int a, int b)
{
    int ans = 0, max;
    max = (a > b) ? a : b;
    int i = max;
    do
    {                                  // i=11             | i=22          | i=33        
        if ((i % a == 0) && (i % b == 0)) // 11%3!=0       | 22%3!=0       | 33%3==0(true)
        {
            ans = i;                   //                  |               | ans=33      
            break;                     //                  |               | break loop  
        }
        i += max;                      // i=11+11=22       | i=22+11=33    |             
    } while (i <= a * b);              // 22<=33 (true)    | 33<=33 (true) |             
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
