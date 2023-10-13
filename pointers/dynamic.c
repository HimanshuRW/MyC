#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;
    printf("The rows of array : ");
    scanf("%d", &r);
    int *ptr1 = (int *)malloc(r * sizeof(int));
    int *ptr2 = (int *)malloc(r * sizeof(int));
    int *ptr3 = (int *)malloc(r * sizeof(int));
    int *ptrF = (int *)malloc(3 * sizeof(int));
    for (int i = 0; i < r; i++)
    {
        ptr1[i] = i + 1;
        ptr2[i] = i + 1 + r;
        ptr3[i] = i + 1 + (2 * r);
    }
    // ptrF[0]=ptr1;
    // ptrF[1]=ptr2;
    // ptrF[2]=ptr3;
    // int d = ptr1;
    size_t temp1 = (size_t)ptr1;
    size_t temp2 = (size_t)ptr2;
    size_t temp3 = (size_t)ptr3;
    int *d = ptr1;
    *ptrF[0] = d;
    ptrF[1] = temp2;
    ptrF[2] = temp3;
    printf("ptr1 \n");
    printf("-----------------------------\n");
    for (int i = 0; i < r; i++)
    {
        printf("|    %d    |    %d    |\n", (ptr1 + i), *(ptr1+i));
    }
    printf("-----------------------------\n\n");
    printf("ptr2 \n");
    printf("-----------------------------\n");
    for (int i = 0; i < r; i++)
    {
        printf("|    %d    |    %d    |\n", (ptr2 + i), *(ptr2+i));
    }
    printf("-----------------------------\n\n");
    printf("ptr3 \n");
    printf("-----------------------------\n");
    for (int i = 0; i < r; i++)
    {
        printf("|    %d    |    %d    |\n", (ptr3 + i), *(ptr3+i));
    }
    printf("-----------------------------\n\n");
    printf("ptrF \n");
    printf("---------------------------------\n");
    for (int i = 0; i < r; i++)
    {
        printf("|    %d    |    %d    |\n", (ptrF + i), *(ptrF+i));
    }
    printf("---------------------------------\n\n");

    return 0;
}