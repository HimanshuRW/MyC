#include <stdio.h>

int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elemtns of array : ");
    for (int i = 0; i<n;i++) scanf("%d",&arr[i]);

    int myElement;
    for (int i = 0; i <n; i++)
    {
        if(i==0) myElement=arr[i];
        if(i==n-1) arr[i]=myElement;
        else arr[i]=arr[i+1];
        printf("%d ",arr[i]);
    }
    return 0;
}