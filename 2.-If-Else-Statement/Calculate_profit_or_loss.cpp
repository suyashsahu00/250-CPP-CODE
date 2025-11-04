#include <iostream>
using namespace std;

int main() {
    double costPrice, sellingPrice;

    cout << "Enter Cost Price: ";
    cin >> costPrice;

    cout << "Enter Selling Price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        cout << "Profit: " << sellingPrice - costPrice << endl;
    } else if (costPrice > sellingPrice) {
        cout << "Loss: " << costPrice - sellingPrice << endl;
    } else {
        cout << "No Profit, No Loss." << endl;
    }

    return 0;
}
