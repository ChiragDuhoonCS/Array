#include<bits/stdc++.h>
using namespace std;

//> ROTATING EVERYTHING TO LEFT

 //$ |||||  BRUTE AND BEST SAME SOLUTION |||||||||

void function1(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int temp = arr[0];

    for (int i = 0; i < n-1; i++)
    {
        arr[i-1] = arr[i];//! jesma brna hai vo phala
    }
    arr[n-1] = temp; //! also here

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    //> TIME COMPLEXITY n  SPACE COMPLEXITY 1
}

int main() {
    function1();
    return 0;
}