#include <iostream>
using namespace std;

int main()
{
    char ch;


    cout << "Enter any character: ";
    cin >> ch;

    //upercase checking
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an uppercase letter." << endl;
    }
    // lowercase checking
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase letter." << endl;
    }
    //  digit checking
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a digit." << endl;
    }
    //  special character
    else
    {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
