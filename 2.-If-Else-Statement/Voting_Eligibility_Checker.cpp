#include <iostream>
using namespace std;
int main(){
    int age=0;
    cout<<"Enter your age: ";
    cin >> age;
    if(age>=18){
        cout<<"You can vote"<<endl;
    } else{
        cout<<"You can't vote"<<endl;
    }
    return 0;
}
