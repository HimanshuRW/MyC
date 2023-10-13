#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int num = n;
    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++) scanf("%d ",&arr[i]);
    for (int i = 0; i < n; i++) printf("%d ",arr[i]);
    printf("------------------\n");

    // ---------------------------------------------
        for (int i = 0; i < n; i++){
            // if negetive -> move to last
            if (arr[i]<0)
            {
                int e = arr[i];
                printf("abhi e hai -> %d\n",e);

                // movin last
                for (int j = i; j < num; j++)
                {
                    printf("making %d to %d\n",arr[j],arr[j+1]);
                    arr[j]=arr[j+1];
                    if(j==(num-1)) arr[j] = e;
                }
                for (int j = 0; j < n; j++) printf("%d ",arr[j]);
                printf("\n-----------------------------\n");
                i--;
                n--;
            }
            
        }
        for (int i = 0; i < num; i++) printf("%d ",arr[i]);
        
    return 0;
}