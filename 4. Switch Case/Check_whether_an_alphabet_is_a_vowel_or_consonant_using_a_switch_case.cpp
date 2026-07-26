#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <='Z'){
        ch = ch + 32; // convert character into lower case. 
    }

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"It is a vowel";
        break;
        default:
            if(ch>= 'a' && ch<='z'){
                cout<<"It is a consonant";
            }
            else{
                cout<<"not a letter";
            }
    }
    return 0;

}