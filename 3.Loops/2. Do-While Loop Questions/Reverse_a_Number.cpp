#include <iostream>
using namespace std;

int main()
{
    int prev = 0;
    int num = 0;
    cout << "Enter a number: ";
    cin >> num; // Example input: 123

    do
    {
        int r = num % 10;     
        prev = prev * 10 + r; 
        num = num / 10;       
    } while (num != 0);

    cout << "Reversed Number is: " << prev << endl;

    return 0;
}
