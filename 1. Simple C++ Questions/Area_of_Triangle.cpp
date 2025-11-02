//area of triangle = 0.5 * base * height
#include <iostream>
using namespace std;
int main(){
    int base,height=0;
    float area=0;
    // area=0.5*base*height; //This line will not execute because it is called before its definition.
    cout<<"Enter the base:"<<endl;
    cin>>base;
    cout<<"Enter the height:"<<endl;
    cin>>height;
    area=0.5*base*height; 
    cout<<"Area of the triangle is:"<<area<<endl;

    return 0;
}