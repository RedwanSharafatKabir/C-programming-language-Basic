#include <stdio.h>
int main()
{
    int row, col, rows, space;
    scanf("%d",&rows);
    for(row=1; row<=rows; row++)
    {
        for(space=1; space<=rows-row; space++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++){
            printf("*");
        }
        printf("\n");
    }


     for(row=rows-1; row>=1; row--)
    {
        for(space=rows-row; space>=1; space--)
        {
            printf(" ");
        }
        for(col=2*row-1;col>=1;col--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


