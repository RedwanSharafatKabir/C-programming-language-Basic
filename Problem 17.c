#include<stdio.h>
int main()
{
    int a,j=1,i;
    scanf("%d",&a);
    while(j<=a)
    {
    for(i=1;i<=j;i++){
      printf("*");
    }
      j++;
      printf("\n");
    }

    return 0;
}



