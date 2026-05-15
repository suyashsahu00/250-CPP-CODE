#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, n, i = 2;
    cout << "Enter a number in n: ";
    cin >> n;
    cout << a << " " << b << " ";
    
    if (i < n) 
    {
        do 
        {
            c = a + b; 
            cout<<c<<" ";
            a = b;     
            b = c;     
            i++;
        } while (i < n);
    }

    return 0;
}
