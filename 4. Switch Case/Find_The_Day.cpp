#include <iostream>
using namespace std;
int main(){
    cout<<"Enter The Day ";
    cout<<"0: Monday\n";
    cout<<"1: Tuesday\n";
    cout<<"2: Wednesday\n";
    cout<<"3: Thursday\n";
    cout<<"4: friday\n";
    cout<<"5: Saturday\n";
    cout<<"6: Sunday\n";
    int day;
    cin >> day;         
    switch(day){
        case 0:{
            cout<<"Monday";
            break;
        }
        case 1:{
            cout<<"Tuesday";
            break;
        }
        case 2:{
            cout<<"Wednesday";
            break;
        }
        case 3:{
            cout<<"Thursday";
            break;
        }
        case 4:{
            cout<<"friday";
            break;
        }
        case 5:{
            cout<<"Saturday";
            break;
        }
        case 6:{
            cout<<"Sunday";
            break;
        }
        default:{
            cout<<"none";
            break;
        }
    }
}