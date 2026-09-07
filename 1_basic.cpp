#include<bits/stdc++.h>
using namespace std;

void function1() {
    int n;
    int arr[30];

    printf("Size of array: ");
    scanf("%d", &n);

    if (n > 30) n = 30;
    if (n < 1) {
        return;
    }

    //& filling array
    for (int i = 0; i < n; i++)
    {
        printf("On %d what number: ",i );
        scanf("%d", &arr[i]);
    }

    printf("[");
    //& printing or accesing array
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
    printf("]");

}

int main() {
    function1();
    return 0;
}