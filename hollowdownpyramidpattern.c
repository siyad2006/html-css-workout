#include<stdio.h>
int main(void){
    int i,j;
    int n;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=(n*2-(2*i-1));j++){
            if(i==1||j==1||j==(n*2-(2*i-1))){
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
}