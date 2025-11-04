#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3=0;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;
    if (num1 > num2 && num1 > num3)
    {
        cout<<num1<<" is maximum";
    }else if(num2 > num1 && num2 > num3){
        cout<<num2<<" is maximum";
    }else{
        cout<<num3<<" is maximum";
    }
    
    return 0;
}