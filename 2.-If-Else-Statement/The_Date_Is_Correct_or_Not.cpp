#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Enter the day, month, and year: ";
    cin >> day >> month >> year;

    if (year < 1) {
        cout << "Invalid date!" << endl;
        return 0;
    }

    if (month < 1 || month > 12) {
        cout << "Invalid date!" << endl;
        return 0;
    }

    int max_days = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        max_days = 30;
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            max_days = 29;
        } else {
            max_days = 28;
        }
    }

    if (day < 1 || day > max_days) {
        cout << "Invalid date!" << endl;
    } else {
        cout << "The date is correct." << endl;
    }

    return 0;
}
