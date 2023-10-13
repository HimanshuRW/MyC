#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3, 1, 3, 4, 1, 3, 2, 3, 1, 1};
    int *ptr = arr;
    int size = 10;
    printf("A : ");
    for (int i = 0; i < size; i++)
        printf("%d ", *(ptr + i));

    printf("\n------*(ptr+22) : %d--------------------\n", *(ptr + 22));
    for (int i = 0; i <= size; i++)
    {
        printf("\n\n----------------------------------------------------------------------------\n\n");
        printf("curent index : %d, current element : %d, condition : %d, size : %d, size condition %d", i, *(ptr + i), *(ptr + i) == 1,size,i<=size);
        if (*(ptr + i) == 1) // i = index to pop up of
        {
            printf("\n\nA %d : ", size);
            for (int j = 0; j < size; j++)
                printf("%d ", *(ptr + j));
            printf("\npop index : %d", i);
            for (int j = i; j < size; j++)
                *(ptr + j) = *(ptr + j + 1);
            size--;i--;
            printf("\nA %d : ", size);
            for (int j = 0; j < size; j++)
                printf("%d ", *(ptr + j));
        }
    }

    return 0;
}