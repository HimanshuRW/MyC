#include <stdio.h>
#include <string.h>
// comparision and sorting names
int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    char names[n][30];
    for (int i = 0; i < n; i++)
    {
        printf("Student %d Name : ", i + 1);
        scanf("%s", names[i]);
    }
    printf("---------------------------\n");
    printf("Names : ");
    for (int i = 0; i < n; i++)
        printf("%s ", names[i]);

    // ------------- sorting -------------
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int comp = strcmp(names[i], names[i + 1]);
            if (comp > 0) // current string is bigger
            {
                char temp[20];
                // copying names[i] to temp
                strcpy(temp, names[i]);
                // copying names[i+1] to names[i]
                strcpy(names[i], names[i + 1]);
                // copying temp to names[i+1]
                strcpy(names[i + 1], temp);
            }
        }
    }

    printf("\nSorted : ");
    for (int i = 0; i < n; i++)
        printf("%s ", names[i]);
    return 0;
}