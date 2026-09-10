#include <bits/stdc++.h>
using namespace std;

int twosum(vector<int> &arr) {
    int number;
    int sum;
    cout << "WHATS SUM YOU WANT: ";
    cin >> sum;
    for (int i = 0; i < arr.size(); i++)
    {
        number = sum - arr[i] ;

        for (int j = 0; j < arr.size(); j++)
        {
            if(arr[j] == number){
                printf("\nWE FOUND NUMBER %d and %d ", number, arr[i]);
             return 1;            

            }
        }
        
    }
    printf("\nWE CANT FOUND NUMBER");

    return -1;
}


//!  BY HASHING AND MPP [BETTER SOLUTION]

string twoSum(int n, vector<int> &arr, int target) {
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int a = arr[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) {
            return "YES";
        }
        mpp[a] = i;
    }
    return "NO";
}

//! BY WITHOUT HASHING MAP USING 2 POINTER

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    
    //@ Store elements along with their original indices
    vector<pair<int, int>> temp(n);
    for (int i = 0; i < n; i++) {
        temp[i] = {nums[i], i};
    }
    
    // Sort based on the element values
    sort(temp.begin(), temp.end());
    
    int left = 0, right = n - 1;
    
    //@ Two pointer traversal
    while (left < right) {
        int sum = temp[left].first + temp[right].first;
        
        if (sum == target) {
            return {temp[left].second, temp[right].second};
        } 
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }
    
    return {-1, -1}; // If no pair is found
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer: " << ans << endl;
    return 0;
}

/*int main()
{
    vector<int> arr = {2,6,5,8,11};
    int ans = twosum(arr);
    return 0;
}*/