#include <iostream>
using namespace std;
int main(){
    int num1=0;
    cout<<"Enter a number: ";
    cin>>num1;
    if (num1 %2 ==0){
        cout<<num1<<" is divisible by 2";
    }else{
        cout<<num1<<" is not divisble by 2";
    }

    return 0;
}