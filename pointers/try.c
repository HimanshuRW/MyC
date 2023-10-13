#include <stdio.h>

int main(){
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    // name of array is the adress to its first element
    // int *ptr = arr; means ptr pointing to first element of array
    // ptr++ means increase the value of data by one ,, means not its pointing ot second element of array
    // &arr returns a pointer pointing to array overall as a chunk of memory...
    // means &arr+1 is memory just next to where arr ends
    // arr[2][3]  so &arr[0]+1 will return memory adress of starting of arr[1] which is itself an array of three elements
    int *ptr = arr[0];
    printf("&arr->%d arr->%d ptr->%d\n",&arr[0],arr,ptr);
    ptr++;
    printf("&arr->%d arr->%d ptr->%d\n",&arr[0]+1,arr,ptr);
    return 0;
}