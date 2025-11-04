#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3=0;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter Second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;
    if(num1 >= num2 && num1 >= num3){ // 2,1,4
        cout<< num1<< " is greatest";
    }

    else if (num2>= num1 && num2 >= num3)
    {
        cout<< num2<< " is greatest";
    }
    else{
        cout<< num3<< " is greatest";
    }
    
    return 0;
}