#include <iostream>
using namespace std;

//> FINDING MISSING NUMBER

 //$ |||||  BRUTE SOLUTION |||||||||

void brute() {
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


void optimise1() {
    int arr[] = {1, 2, 4, 5};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int n = arr_size + 1;
    int sum = (n * (n+1))/2; //! total one
    int sum2 = 0;

    for (int i = 0; i < arr_size; i++)
    {
        sum2 = sum2 + arr[i]; //! array one
    }

    if (sum2 == sum ) {
        printf("No missing number");
    }

    else if (sum2 != sum) {
        printf("Missing number found %d", sum - sum2);
    }
    

}

int main() {
    optimise1();
    return 0;
}