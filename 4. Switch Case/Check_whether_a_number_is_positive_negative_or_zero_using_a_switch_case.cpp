#include <iostream>
using namespace std;

int main(){
    int num=0;
    cout << "Enter a number: ";
    cin >> num;
    switch((num > 0) - (num < 0)){
        case 0:
            cout << "Zero";
            break;
        case 1:
            cout << "Postive";
            break;
        case -1:
            cout << "Negative";
            break;
    }
    return 0;
}