#include <stdio.h>

int main()
{
    int size,sum=0;
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
    for(int i=0;i<size;i++){
        for (int j = i+1; j < size; j++)
        {
            int diff = a[i]>a[j]?a[i]-a[j]:a[j]-a[i];
            printf("\npairs is %d %d and diff is %d",a[i],a[j],diff);
            sum += diff;
        }
    }
    printf("\n---------------------------\n");
    printf("Sum : %d",sum);
    return 0;
}