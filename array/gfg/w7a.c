#include <stdio.h>

int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int fr[n];
    printf("enter the elemtns of array : ");
    for (int i = 0; i<n;i++) {scanf("%d",&arr[i]); fr[i]=-1;}

    for (int i = 0; i <n; i++)
    {
        int current_digit = arr[i];
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==current_digit){ // matches
                if(fr[j]<0){
                    if (fr[i]==-1) fr[i]=1;
                    else fr[i] = fr[i] + 1;
                } else {
                    printf("%d par %d hai\n",j,arr[j]);
                    break;
                }
            }
            continue;
        }

    }
    
    for (int i = 0; i < n; i++)
    {
        if (fr[i]>0) printf("%d repeats %d times\n",arr[i],fr[i]);
        
    }
    
    
    
    return 0;
}