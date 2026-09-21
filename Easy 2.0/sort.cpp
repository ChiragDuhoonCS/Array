#include <bits/stdc++.h>
using namespace std;

int sort1() {
    int arr[6];
    int n = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < n; i++)
    {
        printf("%d value: " ,i);
        scanf("%d", &arr[i]);
    }

    printf("Here is your array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}


int main() {
    sort1();
    return 0;
}