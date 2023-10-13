#include <stdio.h>

int main()
{
    int arr[10] = {6, 3, 4, 7, 9, 2, 6, 3, 14, 11}, start, end, k;
    printf("Enter the starting index : ");
    scanf("%d", &start);
    printf("Enter the ending index : ");
    scanf("%d", &end);
    printf("Enter the Kth : ");
    scanf("%d", &k);

    // ---
    int used[k];
    for (int y = 0; y < k; y++)
    {
        used[y]=-1;
    }
    
    for (int x = 0; x < k; x++)
    {
        int i = start;
        int smallest=-1;
        for (; i <= end; i++)
        {
            int there=0;
            for(int j=0;j<k;j++){
                if(i==used[j]) there = 1;
            }
            if (there==0) {
                printf("Yes i m available %d\n",arr[i]);
                if(smallest==(-1)) smallest=i;
                else if(arr[smallest]>arr[i]) smallest=i;
            }
        }
        used[x]=smallest;
        printf("[ ");
        for (int l = 0; l < k; l++)
        {
            printf("%d ",used[l]);
        }
        printf("]\n");
    }
    printf("Ans index-> %d",arr[used[k-1]]);
    
    return 0;
}