//Find min. from given 3 no. using ternary operator.
#include<stdio.h>>
int main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);

    if (a<b){
            if(a<c){
            printf("a is max");
        }
            else{
            printf("c is max");
        }
    }
    else{
            if(b<c){
            printf("b is max");
        }
            else{
            printf("c is max");
        }
           
    }    
    return 0;
}