// C++ program to calculate the total and percentage of 5 subjects
#include <iostream>

using namespace std;

int main()
{
    float sub1, sub2, sub3, sub4, sub5;

    cout << "Enter marks for 5 subjects (out of 100 each):" << endl;
    cout << "Subject 1: ";
    cin >> sub1;
    cout << "Subject 2: ";
    cin >> sub2;
    cout << "Subject 3: ";
    cin >> sub3;
    cout << "Subject 4: ";
    cin >> sub4;
    cout << "Subject 5: ";
    cin >> sub5;

    float total = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = (total / 500.0) * 100;

    cout << "\nTotal Marks Obtained: " << total << " out of 500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}