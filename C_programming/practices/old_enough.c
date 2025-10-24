// AS 6th old enough - C

#include <stdio.h>
#include <string.h>

int main(void){
    int age;
    char name[50];

    printf("please tell me your age: ");
    scanf("%d", &age);
    
    if(age >= 18){
        printf("you can vote!\n");
    }else if(age >= 16){
        printf("you can drive!\n");
    } else if(age == 15){
        printf("you can get a learners permit!\n");
    } else if(age >= 5){
        printf("you can go to school!\n");
    } else {
        ("you cannot do any of this!\n");
    }

    return 0; 
}