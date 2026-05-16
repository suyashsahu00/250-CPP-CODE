#include <iostream>
using namespace std;

/*
    Sort a Float Array in Ascending and Descending Order (Bubble Sort)
    ==================================================================
    Example Array: [3.1, 1.2, 5.5] (n = 3)
    
    Ascending Sort (Pass 1):
    Compare 3.1 & 1.2 -> Swap -> [1.2, 3.1, 5.5]
    Compare 3.1 & 5.5 -> No Swap
    -> Largest is at the end.
    
    Descending Sort (Pass 1):
    Compare 1.2 & 3.1 -> Swap -> [3.1, 1.2, 5.5]
    Compare 1.2 & 5.5 -> Swap -> [3.1, 5.5, 1.2]
    -> Smallest is at the end.
*/

int main()
{
    int n = 0;
    cout << "Enter a number that you want to store in an array: ";
    cin >> n;
    
    float arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // ---------------- ASCENDING ORDER ----------------
    // Dry Run Example: arr = [3.1, 1.2, 5.5], n = 3
    for (int i = 0; i < n - 1; i++)                 // i=0 (Pass 1)               | i=1 (Pass 2)
    {
        for (int j = 0; j < (n - 1 - i); j++)       // j=0          | j=1         | j=0
        {
            if (arr[j] > arr[j + 1])                // 3.1>1.2(T)   | 3.1>5.5(F)  | 1.2>3.1(F)
            {
                float temp = arr[j];                // temp=3.1     | (No swap)   | (No swap)
                arr[j] = arr[j + 1];                // arr[0]=1.2   |             | 
                arr[j + 1] = temp;                  // arr[1]=3.1   |             | 
            }
        }
    }

    cout << "Ascending Order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ---------------- DESCENDING ORDER ----------------
    // Dry Run Example (now using arr = [1.2, 3.1, 5.5], n = 3)
    for (int i = 0; i < n - 1; i++)                 // i=0 (Pass 1)               | i=1 (Pass 2)
    {
        for (int j = 0; j < (n - 1 - i); j++)       // j=0          | j=1         | j=0
        {
            if (arr[j] < arr[j + 1])                // 1.2<3.1(T)   | 1.2<5.5(T)  | 3.1<5.5(T)
            {
                float temp = arr[j];                // temp=1.2     | temp=1.2    | temp=3.1
                arr[j] = arr[j + 1];                // arr[0]=3.1   | arr[1]=5.5  | arr[0]=5.5
                arr[j + 1] = temp;                  // arr[1]=1.2   | arr[2]=1.2  | arr[1]=3.1
            }
        }
    }

    cout << "Descending Order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}