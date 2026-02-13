//palidron numbeer 212, 121,555

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n; // Input the number from user

    int reverse = 0; // Variable to store the reversed number
    int rem;         // Variable to store the remainder (last digit)
    int temp = n;    // Store the original number in a temporary variable because 'n' will become 0

    // Loop to reverse the number
    while(n!=0){
        rem = n % 10;                // Get the last digit
        reverse = reverse * 10 + rem; // Append the digit to the reversed number
        n = n / 10;                  // Remove the last digit from 'n'
    }

    // Check if the original number (temp) is equal to the reversed number
    if(temp == reverse){
        cout<<temp<<" is a palindrome number"<<endl;
    } else {
        cout<<temp<<" is not a palindrome number"<<endl;
    }
}

