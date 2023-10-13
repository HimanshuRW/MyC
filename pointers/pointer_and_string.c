#include <stdio.h>

int main(){
    char str[10];
    printf("Enter the string (upto 10 chars) : ");
    scanf("%s",str);
    printf("String is : %s\n",str);
    char *ptr = str;
    printf("Name of String is the pointer to its 0th index, str (int): %d\n",str);
    printf("ptr (int): %d\n",ptr);
    printf("*ptr (char): %c\n",*ptr);
    printf("Name of String is the pointer to its 0th index, str+1 (int): %d\n",str+1);
    printf("Name of String is the pointer to its 0th index, *(str+1) (char): %c\n",*(str+1));
    printf("*(ptr+1) str[1] (char): %c\n",*(ptr+1));
    ptr= ptr+2;
    printf("ptr+=2;*ptr str[2] (char): %c\n",*ptr);
    printf("&str, pointer to first element (int): %d\n",&str);
    printf("*(&str),value of pointer to first element which is address (int): %d\n",*(&str));
    printf("**(&str),value at address (char): %c\n",**(&str));
    printf("*(*(&str)+1),next element (char): %c\n",*(*(&str)+1));
    printf("*(&str+1),pointer after the string ends (int): %c\n",*(&str+0));

    return 0;
}