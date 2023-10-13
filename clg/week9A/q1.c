#include <stdio.h>
#include <string.h>

int main()
{
    int var=20,*ptr;
    ptr=&var;
    printf("var = %d\n",var);
    printf("ptr = %d\n",ptr);
    printf("*ptr = %d\n",*ptr);

    return 0;
}