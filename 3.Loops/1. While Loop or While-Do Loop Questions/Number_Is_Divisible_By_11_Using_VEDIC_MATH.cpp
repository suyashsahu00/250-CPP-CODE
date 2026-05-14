#include <iostream>
using namespace std;

/*
    Divisibility by 11 - Vedic Math Rule
    =====================================
    Rule: Starting from the RIGHTMOST digit, alternately SUBTRACT and ADD
          each digit. If the result is 0 or divisible by 11, the number is
          divisible by 11.

    Example: 2728
    Digits (right to left): 8, 2, 7, 2
    Alternating sum = (+8) + (-2) + (+7) + (-2) = 11
    11 % 11 == 0  →  2728 IS divisible by 11 ✓

    Example: 123
    Digits (right to left): 3, 2, 1
    Alternating sum = (+3) + (-2) + (+1) = 2
    2 % 11 != 0  →  123 is NOT divisible by 11 ✗
*/

int main(){
    int num=0;
    int sum=0;
    int sign=1;
    int remainder;
    int origin;

    cout<<"Enter a number: ";
    cin>>num;                              //2728
    origin = num;                          //origin = 2728

    while(num>0){                          //2728>0 | 272>0 | 27>0 | 2>0 | 0!>0 stop |
        remainder = num%10;                //2728%10=8 | 272%10=2 | 27%10=7 | 2%10=2 |
        num=num/10;                        //2728/10=272 | 272/10=27 | 27/10=2 | 2/10=0 |
        sum = sum +(sign * remainder);     //0+(1*8)=8 | 8+(-1*2)=6 | 6+(1*7)=13 | 13+(-1*2)=11 |
        sign = sign * -1;                  //1*-1=-1 | -1*-1=1 | 1*-1=-1 | -1*-1=1 |
    }                                      //sum=11, 11%11==0 → divisible ✓
    if(sum % 11 ==0){
        cout<<origin<<" is divisible by 11";
    }else{
        cout<<origin<<" is not divisible by 11";
    }
    return 0;
}