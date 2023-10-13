#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int k, chnages = 0;
    printf("Enter the value of K : "); scanf("%d", &k);
    printf("Enter the srting 1 : "); scanf("%s", s1);
    printf("Enter the srting 2 : "); scanf("%s", s2);

    if (strlen(s1) == strlen(s2))
    {
        for (int i = 0; i < strlen(s1); i++)
        {
            char current_char = s1[i];
            int found = 0;
            for (int j = 0; j < strlen(s2); j++)
            {
                char s2_char = s2[j];
                if (current_char == s2_char)
                { // it found
                    found = 1;
                    for (int k = j; k <= strlen(s2); k++) s2[k] = s2[k + 1];
                }
            }
            if (found == 0) chnages++;
        }
    }
    else chnages = k + 1;

    if (chnages > k) printf("Not K-anagrams");
    else printf("Are K-anagrams");

    return 0;
}