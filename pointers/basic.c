#include <stdio.h>

int main(){
    int arr[]={1,2,3,4};
    int brr[]={11,22};
    int x=5,y=10;
    int *p = &x;
    int *q = &y;
    int *r = p;

    printf("2[arr] : %d, arr[2] : %d\n",2[arr],arr[2]);
    printf("p : %d, q : %d\n",p,q);
    printf("&(2[p]) : %d, &(p[2]) : %d, p+2:%d\n",&(2[p]),&(p[2]),p+2);

    // --- r they same ?
    int *a = *&arr;
    int *b = &arr[0];

    int *c = brr;
    int **d = &c;
    printf("Size of pointer %d\n",sizeof(d));
    printf("c: %d, *c : %d, c+1:%d\n",c,*c,c+1);
    printf("d: %d, *d : %d, **d: %d, d+1: %d\n",d,*d,**d,d+1);

    printf("before edit -> *p : %d, *q : %d\n",*p,*q);
    x++;
    printf("after edit -> *p : %d, *q : %d\n",*p,*q);
    return 0;
}