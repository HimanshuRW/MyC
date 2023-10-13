#include <stdio.h>

int main()
{
    int a[5] = {0,2,1,2,0},n=5;

    // ---
    int c0=0,c1=0,c2=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0) c0++;
        else if(a[i]==1) c1++;
        else c2++;
    }
    for(int j = 0;j<n;j++){
        if (c0>0){
            a[j]=0;
            c0--;
        }
        else if (c1>0){
            a[j]=1;
            c1--;
        }
        else if (c2>0){
            a[j]=2;
            c2--;
        }
        
    }
    
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("]");
    return 0;
}