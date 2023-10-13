#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {3, 1, 3, 4, 1, 3, 2, 3, 1, 1};
    int *ptr = arr;
    int (*p)[10] = &arr;
    int size = 10;
    // printf("A : ");
    // for (int i = 0; i < size; i++)
    //     printf("%d ", *(ptr + i));

    // printf("\n-------------------------\n");
    
    printf("ptr : %d\n",ptr);
    printf("*ptr : %d\n",*ptr);
    printf("*(ptr+1) : %d\n",*(ptr+1));
    printf("p : %d\n",p);
    printf("*p : %d\n",*p);
    printf("*p+1 : %d\n",*p+1);
    printf("*(p+1) : %d\n",*(p+1));
    return 0;
}