//pointer thi name length print
#include <stdio.h>              
#include <string.h>

int main() {

    char str[100],*ptr;
    int count=0;

     printf("enetr name = ");
     gets(str);
     printf("name is = ");
     puts(str);

    ptr = str;
    while(*ptr != '\0') {
            count++;
            ptr++;
    }
    printf("string length is: %d", count);

    return 0;

}
