#include <iostream>
using namespace std;

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
        do {                          
            remainder = num%10;                
            num=num/10;                        
            sum = sum +(sign * remainder);     
            sign = sign * -1;                  
        } while(num>0); 
    }

    if(sum % 11 ==0){
        cout<<origin<<" is divisible by 11";
    }else{
        cout<<origin<<" is not divisible by 11";
    }
    return 0;
}
