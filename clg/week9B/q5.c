#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[100];
    printf("Enter the String : ");
    scanf("%s",a);
    char *ptr = a;
    int count = 0;
    printf("Vowels : ");
    for (int i = 0; *ptr!='\0'; i++){
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u'){
            count++;
            printf("%c ",*ptr);
        }
        ptr++;
    };
    printf("\nTotal Vowels : %d",count);
    
    return 0;
}