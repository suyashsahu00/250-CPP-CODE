#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int choice;
    
    cout << "Select option: \n";
    cout << "1. Find Radius (given Volume & Height)\n";
    cout << "2. Find Circumference (given Radius)\n";
    cout << "3. Find Volume (given Radius & Height)\n";
    cin >> choice;

    float pi = 3.14;
    float radius;
    float volume;
    float height;
    float circumference;

    switch(choice){
        case 1:
            cout << "Enter Volume: ";
            cin >> volume;
            cout << "Enter Height: ";
            cin >> height;
            if (height > 0 && volume >= 0) {
                radius = sqrt(volume / (pi * height));
                cout << "Radius of the cylinder is: " << radius << endl;
            } else {
                cout << "Invalid input parameters!" << endl;
            }
            break;
        case 2:
            cout << "Enter Radius: ";
            cin >> radius;
            if (radius >= 0) {
                circumference = 2 * pi * radius;
                cout << "Circumference of the cylinder base is: " << circumference << endl;
            } else {
                cout << "Invalid Radius!" << endl;
            }
            break;
        case 3:
            cout << "Enter Radius: ";
            cin >> radius;
            cout << "Enter Height: ";
            cin >> height;
            if (radius >= 0 && height >= 0) {
                volume = pi * radius * radius * height;
                cout << "Volume of the cylinder is: " << volume << endl;
            } else {
                cout << "Invalid input parameters!" << endl;
            }
            break;
        default:
            cout << "Invalid selection!" << endl;
            break;
    }

    return 0;
}