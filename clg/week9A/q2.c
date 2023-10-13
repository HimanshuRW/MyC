#include <stdio.h>

int main(){
    int a,b;
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    int *pa=&a,*pb=&b;
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("a: %d\t b: %d",a,b);
    return 0;
}