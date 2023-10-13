#include <stdio.h>

int main(){
    int str[100];
    printf("Enter the String : ");
    scanf("%d",str[0]);
    int *ptr = &str[0];
    printf("%c\n",*ptr);
    printf("%s",str);
    return 0;
}