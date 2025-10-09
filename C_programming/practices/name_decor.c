// AS 6th name decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[100];

    printf("enter your name please: \n");
    scanf("%s", name);

    strcat(name, "}}");
    printf("%s", name);


    return 0;
}