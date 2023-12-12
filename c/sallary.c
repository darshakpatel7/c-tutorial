#include<stdio.h>
int main(){
    int salary;
    float hra, da, ta, grossalary;
    printf("enter your basic salary");
    scanf("%d" ,&salary);

    hra = (float)salary*10/100;
    da = (float)salary*5/100;
    ta = (float)salary*8/100;
    grossalary = salary+hra+da+ta;

    printf("\n gross salary is %.2f",grossalary);
    return 0;
 
}