//Move all the negative elements to one side of the array
//The idea is to simply apply the partition process of quicksort. 
#include <iostream>
using namespace std;

int main() {
    int l=0;
    int a[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int n = sizeof(a) / sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        if(i!=l)
        swap(a[i],a[l++]);
    }

    for (int i = 0; i < n; i++)
    printf("%d ", a[i]);
    return 0;
}


