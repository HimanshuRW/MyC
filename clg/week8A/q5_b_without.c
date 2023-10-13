#include <stdio.h>
// comparision and sorting names without libaray
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
            // int comp = strcmp(names[i], names[i + 1]);
            // current string is names[i] and next string is names[i+1]
            int comp;
            for (int l = 0; names[i][l]!='\0' && names[i+1][l]!='\0'; l++)
            {
                if(names[i][l]>names[i+1][l]){
                    comp = 1;
                    break;
                } else if (names[i][l]<names[i+1][l]){
                    comp = -1;
                    break;
                } else comp = 0;
            }
            
            
            if (comp > 0) // current string is bigger
            {
                int l;
                char temp[30];
                // copying names[i] to temp
                // strcpy(temp, names[i]);
                for (l = 0; l<30; l++) temp[l]=names[i][l];
                
                // copying names[i+1] to names[i]
                // strcpy(names[i], names[i + 1]);
                for (l = 0; l<30; l++) names[i][l]=names[i+1][l];

                // copying temp to names[i+1]
                // strcpy(names[i + 1], temp);
                for (l = 0; l<30; l++) names[i+1][l]=temp[l];
            }
        }
    }

    printf("\nSorted : ");
    for (int i = 0; i < n; i++)
        printf("%s ", names[i]);
    return 0;
}