#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation!" << endl;
        return 0;
    }

    double D = b*b - 4*a*c;  // Discriminant

    switch ((D > 0) - (D < 0)) {
        case 1: { // D > 0
            double root1 = (-b + sqrt(D)) / (2*a);
            double root2 = (-b - sqrt(D)) / (2*a);
            cout << "Roots are real and distinct: " 
                 << root1 << " , " << root2 << endl;
            break;
        }
        case 0: { // D == 0
            double root = -b / (2*a);
            cout << "Roots are real and equal: " << root << endl;
            break;
        }
        case -1: { // D < 0
            double realPart = -b / (2*a);
            double imagPart = sqrt(-D) / (2*a);
            cout << "Roots are imaginary: " 
                 << realPart << " + " << imagPart << "i , "
                 << realPart << " - " << imagPart << "i" << endl;
            break;
        }
        default:
            cout << "Unexpected case!" << endl;
    }

    return 0;
}
