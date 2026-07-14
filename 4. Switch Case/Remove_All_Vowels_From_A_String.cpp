#include <iostream> 
#include <string>
using namespace std;

int main(){
    string s, result = "";
    cout << "Enter a string: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        switch (s[i]){
            // if it's a vowel do nothing and skip it
            case 'a' : 
            case 'e' : 
            case 'i' : 
            case 'o' : 
            case 'u' : 
            case 'A' : 
            case 'E' : 
            case 'I' : 
            case 'O' : 
            case 'U' : 

            break;
            // otherwise append it to the result
            default:
                result += s[i];
        }
    }

    cout << "String after removing vowels: " << result <<endl;
    return 0;
}