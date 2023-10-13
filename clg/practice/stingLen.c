#include <stdio.h>

int main(){
    int size=20,i;
    char name[size];
    // scanf("%s",name);
    // or
    printf("Enter the name : ");
    gets(name);

    for (i = 0; name[i] != '\0'; ++i);
    printf("Lenght of String is %d",i);
    
    return 0;
}