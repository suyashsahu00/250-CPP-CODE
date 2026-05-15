#include <iostream>
using namespace std;
/*
    Reverse A Given Number
    =======================
    Example: 123
    123 % 10 = 3  | print 3 | 123 / 10 = 12
    12 % 10 = 2   | print 2 | 12 / 10 = 1
    1 % 10 = 1    | print 1 | 1 / 10 = 0
    → output: 321 ✓
*/

int main(){
    int number,remainder , revNumber=0;
    cout <<"Enter an Integer: ";
    cin>>number;//123
    do
    {                                  // num=123          | num=12        | num=1       
        remainder =number%10;          // 123%10=3         | 12%10=2       | 1%10=1      
        cout<<remainder<<"";           // print "3"        | print "2"     | print "1"   
        number=number/10;              // 123/10=12        | 12/10=1       | 1/10=0      
    } while (number >0);               // 12>0 (true)      | 1>0 (true)    | 0>0 (false) 
    
    return 0;
}
