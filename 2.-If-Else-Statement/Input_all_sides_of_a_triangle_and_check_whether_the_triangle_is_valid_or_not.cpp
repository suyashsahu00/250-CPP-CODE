#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter three sides of triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 > 0 && side2 > 0 && side3 > 0 && (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        cout << "Triangle is valid." << endl;
    } else {
        cout << "Triangle is not valid." << endl;
    }

    return 0;
}
