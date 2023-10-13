#include <stdio.h>

int main(){
    int index,size=20;
    printf("Enter the index : ");
    scanf("%d",&index);
    int arr[size];
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        arr[i]=i;
        printf("%d ",arr[i]);
    }
    printf(" ]\n");

    for (int i = index; i < size-1; i++) arr[i]=arr[i+1];
    printf("[ ");
    for (int i = 0; i < size-1; i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" ]\n");

    return 0;
}