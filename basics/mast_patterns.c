
// link -> just do them all and u r set for everything 
// https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTar2mJ6M51AbN0TcgT4kKK24XR1fEjIIAczP4R72lSzA&s

#include <stdio.h>

int main(){
    int rows;
    printf("enter the number of rows : ");
    scanf("%d",&rows);
    rows = rows+2;
    
    for (int i = 1; i <= rows-2; i++)
    {
            // printf("%d -> ",i);
        for (int j = 1; j <= rows-2; j++)
        {
            if(i+j<=(rows+1)/2 || i-j>=(rows-2)/2 || j-i>=(rows-2)/2 || i+j>=(rows-4)*2) printf("*");
            else printf(" ");
        }
        
        printf("\n");
    }
    
    
    return 0;
}