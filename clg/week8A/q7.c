#include <stdio.h>

int main()
{
    int a[3][3], det = 0;
    printf("1 mod 3 is %d\n",1%3);
    printf("Enter the elements of matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("------------------------\n");
    printf("Your Matric is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    // -------------------------------------------
    //  a[0][i](a[i][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3])

    for (int i = 0; i < 3; i++)
    {
        // printf("\n%d * (%d * %d - %d * %d)",a[0][i],a[1][(i + 1) % 3],a[2][(i + 2) % 3],a[1][(i + 2) % 3],a[2][(i + 1) % 3]);
        printf("\n%d * (%d * %d - %d * %d)",a[0][i],a[1][(i + 1) % 3],a[2][(i + 2) % 3],a[1][(i + 2) % 3],a[2][(i + 1) % 3]);
        int toAdd = (a[0][i] * (a[1][(i + 1) % 3] * a[2][(i + 2) % 3] - a[1][(i + 2) % 3] * a[2][(i + 1) % 3]));
        printf("\nsum = %d",toAdd);
        det = det + toAdd;

    }
    printf("\nDeterminant : %d",det);
    return 0;
}