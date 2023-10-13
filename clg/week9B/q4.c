#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[100];
    printf("Enter the String : ");
    scanf("%s",a);
    char *ptr = a;
    int len;
    int palindrome = 1;
    for (len = 0; *(ptr+len)!='\0'; len++);
    for (int i = 0; i < len/2; i++) if(*(ptr+i)!=*(ptr + len-i-1)) palindrome=0;
    if(palindrome) printf("Yes, It is palindrome  !!");
    else printf("No... Its not palindrome..");
    
    return 0;
}