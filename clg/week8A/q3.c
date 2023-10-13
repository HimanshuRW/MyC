#include <stdio.h>

int main()
{
    int n, k,d,i;
    printf("Enter the K : ");
    scanf("%d", &k);
    printf("Enter the lenght of arrays A : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++){
        printf("A %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("--------------------------\n");
    printf("A : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n--------------------------\n");

    // -------------------------------------------------------------
    int difference = k-a[0];
    if (difference<0) d = -(difference);    
    for (i = 0; i < n; i++)
    {
        int current_element = a[i];
        difference = k-a[i];
        printf("difference = %d = k(%d) - a[i](%d)\n",difference,k,a[i]);
        if (difference<0) difference = -(difference);    
        if(difference>d) d = difference;
    }
    printf("d : %d",d);

    return 0;
}