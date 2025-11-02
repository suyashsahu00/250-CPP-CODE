#include <iostream>
using namespace std;
int main(){
    float Celsius;
    cout<<"Enter the Celsius: ";
    cin>> Celsius;
    float Fahrenheit=(Celsius * 1.8) + 32;
    cout<<"Converting Celsius to Fahrenheit:"<<Fahrenheit;
    return 0;
}