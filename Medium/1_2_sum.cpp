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


int main()
{
    vector<int> arr = {2,6,5,8,11};
    int ans = twosum(arr);
    return 0;
}