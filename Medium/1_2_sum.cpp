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