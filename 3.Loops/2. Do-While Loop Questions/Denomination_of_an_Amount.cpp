#include<iostream>
using namespace std;

int main(){

    int denomination[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;
    int i = 0;

    do {                                
        int notes = amount / denomination[i];     
        int remaining = amount % denomination[i]; 
        amount = remaining;                       
        if(notes > 0){                            
            cout << denomination[i] << " : " << notes << (notes == 1 ? " note " : " notes ") << endl;
        }
        i++;                                      
    } while(i < 10);

    return 0;
}
