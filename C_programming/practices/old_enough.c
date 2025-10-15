// AS 6th old enough - C

#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    char name[50];

    printf("please tell me your age: ");
    scanf("%d", &age);
    
    if(age <= 18){
        }printf("you can vote!\n");
    }else if(age <= 16){
        printf("you can drive!\n");
    }

    return 0;
}