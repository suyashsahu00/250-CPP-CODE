#include <iostream>
using namespace std;

/*
    Check Whether a Number is A Palindrome or Not
    ==============================================
    Example: 121
    121 % 10 = 1  |  rev = 0*10 + 1 = 1    |  121 / 10 = 12
    12 % 10 = 2   |  rev = 1*10 + 2 = 12   |  12 / 10 = 1
    1 % 10 = 1    |  rev = 12*10 + 1 = 121 |  1 / 10 = 0
    → 121 == 121 (Palindrome) ✓
*/

int main(){
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n; 

    int reverse = 0; 
    int rem;         
    int temp = n;    

    do {                               // n=121            | n=12          | n=1         
        rem = n % 10;                  // 121%10=1         | 12%10=2       | 1%10=1      
        reverse = reverse * 10 + rem;  // rev=0*10+1=1     | rev=1*10+2=12 | rev=12*10+1=121
        n = n / 10;                    // 121/10=12        | 12/10=1       | 1/10=0      
    } while(n!=0);                     // 12!=0 (true)     | 1!=0 (true)   | 0!=0 (false)

    if(temp == reverse){
        cout<<temp<<" is a palindrome number"<<endl;
    } else {
        cout<<temp<<" is not a palindrome number"<<endl;
    }
}
