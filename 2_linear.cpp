#include<bits/stdc++.h>
using namespace std;

void program1() {
    int arr[] = {6,7,8,4,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 4;
    

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num) {
        cout << "Your number is:  " << arr[i] << " at index" << endl;
        return;
        }
    } 
   
    
}
int main() {
    program1();
    return 0;
}