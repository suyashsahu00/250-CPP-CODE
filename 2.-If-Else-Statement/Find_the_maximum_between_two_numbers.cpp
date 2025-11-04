#include <iostream>
using namespace std;
int main(){
    int num1,num2=0;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    if (num1>num2){
        cout<<num1<<" is maximum"<<endl;
    }else{
        cout<<num2<<" is maximum"<<endl;
    }
    return 0;
}