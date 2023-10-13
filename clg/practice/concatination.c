#include <stdio.h>

int main(){
    int size=100,i;
    char first[size],second[size];
    // scanf("%s",name);
    // or
    printf("Enter the first string : ");
    gets(first);
    printf("Enter the second string : ");
    gets(second);

    for (i = 0; first[i] != '\0'; i++);
    printf("i -> %d\n",i);
    for (int j = 0; second[j]!='\0'; j++)
    {
        first[i]=second[j];
        i++;
    }
    first[i] = '\0';
    
    printf("\nFirst String : %s",first);
    printf("\nSecond String : %s",second);
    
    return 0;
}