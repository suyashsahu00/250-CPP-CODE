#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes_100 = amount / 100;
    amount %= 100;

    int notes_50 = amount / 50;
    amount %= 50;

    int notes_20 = amount / 20;
    amount %= 20;

    int notes_10 = amount / 10;
    amount %= 10;

    int notes_5 = amount / 5;
    amount %= 5;

    int notes_2 = amount / 2;
    amount %= 2;

    int notes_1 = amount / 1;

    cout << "Number of 100 Rupee notes: " << notes_100 << endl;
    cout << "Number of 50 Rupee notes: " << notes_50 << endl;
    cout << "Number of 20 Rupee notes: " << notes_20 << endl;
    cout << "Number of 10 Rupee notes: " << notes_10 << endl;
    cout << "Number of 5 Rupee notes: " << notes_5 << endl;
    cout << "Number of 2 Rupee notes: " << notes_2 << endl;
    cout << "Number of 1 Rupee notes: " << notes_1 << endl;

    return 0;
}
