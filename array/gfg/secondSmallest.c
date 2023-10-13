#include <stdio.h>

int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elemtns of array : ");
    for (int i = 0; i<n;i++) scanf("%d",&arr[i]);

    int smallest,secondSmallest;
    for (int i = 0; i < n; i++)
    {
        if(i==0) {
            smallest=arr[i];
            secondSmallest=arr[i];
        }
        if(arr[i]<=smallest) smallest=arr[i];
        else if (arr[i]<secondSmallest) secondSmallest=arr[i];
        
        // [4,6,2,42,4,8,4];
    }
    printf("%d",secondSmallest);
    return 0;
}