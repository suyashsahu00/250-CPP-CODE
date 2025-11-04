#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;

    cout << "Enter three angles of triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        cout << "Triangle is valid." << endl;
    } else {
        cout << "Triangle is not valid." << endl;
    }

    return 0;
}
