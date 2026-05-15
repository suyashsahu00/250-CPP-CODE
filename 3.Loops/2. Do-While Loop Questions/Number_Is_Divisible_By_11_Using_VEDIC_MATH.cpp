#include <iostream>
using namespace std;

/*
    Number Is Divisible By 11 Using VEDIC MATH
    ===========================================
    Example: 2728
    2728 % 10 = 8 | sum = 0 + (1*8) = 8   | 2728 / 10 = 272 | sign = -1
    272 % 10 = 2  | sum = 8 + (-1*2) = 6  | 272 / 10 = 27   | sign = 1
    27 % 10 = 7   | sum = 6 + (1*7) = 13  | 27 / 10 = 2     | sign = -1
    2 % 10 = 2    | sum = 13 + (-1*2)= 11 | 2 / 10 = 0      | sign = 1
    → 11 % 11 == 0 (Divisible) ✓
*/

int main(){
    int num=0;
    int sum=0;
    int sign=1;
    int remainder;
    int origin;

    cout<<"Enter a number: ";
    cin>>num;                              
    origin = num;                          
    
    if (num == 0) {
        sum = 0;
    } else {
        do {                           // num=2728         | num=272       | num=27      | num=2       
            remainder = num%10;        // 2728%10=8        | 272%10=2      | 27%10=7     | 2%10=2      
            num=num/10;                // 2728/10=272      | 272/10=27     | 27/10=2     | 2/10=0      
            sum = sum +(sign * remainder); // sum=0+8=8    | sum=8-2=6     | sum=6+7=13  | sum=13-2=11 
            sign = sign * -1;          // sign=-1          | sign=1        | sign=-1     | sign=1      
        } while(num>0);                // 272>0 (true)     | 27>0 (true)   | 2>0 (true)  | 0>0 (false) 
    }

    if(sum % 11 ==0){
        cout<<origin<<" is divisible by 11";
    }else{
        cout<<origin<<" is not divisible by 11";
    }
    return 0;
}
