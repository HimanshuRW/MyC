#include <stdio.h>
#include <stdlib.h>

int main(){
    int r,c;
    printf("Enter rows and columns : ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int (*ptr)[c] = a;
    
    for (int i = 0; i < r; i++)
    {
        printf("\nEnter %dth Row elements : \n",i);
        for (int j = 0; j < c; j++)
        {
            printf("%dth : ",j);
            scanf("%d ",*(ptr+i)+j);
        }   
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) printf("%d ",*(*(ptr+i)+j));
        printf("\n");
    }
    printf("ho gaya");
    
    return 0;
}