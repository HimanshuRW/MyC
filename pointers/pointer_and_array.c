#include <stdio.h>

int main(){
    // ------- integer array ----------
    int arr[] = {1,2,3,4};
    int *ptr = arr;
    printf("ptr = %d, *ptr = %d\n",ptr,*ptr);
    ptr++;
    printf("ptr = %d, *ptr = %d\n",ptr,*ptr);
    ptr=ptr+1;
    printf("ptr = %d, *ptr = %d\n",ptr,*ptr);
    printf("Name of array is the pointer to its first element, arr : %d\n",arr);
    printf("Name of array is the pointer to its first element, *arr : %d\n",*arr);
    printf("Name of array is the pointer to its first element, *(arr+1) : %d\n",*(arr+1));
    printf("arr+1 = &arr[1] : %d, *(arr+1)=a[1] : %d\n",arr+1,*(arr+1));
    printf("arr+2 = &arr[2] : %d, *(arr+2)=a[2] : %d\n",arr+2,*(arr+2));
    printf("arr+3 = &arr[3] : %d, *(arr+3)=a[3] : %d\n",arr+3,*(arr+3));
    printf("arr+4 = &arr[4] : %d, *(arr+4)=a[4] : %d\n",arr+4,*(arr+4));
    printf("&arr = pointer to arr[0] : %d\n",&arr);
    printf("&arr+1 = pointer to arr[0] : %d\n",&arr+1);
    printf("*(&arr) = address of arr[0] : %d\n",*(&arr));
    printf("**(&arr) = value at address of arr[0] : %d\n",**(&arr));
    printf("*(&arr)+1 = address of arr[1] : %d\n",*(&arr)+1);
    printf("*(&arr+1) = address just after array ends : %d\n",*(&arr+1));
    return 0;
}