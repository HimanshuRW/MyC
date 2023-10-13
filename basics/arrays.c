#include <stdio.h>

int main(){
    int arr[8];
    for (int i = 0; i < 6; i++)
    {
        arr[i]=i;
    }
    
    printf("sozeof(arr)=%d",*(&arr+1)-arr);
    return 0;
}