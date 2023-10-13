#include <stdio.h>

int main()
{
    int arr,n,s;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the Sum : ");
    scanf("%d",&s);
    int a[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++) scanf("%d ",&a[i]);

    // ---------------------------------------------
        for (int i = 0; i < n; i++){
            // start with ith index 
            int sum = s;
            for (int j = i; j < n; j++)
            {
                if(sum==a[j]) {
                    printf("from : %d,  to : %d\n",i,j);
                    
                }
                sum = sum - a[j];
            }
        }
        
    
    
    return 0;
}