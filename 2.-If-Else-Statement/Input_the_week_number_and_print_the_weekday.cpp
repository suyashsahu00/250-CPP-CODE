#include <iostream>
using namespace std;

int main() {
    int week_number;

    cout << "Enter week number (1-7): ";
    cin >> week_number;

    if (week_number == 1) {
        cout << "Monday" << endl;
    } else if (week_number == 2) {
        cout << "Tuesday" << endl;
    } else if (week_number == 3) {
        cout << "Wednesday" << endl;
    } else if (week_number == 4) {
        cout << "Thursday" << endl;
    } else if (week_number == 5) {
        cout << "Friday" << endl;
    } else if (week_number == 6) {
        cout << "Saturday" << endl;
    } else if (week_number == 7) {
        cout << "Sunday" << endl;
    } else {
        cout << "Invalid week number. Please enter a number between 1 and 7." << endl;
    }

    return 0;
}
