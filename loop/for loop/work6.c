//print odd no. from n to 1 using for loop.
#include<stdio.h>
int main (){
   int i=1,n;
   printf("enter no :");
   scanf("%d",&n);
   // even  number n to 1
   
    for (int i = 1; n>=i; n--){
      if (n%2==0){
        printf("%d \n",n);
      }
      
   }
    return 0;
}
