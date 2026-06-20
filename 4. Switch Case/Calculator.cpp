#include <iostream>
using namespace std;

int main(){
    char op;
    double num1, num2;

    cout << "Enter operator(+, -, *, /): ";
    cin >> op;

    cout << "Enter 1st operand: ";
    cin >> num1 ;
    cout << "Enter 2nd operand: ";
    cin >> num2 ;

    switch (op){
        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;

        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
        case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    }

}
