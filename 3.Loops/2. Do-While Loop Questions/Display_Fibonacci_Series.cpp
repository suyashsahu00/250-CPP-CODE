#include <iostream>
using namespace std;
/*
    Display Fibonacci Series
    =========================
    Example: n = 5 (first 5 terms)
    Term 1: 0
    Term 2: 1
    c = 0+1 = 1   | a=1, b=1 | i=3
    c = 1+1 = 2   | a=1, b=2 | i=4
    c = 1+2 = 3   | a=2, b=3 | i=5
    → 0 1 1 2 3 ✓
*/

int main()
{
    int a = 0, b = 1, c, n, i = 2;
    cout << "Enter a number in n: ";
    cin >> n;
    cout << a << " " << b << " ";
    
    if (i < n) 
    {
        do 
        {                               // i=2          | i=3          | i=4          
            c = a + b;                  // c=0+1=1      | c=1+1=2      | c=1+2=3      
            cout<<c<<" ";               // print 1      | print 2      | print 3      
            a = b;                      // a=1          | a=1          | a=2          
            b = c;                      // b=1          | b=2          | b=3          
            i++;                        // i=3          | i=4          | i=5          
        } while (i < n);                // 3<5 (true)   | 4<5 (true)   | 5<5 (false)  
    }

    return 0;
}
