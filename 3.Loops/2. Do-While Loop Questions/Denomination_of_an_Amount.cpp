#include<iostream>
using namespace std;

/*
    Denomination of an Amount
    ==========================
    Example: 1231
    1231 / 500  = 2 notes  | 1231 % 500  = 231
    231  / 200  = 1 note   | 231  % 200  = 31
    31   / 20   = 1 note   | 31   % 20   = 11
    11   / 10   = 1 note   | 11   % 10   = 1
    1    / 1    = 1 note   | 1    % 1    = 0
    → 500x2, 200x1, 20x1, 10x1, 1x1  ✓
*/

int main(){

    int denomination[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int i = 0;

    do {                               // i=0 (2000)       | i=1 (500)     | i=2 (200)   
        int notes = amount / denomination[i]; // 1231/2000=0 | 1231/500=2  | 231/200=1   
        int remaining = amount % denomination[i]; // 1231%2000=1231 | 1231%500=231 | 231%200=31
        amount = remaining;            // 1231             | 231           | 31          
        if(notes > 0){                 // notes=0 (No)     | notes=2 (Yes) | notes=1 (Yes)
            cout << denomination[i] << " : " << notes << (notes == 1 ? " note " : " notes ") << endl;
        }
        i++;                           // i=1              | i=2           | i=3         
    } while(i < 10);                   // 1<10 (true)      | 2<10 (true)   | 3<10 (true) 

    return 0;
}
