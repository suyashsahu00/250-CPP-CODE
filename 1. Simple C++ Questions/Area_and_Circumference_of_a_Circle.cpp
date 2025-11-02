// code for finding the area of circumference
// area of circle = pi* radius^2
# include <iostream>
using namespace std;
int main(){
    float radius=0;
    float area;
    cout<<"Enter the radius: "<< endl;
    cin>>radius;
    area = 3.14 * radius * radius; 
    cout<<"Area of the circumference of circle is: "<<area;

    return 0;
}