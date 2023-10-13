#include <stdio.h>

int main(){
    int a[5][5];
    for (int i = 0; i < 5; i++) for (int j = 0; j < 5; j++) a[i][j]=i+j;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    int r1,r2,c1,c2,sum=0;
    printf("Enter the first point : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the second point : ");
    scanf("%d %d",&r2,&c2);

    for (int i = r1; i <= r2; i++) for (int j = c1; j <= c2; j++) if(i==r1 || i==r2 || j==c1 || j==c2) sum = sum + a[i][j];
    
    printf("%d",sum);
    
}