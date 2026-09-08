#include<bits/stdc++.h>
using namespace std;

void program1() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] == i)
            printf("No missing number");
            else {
            printf("Missing number found");
            return;
            }
        }
        
    }
    

}

int main() {
    program1();
    return 0;
}