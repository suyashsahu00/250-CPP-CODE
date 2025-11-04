#include <iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter a number: ";
    cin >> num1;
    if (num1 ==0)
    {
        cout<< "Number is neither Positive nor Negative";
    }
    else if (num1>0)
    {
        cout<< "Number is  Positive ";
    }
    else {
        cout<<"Number is Negative";
    }
    return 0;

}