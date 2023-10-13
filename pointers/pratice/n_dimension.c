#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w = 4, x = 3, y = 2, z = 3;
    int a[w][x][y][z];
    for (int i = 0; i < w; i++)
    {
        // base address of ith 3d array = *(a+i)
        for (int j = 0; j < x; j++)
        {

            // base address of jth 2d array = *(*(a+i)+j)
            for (int k = 0; k < y; k++)
            {
                // base address of kth 1d array = *(*(*(a+i)+j)+k)
                for (int l = 0; l < z; l++)
                {
                    // address of lth element = *(*(*(a+i)+j)+k)+l
                    *(*(*(*(a+i)+j)+k)+l) = l+(k*y)+(j*x*y)+(i*w*x*y);
                }
            }
        }
    }
    for (int i = 0; i < w; i++)
    {
        // base address of ith 3d array = *(a+i)
        for (int j = 0; j < x; j++)
        {

            // base address of jth 2d array = *(*(a+i)+j)
            for (int k = 0; k < y; k++)
            {
                // base address of kth 1d array = *(*(*(a+i)+j)+k)
                for (int l = 0; l < z; l++)
                {
                    // address of lth element = *(*(*(a+i)+j)+k)+l
                    printf("a[%d][%d][%d][%d] : %d\n",i,j,k,l,*(*(*(*(a+i)+j)+k)+l));
                }
            }
        }
    }

    return 0;
}