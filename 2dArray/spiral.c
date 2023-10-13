#include <stdio.h>

int main()
{
    int r, c;
    printf("enter the rows and columns : ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j] = i + j + 1 + (i * r);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }

    //    0    1    2    3
    // 0 [ ]->[ ]->[ ]->[.]
    // 1 [']->[ ]->[.]  [.]
    // 2 [']  [ ]  [.]  [.]
    // 3 [']  [']<-[ ]  [.]
    // 4 [']<-[ ]<-[ ]<-[ ]

    printf("-----------------------\n");
    // circle in r and c
    int Nr = r - 1, Nc = c - 1, startR = 0, startC = 0;
    int times = r%2==0 ? r/2 : (r+1)/2;
    for (int x = 1; x <= times; x++)
    {

        for (int i = startC; i <= Nc; i++)
            printf("(%d,%d) -> %d\n", startR, i, a[startR][i]);
        printf("-----------------------\n");
        for (int i = startR + 1; i < Nr; i++)
            printf("(%d,%d) -> %d\n", i, Nc, a[i][Nc]);
        printf("-----------------------\n");
        for (int i = Nc; i >= startC; i--)
            printf("(%d,%d) -> %d\n", Nr, i, a[Nr][i]);
        printf("-----------------------\n");
        for (int i = Nr - 1; i > startR; i--)
            printf("(%d,%d) -> %d\n", i, startC, a[i][startC]);
        Nr--; Nc--;
        startR++;  startC++;
        printf("\n============================\n");
    }
}