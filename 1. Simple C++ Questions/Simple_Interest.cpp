#include <iostream>
using namespace std;
int main()
{
    float Principal, Rate, Time = 0;
    // float SI = (Principal * Rate * Time) / 100; statements are executed sequentially
    cout << "Enter the principal amount: ";
    cin >> Principal;
    cout << "Enter the principal rate: ";
    cin >> Rate;
    cout << "Enter the principal time(years): ";
    cin >> Time;
    float SI = (Principal * Rate * Time) / 100;
    cout << "Your Simple Interest is : " << SI;
    return 0;
}