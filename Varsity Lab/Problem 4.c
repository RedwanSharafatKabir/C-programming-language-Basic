#include<stdio.h>
int main()
{
    int row, rows, space, col;
    scanf("%d", &rows);
    for(row=1;row<=rows;row++){
        for(space=1;space<=rows-row;space++){
            printf(" ");
        }
        for(col=space;col<=rows;col++){
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}

