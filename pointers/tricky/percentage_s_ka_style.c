#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    char str[] = "Himanshu is a good boy";
    p = str;
    printf("%s\n", p + 10);
    // tell the output ?
    // Each letter in str[] array is stored in seperate address.
    //The starting address in str[] array is stored a pointer variable ptr which is then incremented by 10
    //. Thus "Himanshu i" is neglected and "s a good boy" is displayed.return 0;

    char *ptr = "helloworld";
	printf(ptr + 4);
    // same as above

    ptr = "HelloWorld";
	printf("\nptr : %d\n",ptr);
	printf("*ptr : %c\n",*ptr);
	printf("&*ptr : %d\n",&*ptr);
    printf("*&*ptr : %d\n",*&*ptr);

    char a = 30;
    char b = 5;
    char c =99;
    int k=2;
	char *x = &a, *y = &b, *l=&c;int *z=&k; 
    // fun fact -> all these got contineous memory
    // u can put the int declation between chars.. and see how memory locations chnage

    // ---------------- SIH UPLOAD -------------------
	printf("%d %d %d %d", x,y,l,k);

}