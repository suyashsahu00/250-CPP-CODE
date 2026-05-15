#include <iostream>
using namespace std;
/*
    Find Number Is Armstrong Or Not
    ================================
    Example: 153
    153 % 10 = 3  | sum = 0 + 3^3 = 27    | 153 / 10 = 15
    15 % 10 = 5   | sum = 27 + 5^3 = 152  | 15 / 10 = 1
    1 % 10 = 1    | sum = 152 + 1^3 = 153 | 1 / 10 = 0
    → 153 == 153 (Armstrong) ✓
*/

int main(){
    int n, r, sum = 0, temp = 0;
    cout<<"Enter a number: ";
    cin>>n; 

    temp = n; 

    do 
    {                                  // n=153            | n=15          | n=1         
        r = n % 10;                    // 153%10=3         | 15%10=5       | 1%10=1      
        sum = sum + (r*r*r);           // sum=0+27=27      | sum=27+125=152| sum=152+1=153
        n = n / 10;                    // 153/10=15        | 15/10=1       | 1/10=0      
    } while (n>0);                     // 15>0 (true)      | 1>0 (true)    | 0>0 (false) 

    if (temp == sum) 
    {
        cout<<"It's a Armstrong number"; 
    } else {
        cout<<"It's not a Armstrong number"; 
    }

    return 0;
}
