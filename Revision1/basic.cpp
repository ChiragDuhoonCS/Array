#include<bits/stdc++.h>
using namespace std;

void basic() {
    int arr[30];
    int n;
    
    printf("Whats n: ");
    scanf("%d", &n);

    if (n > 30 || n < 1) {
        n = 30; 
        return;
    }


    printf("\nWrite down your array of size %d \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        printf("\n");
    }


    printf("\nHere is your array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d , ", arr[i]);
    }
    
}

int main() {
    basic();
    return 0;
}