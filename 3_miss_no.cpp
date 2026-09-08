#include <iostream>
using namespace std;

void program1() {
    // Array of size 4 containing numbers from 1 to 5 (3 is missing)
    int arr[] = {1, 2, 4, 5};
    int n = 5; // The range 1 to N
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i <= n; i++) {
        int found = 0; //! assuming i is missing here

        // Check if 'i' exists anywhere in the array
        for (int j = 0; j < arr_size; j++) {
            if (arr[j] == i) {
                found = 1; //! found 0 flips to found 1 if found if anyone is missing
                break; //! break when it found missing
            }
        }

        // If 'i' was never found in the entire array, it is the missing one
        if (found == 0) { //! mean   Did we look through everything and still not find it?"
            cout << "Missing number: " << i << endl;
            return;
        }
    }

    cout << "No missing number" << endl;
}

int main() {
    program1();
    return 0;
}