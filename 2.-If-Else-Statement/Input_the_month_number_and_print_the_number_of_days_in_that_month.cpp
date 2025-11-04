#include <iostream>
using namespace std;

int main() {
    int month_number;

    cout << "Enter month number (1-12): ";
    cin >> month_number;

    if (month_number == 1 || month_number == 3 || month_number == 5 || month_number == 7 || month_number == 8 || month_number == 10 || month_number == 12) {
        cout << "31 days" << endl;
    } else if (month_number == 4 || month_number == 6 || month_number == 9 || month_number == 11) {
        cout << "30 days" << endl;
    } else if (month_number == 2) {
        int year;
        cout << "Enter the year: ";
        cin >> year;
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << "29 days (Leap year)" << endl;
        } else {
            cout << "28 days" << endl;
        }
    } else {
        cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
    }

    return 0;
}
