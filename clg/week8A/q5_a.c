#include <stdio.h>
#include <string.h>
// Substring
int main(){
    char str[100],sub[100];
    printf("Enter the String : ");
    scanf("%s",&str);
    printf("Enter the Sub String : ");
    scanf("%s",&sub);
    int found = 0;
    int counter = 0;
    for (int i = 0; str[i]!='\0'; )
    {
        int j=0;
        printf("For loop : str[%d]=%c sub[%d]=%c\n",i,str[i],j,sub[j]);
        while (str[i]==sub[j])
        {
            printf("%c - %c at %d - %d\n",str[i],sub[j],i,j);
            i++;
            j++;
        }

        // ---- with library ---
        // if(j==(strlen(sub))){
        //     found = 1;
        // }

        // ---- without library ---
        if(sub[j-1]=='\0'){
            found = 1;
        }
        if(j==0) i++;
    }
    printf("-------------------\n");
    if (found) printf("Found");
    else printf("Not found");
    

    return 0;
}