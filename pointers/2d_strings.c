#include <stdio.h>

int main(){
    char str[][20]={"Himanshu","Anisha","Mehul","Jiya","Prachee"};
    // for (int i = 0; i < 5; i++){
    //     // travlling rows...
    //     // str+i is the pointer to pointer pointing at whole array of ith position
    //     // array at ith position is itself a pointer to actually array  
    //     // pointer to actually array can be used to traverse the array elements  
    //     printf("pointer to row pointer -> %d\n",(str+i));
    //     printf("row pointer-> %d\n",*(str+i));
    //     printf("value of row pointer pointing to second element -> %c\n",*(*(str+i)+1));
    // }
    printf("mehul ke h-> %c",*(*(str+2)+2));

    return 0;
}