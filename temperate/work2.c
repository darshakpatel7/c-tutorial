//multiplication table of any number
#include<stdio.h>
int main(){
    int i,n,multi;
    printf("enter no :");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        multi=n*i;
        printf("\n %d * %d = %d",n,i,multi);
    }
    
    return 0;
}