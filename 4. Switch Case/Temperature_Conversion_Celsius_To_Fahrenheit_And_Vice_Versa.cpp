#include <iostream>
using namespace std;

int main(){
    int choice;
    cout <<"1. Celsius to Fahreheit\n";
    cout <<"2. Fahreheit to Celsius\n";
    cout <<"Enter Your Choice : ";
    cin >> choice;
    double c,f;

    switch(choice){
        case 1:{
            cout <<"Enter temperature in celsius: ";
            cin >> c;
            f = (c*9/5)+32;
            cout<<c<<" celsius"<<"  is equal to "<<f<<" fahrenheit";
            break;
        }
        case 2:{
            cout <<"Enter temperature in fahrenheit: ";
            cin >> f;
            c = (f-32)*5/9;
            cout<<f<<" fahrenheit"<<"  is equal to "<<c<<" celsius"     ;
            break;
        }
        default:{
            cout <<"Invalid Choice";    
            break;
        }
    }
    return 0;
}