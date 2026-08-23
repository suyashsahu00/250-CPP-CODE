#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;

    cout << "Enter number of elements in array: ";
    cin >> n;

    // FIX 1: Validate n so it never exceeds array capacity (100)
    // and leaves room for one more insertion.
    if (n < 0 || n >= 100) {
        cout << "Invalid size! Must be between 0 and 99." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    // Validate position
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    // FIX 2: Guard against overflow at max capacity
    if (n >= 100) {
        cout << "Array is full! Cannot insert." << endl;
        return 1;
    }

    /* ---------------- DRY RUN (n=4, arr = [10,20,30,40], pos=3, value=99) ----------------
       Goal: shift elements right starting from index n-1 down to pos-1,
             to create a gap at index pos-1 for the new value.

       Before shift: arr = [10, 20, 30, 40, ?]   indices: 0  1  2  3  4
                                                   n = 4, pos = 3 (1-indexed)

       Loop: for (i = n; i >= pos; i--)  ->  for (i = 4; i >= 3; i--)

       i = 4:  arr[4] = arr[3]   -> arr = [10, 20, 30, 40, 40]
       i = 3:  arr[3] = arr[2]   -> arr = [10, 20, 30, 30, 40]
       (loop ends since i=2 < pos=3)

       Gap now sits at index pos-1 = 2
    ---------------------------------------------------------------------------------------- */
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    /* ---------------- DRY RUN continued ----------------
       arr[pos - 1] = value   ->   arr[2] = 99
       Before: [10, 20, 30, 30, 40]
       After:  [10, 20, 99, 30, 40]
       n++  ->  n becomes 5
    ------------------------------------------------------ */
    arr[pos - 1] = value;
    n++; // increase array size count

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Expected final output for the dry run above:
    // Array after insertion: 10 20 99 30 40

    return 0;
}