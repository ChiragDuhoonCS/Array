#include <bits/stdc++.h>
using namespace std;

void brute() {
    int arr[] = {0, 1, 2, 0, 1, 2,1,2,0,0,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort in ascending order
    sort(arr, arr + n);

    // Output the sorted array
    cout << "Sorted array (Ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


void better(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    // Step 1: Count the number of 0s, 1s, and 2s
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) count0++;
        else if (nums[i] == 1) count1++;
        else count2++;
    }

    // Step 2: Overwrite the array based on the counts
    int i = 0;
    while (count0--) {
        nums[i++] = 0;
    }
    while (count1--) {
        nums[i++] = 1;
    }
    while (count2--) {
        nums[i++] = 2;
    }
}



            // Note: mid is not incremented here because we need 
            // to check the value that was swapped from `high`.
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    sortColors(nums);

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    
    better(nums);

    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}*/

/*int main() {
    brute();
    return 0;
}*/