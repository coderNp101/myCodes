// 03 / 07 / 2020
// including header files
#include <stdio.h>

int main()
{
    int h;
    // asking users for height of pyramid
    do
    {
        printf("Height: ");
        scanf("%d", &h);
    }
    while (h < 1 || h > 9);
    
    // making the adjacent pyramid
    int i, j, a, k;
    for (i = h; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (a = 0; a < 2; a++)
        {
            for (k = h; k >= i; k--)
            {
                printf("лл");
            }
            if (a == 0)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
