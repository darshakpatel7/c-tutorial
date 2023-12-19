#include<stdio.h>
int main(){
    char day;
    printf("enter day no :");
    scanf("%c",&day);

    switch (day){
    case 'm':
            printf("monday");
            break;
    case 't':
            printf("tuesday");
            break;
    case 'w':
            printf("wednesday");
            break;
    case 'T':
            printf("thursday");
            break;
    case 'f':
            printf("friday");
            break;
    case 's':
            printf("saturday");
            break;
    case 'S':
            printf("sunday");
            break;

    default:
            printf("no dayt");
            break;       
    }

    return 0;
}