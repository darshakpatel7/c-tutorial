//Find max. from given 2 no. using ternary operator.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter a&b :");
    scanf("%d %d",&a,&b);

    //ternary oerator using minimum two velue
    (a<b)?printf("a is minimum"):printf("b is minimum");

    return 0;
}