#include <stdio.h>

int main()
{
    int n, m, i, j, x = 0, y = 0;
    printf("Enter the lenght of arrays A and B : ");
    scanf("%d %d", &n, &m);
    int a[n], b[m], u[(n + m)], smaller;
    smaller = n > m ? m : n;
    int inter[smaller];
    for (i = 0; i < n; i++)
    {
        printf("A %d : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < m; i++)
    {
        printf("B %d : ", i);
        scanf("%d", &b[i]);
    }
    printf("--------------------------\n");
    printf("A : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nB : ");
    for (i = 0; i < m; i++)
        printf("%d ", b[i]);
    printf("\n--------------------------\n");

    // -------------------------------------------------------------

    for (i = 0; i < n; i++)
    {
        int already_present = 0;
        for (j = 0; j < x; j++)
            if (u[j] == a[i])
                already_present = 1;
        if (already_present == 0)
        {
            u[x] = a[i];
            x++;
        }
    }
    for (i = 0; i < m; i++)
    {
        int already_present = 0;
        for (j = 0; j < x; j++)
            if (u[j] == b[i])
                already_present = 1;
        if (already_present == 0)
        {
            u[x] = b[i];
            x++;
        }
    }
    printf("U : ");
    for (i = 0; i < x; i++)
        printf("%d ", u[i]);

    // ---------------------------------------------------------

    for (i = 0; i < n; i++){
        int current_element = a[i];
        for (j = 0; j < m; j++){
            if (current_element == b[j]){
                // check if already present in inter array
                int already_present = 0;
                for (int k = 0; k < y; k++)
                    if (inter[k] == current_element)
                        already_present = 1;
                if (already_present == 0){
                    inter[y] = current_element;
                    y++;
                }
            }
        }
    }
    printf("\nI : ");
    for (i = 0; i < y; i++)
        printf("%d ", inter[i]);

    return 0;
}