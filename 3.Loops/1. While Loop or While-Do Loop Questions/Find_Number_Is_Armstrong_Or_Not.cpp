#include <iostream>
using namespace std;
    // An Armstrong number is a number that is equal to the sum of its own digits, each raised to the power of the total number of digits in that number.
    // 153 = 1^3 + 5^3 +3^3
    // 153 = 1 + 125 + 27
    //153 = 153

    // 153 / 10 = 15 remainder 3
    // 15 / 10 = 1 remainder 5
    // 1 / 10 = 0 remainder 1

    // / - quotient
    // % - remainder
int main(){
    int n, r, sum, temp = 0;
    cout<<"Enter a number: ";
    cin>>n; // Example input: 153

    temp = n; // temp stores original number -> temp=153

    while (n>0) // 153>0 | 15>0 | 1>0 | 0!>0 stop |
    {
        r = n % 10; // r=153%10=3 | 15%10=5 | 1%10=1 |
        sum = sum + (r*r*r); // sum=0+(3^3)=27 | 27+(5^3)=152 | 152+(1^3)=153 |
        n = n / 10; // n=153/10=15 | 15/10=1 | 1/10=0 |
    }

    if (temp == sum) // 153==153 -> true
    {
        cout<<"It's a Armstrong number"; // prints Armstrong
    } else {
        cout<<"It's not a Armstrong number"; // prints Not Armstrong
    }

    return 0;
}