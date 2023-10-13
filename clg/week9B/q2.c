#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[100];
    printf("Enter the String : ");
    scanf("%s",a);
    char *ptr = a;
    int len;
    for (len = 0; *(ptr+len)!='\0'; len++);
    for (int i = 0; i < len/2; i++)
    {
        char temp = *(ptr+i);
        *(ptr+i)=*(ptr + len-i-1);
        *(ptr+len-i-1)=temp;
    }
    printf(ptr);
    
    return 0;
}