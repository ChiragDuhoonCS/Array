#include<bits/stdc++.h>
using namespace std;

void function1() {
    int n,j,i;

    int arr[] = {1,0,2,3,2,0,0,4,5,1};

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0);
        j = i;
        break;
    }
    
   for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
        swap(arr[i], arr[j]);
        j++;
    }

   }

    
}

