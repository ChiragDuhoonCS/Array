#include<bits/stdc++.h>
using namespace std;

//@ Returns 'int' because it calculates and hands back the maximum streak
int findMaxConsecutiveOnes(const vector<int>& nums) {
    int max_count = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) { //finding longest streak of 1
            count++;
            max_count = max(max_count, count);
        } else {
            count = 0;
        }
    }

    return max_count;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int result = findMaxConsecutiveOnes(nums);
    cout << "Maximum Consecutive Ones: " << result << endl;

    return 0;
}