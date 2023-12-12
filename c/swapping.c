#include<stdio.h>
int main(){
    int a,b,c;
    printf("\n enter a&b:");
    scanf("%d %d",&a,&b);
    printf("\n before swapping A=%d,B=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swapping a=%d, B=%d ,a,b");
    
    
}