#include<stdio.h>
int main(void){
    int j,i;
    int n,s;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(s=0;s<n-i-1;s++){
            printf(" ");
        }
        for(j=0;j<n;j++)
        printf("* ");
        printf("\n");
    }
}