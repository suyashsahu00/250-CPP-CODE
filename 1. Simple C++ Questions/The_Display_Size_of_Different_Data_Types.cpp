// C++ program to display the size of different data types
#include <iostream>

using namespace std;

int main()
{
    cout << "Size of different data types in bytes:" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;

    return 0;
}