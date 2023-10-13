#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("============\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ",&a[i][j]);
            printf("-");
        }
        printf("\n-----------------\n");
    }
    // i[j1 j2 j3]             j1 j1
    // i[j1 j2 j3]             j2 j2
    //                         j3 j3
    int transpose[c][r];
        for (int j = 0; j < c; j++){
            for (int i = 0; i < r; i++){
                transpose[j][i] = a[i][j];
            }
            printf("\n");
        }
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++){
                printf("%d ",transpose[i][j]);
            }
            printf("\n");
        }
        
    
    
    return 0;
}