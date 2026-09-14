#include<bits/stdc++.h>
using namespace std;



//> ||||| BRUTE SOLUTION ||||||||
void brutesort(int arr[], int n) {
    sort(arr,arr + n);
}

 //$ |||||  OPTIMIZE SOLUTION |||||||||
void function1() {
    int arr[] = {3,8,1,5,2};
    int largest;


    //! see here we are give n value size of array
    int n = sizeof(arr) / sizeof(arr[0]); // evaluates to 5

   /* printf("Whats n: ");
    scanf("%d", &n);
    printf("\n"); */
    
    largest = arr[0];
    for (int i = 1; i < n; i++) //! reason of choosing 1 instead of 0 coz largest already set to 0
    {
        if (arr[i] > largest)
        largest = arr[i];
    }
    printf("%d",largest);
    
    //$ time complexity = n ig 
}

// FOR OPTIMISE ONE
/*& int main() {
    function1();
    return 0;
}*/

// FOR BRUTE ONE
int main() {
    int arr[] = {3,8,34,56,98,40};
    int n = sizeof(arr) / sizeof(arr[0]);

    brutesort(arr,n);

    printf("Here is largest Number: %d", arr[n-1]);


}