#include <stdio.h>

int main()
{
    int size,x=0;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("A %d : ",i);
        scanf("%d",&a[i]);
    }
    printf("------------------------\n");
    printf("A :");
    for (int i = 0; i < size; i++) printf(" %d",a[i]);
    int odd[size];
    printf("\nEven :");
    for (int i = 0; i < size; i++)
    {
        if(a[i]%2==0) printf(" %d",a[i]); 
        else {
            odd[x]=a[i];
            x++;
        }
    }
    printf("\nOdd :");
    for (int i = 0; i < x; i++) printf(" %d",odd[i]);
    
    
    return 0;
}