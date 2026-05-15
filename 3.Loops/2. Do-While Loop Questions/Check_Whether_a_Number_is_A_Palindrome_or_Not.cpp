#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n; 

    int reverse = 0; 
    int rem;         
    int temp = n;    

    do {
        rem = n % 10;                
        reverse = reverse * 10 + rem; 
        n = n / 10;                  
    } while(n!=0);

    if(temp == reverse){
        cout<<temp<<" is a palindrome number"<<endl;
    } else {
        cout<<temp<<" is not a palindrome number"<<endl;
    }
}
