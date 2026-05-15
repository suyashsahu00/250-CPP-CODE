#include <iostream>
using namespace std;
int main(){
    int number,remainder , revNumber=0;
    cout <<"Enter an Integer: ";
    cin>>number;//123
    do
    {
        remainder =number%10;
        cout<<remainder<<"";
        number=number/10;
    } while (number >0);
    
    return 0;
}
