#include <iostream>
using namespace std;
int main(){

    int num =0;
    cout <<"Enter a number: ";
    cin >> num;

    switch(num%2){
        case 0:
            cout<<"Even"<<endl;
            break;
        case 1:
            cout<<"Odd"<<endl;
            break;
        default:
            cout << "Unexpected case."<<endl;
    }


    return 0;
}