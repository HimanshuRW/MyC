#include <stdio.h>

int main()
{
    int n=3;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    printf("------------------\n");

    // [1 2 3]             [7 4 1]          [1 4 7]
    // [4 5 6]             [8 5 2]          [2 5 8]
    // [7 8 9]             [9 6 3]          [3 6 9]

    int transpose[n][n];
    for(int i =0;i<n;i++) {
        for(int j=0; j<n; j++){
            transpose[i][j]=a[j][i];
        }
    }
    // --------------------------------
    printf("----------------------\n");
    // ----- print transpose  
    for(int i =0;i<n;i++) { // all rows
        for (int j = 0; j < n; j++) printf("%d ",transpose[i][j]);
        printf("\n");
    }
    printf("----------------------\n");
    // ----- mirror from middle column 
    for(int i =0;i<n;i++) { // all rows
        for (int j = 0; j < n/2; j++)
        {
            int e= transpose[i][j];    
            transpose[i][j] = transpose[i][n-j-1];
            transpose[i][n-j-1]=e;
        }
        
    }
    // --------------print mirrored transpose ------------------
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}