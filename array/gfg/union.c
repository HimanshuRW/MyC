#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the size of a : ");
    scanf("%d", &n);
    printf("Enter the size of b : ");
    scanf("%d", &m);
    int a[n], b[m];
    printf("Enter the elements of a : ");
    for (int i = 0; i < n; i++)
        scanf("%d ", &a[i]);
    printf("Enter the elements of b : ");
    for (int i = 0; i < m; i++)
        scanf("%d ", &b[i]);
    printf("a : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nb : ");
    for (int i = 0; i < m; i++)
        printf("%d ", b[i]);
    printf("\n------------------\n");

    // ---------------------------------------------
    int doneA[n];
    int doneB[m];
    int count = 0;
    for (int i = 0; i < n; i++) doneA[i] = -1;
    for (int i = 0; i < m; i++) doneB[i] = -1;

    for (int i = 0; i < n; i++){
        int found = 0;
        for (int j = 0; j < n; j++)
            if (a[i] == doneA[j])
                found = 1;
        if (found == 0)
        {
            doneA[i] = a[i];
            count++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int e = b[i];
        int found =0;
        for(int j =0; j<m;j++){
            if(doneB[j]==e) found = 1;
        }
        if(found==0){
            doneB[i]=e;
            count++;
        }
    }
    

    // checking common elements in doneA and doneB
    for (int i = 0; i < n; i++){
        if (doneA[i] != (-1)){
            int e = doneA[i], found = 0;
            for (int j = 0; j < m; j++){
                if (e == doneB[j]) count--;
            }
        }
    }
    printf("doneA : ");
    for (int i = 0; i < n; i++) printf("%d ",doneA[i]);
    printf("\ndoneB : ");
    for (int i = 0; i < m; i++) printf("%d ",doneB[i]);
    printf("\ncount -> %d\n",count);
    return 0;
}