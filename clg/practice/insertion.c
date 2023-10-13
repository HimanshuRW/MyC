#include <stdio.h>

int main(){
    int element, index,size=20;
    printf("Enter the element : ");
    scanf("%d",&element);
    printf("Enter the index : ");
    scanf("%d",&index);
    int arr[size];
    printf("[ ");
    for (int i = 0; i < size-1; i++)
    {
        arr[i]=i;
        printf("%d ",arr[i]);
    }
    printf(" ]\n");

    for (int i = size-1; i >= 0; i--)
    {
        if (i==index)
        {
            arr[i]=element;
            break;
        }
        arr[i]=arr[i-1];
        
    }
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" ]\n");

    return 0;
}