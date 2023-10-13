#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, k;
    printf("K : ");
    scanf("%d", &k);
    printf("Size of Arr : ");
    scanf("%d", &n);
    int a[n];
    int *ptr = a;
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d : ", i);
        scanf("%d", ptr + i);
    }
    printf("---------------------------------\n");
    printf("A : ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\n---------------------------------\n");

    int smallest = *ptr;
    // ---- loop k times ---
    for (int x = 1; x <= k; x++)
    {
        smallest = *ptr;
        for (int i = 0; i < n; i++)
            if (*(ptr + i) < smallest)
                smallest = *(ptr + i);
        for (int i = 0; i < n; i++)
        {
            if (*(ptr + i) == smallest)
            {
                // pop the ith element
                for (int j = i; j < n; j++)
                    *(ptr + j) = *(ptr + j + 1);
                n--;
                i--;
                printf("\nA : ");
                for (int j = 0; j < n; j++)
                    printf(" %d", *(ptr + j));
            }
        }
        printf("\n%dth smallest is %d\n",x,smallest);
    }

    return 0;
}