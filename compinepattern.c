#include<stdio.h>

int main(){
    int rows,i,j;
    printf("enter the number of roes");
    scanf("%d",&rows);
    for ( i = 1; i < rows; i++)
    {
        
        for(j=1;j<i;j++){
            printf(" * ");

        }
            printf("\n");

    }

    for(i=rows-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");

        }
        printf("\n");
    }

}