#include <iostream>
using namespace std;

int main(){
    float first_no=0;
    float second_no=0;
    cout<<"Enter first no: ";
    cin>>first_no;
    cout<<"Enter second no: ";
    cin>>second_no;
    switch(first_no > second_no) {
        case 1:
            cout << first_no << " is maximum." << endl;
            break;
        case 0:
            switch(first_no < second_no) {
                case 1:
                    cout << second_no << " is maximum." << endl;
                    break;
                case 0:
                    cout << "Both numbers are equal." << endl;
                    break;
            }
            break;
    }
        
    return 0;
}