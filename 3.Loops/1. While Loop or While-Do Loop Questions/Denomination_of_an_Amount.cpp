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

    while(i < 10){                                // i=0            | i=1          | i=2        | i=3       | i=4      | i=5      | i=6     | i=7   | i=8   | i=9   | i=10 stop
        int notes = amount / denomination[i];     // 1231/2000=0    | 1231/500=2   | 231/200=1  | 31/100=0  | 31/50=0  | 31/20=1  | 11/10=1 | 1/5=0 | 1/2=0 | 1/1=1 |
        int remaining = amount % denomination[i]; // 1231%2000=1231 | 1231%500=231 | 231%200=31 | 31%100=31 | 31%50=31 | 31%20=11 | 11%10=1 | 1%5=1 | 1%2=1 | 1%1=0 |
        amount = remaining;                       // 1231           | 231          | 31         | 31        | 31       | 11       | 1       | 1     | 1     | 0     |
        if(notes > 0){                            // No             | Yes(500:2)   | Yes(200:1) | No        | No       | Yes(20:1)| Yes(10:1| No    | No    | Yes(1:1|
            cout << denomination[i] << " : " << notes << (notes == 1 ? " note " : " notes ") << endl;
        }
        i++;                                      // i=1            | i=2          | i=3        | i=4       | i=5      | i=6      | i=7     | i=8   | i=9   | i=10  |
    }

    return 0;
}