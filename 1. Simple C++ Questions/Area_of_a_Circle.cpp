#include <iostream>
using namespace std;
int main(){
    float radius=0;
    float area=0;
    cout<<"Enter the radius:";
    cin>>radius;
    area = 3.14 * radius *radius;
    cout<<"Area of the radius "<< radius<< " is: "<<area;
    return 0;
}