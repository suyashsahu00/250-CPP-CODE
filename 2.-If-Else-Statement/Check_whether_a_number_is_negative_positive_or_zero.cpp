#include <iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter a number: ";
    cin>>num1;
    if (num1>1)
    {
        cout<<num1<<" is positve"<<endl;
    }
    else if (num1<1)
    {
        cout<<num1<<" is negative"<<endl;
    }else{
        cout<<num1<<" is neither positve nor negative"<<endl;
    }
    
    
    return 0;
}