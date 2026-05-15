#include <iostream>
using namespace std;
int main(){
    int n, r, sum = 0, temp = 0;
    cout<<"Enter a number: ";
    cin>>n; 

    temp = n; 

    do 
    {
        r = n % 10; 
        sum = sum + (r*r*r); 
        n = n / 10; 
    } while (n>0);

    if (temp == sum) 
    {
        cout<<"It's a Armstrong number"; 
    } else {
        cout<<"It's not a Armstrong number"; 
    }

    return 0;
}
