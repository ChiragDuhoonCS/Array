#include<bits/stdc++.h>
using namespace std;

void function1() {
    int sl[] = {1,2,4,7,8,5};

    int largest, second_largest;
    largest = sl[0];
    second_largest = -1;

    int n = sizeof(sl) / sizeof(sl[0]);

    for (int i = 0; i < n; i++)
    {
        if (sl[i] > second_largest && sl[i] != largest )
        second_largest = sl[i];
    }
    printf("%d", second_largest);
    
}

int main() {
    function1();
    return 0;
}
