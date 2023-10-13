#include <stdio.h>

int main(){
    int arr[][3]={1,2,3,4,5,6,7,8,9};

    printf("\narr: %d",arr);
    printf("\n*arr returns an array (first element) which itself is pointer to iteself: %d",*arr);
    printf("\n*(arr+1) - pointer to second row : %d",*(arr+1));
    printf("\n*(*(arr+1)+1) - value of pointer to second element of second row : %d",*(*(arr+1)+1));
    printf("\n*(*(arr+1)) - value of first element of second row : %d",*(*(arr+1)));
    printf("\n**arr value of first element of returned array: %d\n",**arr);
    printf("(&(*arr)+1) pointer to pointer second row (full array): %d\n",(&(*arr)+1));
    printf("*(&(*arr)+1) pointer to second row (full array): %d\n",*(&(*arr)+1));
    printf("**(&(*arr)+1) value of pointer to second row (full array): %d\n",**(&(*arr)+1));
    printf("*(*(&(*arr)+1))+1) value of pointer to second row (full array) second element: %d\n",*(*(&(*arr)+1))+1);
    return 0;
}

// for study purpose assume -> int arr[2][3][2] = { {{5, 10}, {6, 11}, {7, 12}}, {{20, 30}, {21, 31}, {22, 32}} };
// and then see this https://media.geeksforgeeks.org/wp-content/uploads/diagram.png