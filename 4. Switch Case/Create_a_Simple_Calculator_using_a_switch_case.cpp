#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Result: " << (num1 + num2) << endl;
        
    case '-':
        cout << "Result: " << (num1 + num2) << endl;

    case '*':
        cout << "Result: " << (num1 + num2) << endl;

    case '/':
        cout << "Result: " << (num1 + num2) << endl;
    
    default:
        cout << "Invalid Operator!" << endl;
    }
    return 0;
}