//int number is used for storing the number that user have to reverse
// int remaider is used for storing the remainder value 
// int revNumber is used to store reverse number
#include <iostream>
using namespace std;
int main(){
    int number,remainder , revNumber=0;
    cout <<"Enter an Integer: ";
    cin>>number;//123
    while (number >0)//123>0 | 12>0 | 1>0 | 0!>0 stop |
    {
        remainder =number%10;//remainder=123%10=3 | 12%10=2 | 1%10=1 |
        cout<<remainder<<"";//3 | 2 | 1 | = 321
        number=number/10;//number=123/10=12 | 12/10=1 | 1/10 =0
    }
    
    return 0;
}
