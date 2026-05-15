#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num; 

    int digitCount = 0;
    
    do
    {
        digitCount++;   
        num = num / 10; 
    } while (num != 0);

    cout << "No. of digits in the integer: " << digitCount << endl;

    return 0;
}
