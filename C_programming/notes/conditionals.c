// AS 6th conditionals notes

#include <stdio.h>
#include <string.h>

int main(void){
    int grade;
    char name[50];
    printf("what is your grade: ");
    scanf("%d", &grade);

    printf("what is your name: ");
    scanf("%d", &name);

    printf("%d\n", strcmp(name, "adelheid"));
    if(strcmp(name, "adelheid") == 0){
        printf("you dont have a grade!\n");

    }
    else if(grade > 90){
        printf("you have an A!\n");
    }else if(grade >=80){
        printf("you have a B!\n");
    }else{
        printf("you dont have an A\n");
    }


    return 0;
}

/*What puts something inside of the “if” statement?
    parenthesis and curly brackets

How are conditions written in C?
    printf("%d\n", strcmp(name, "adelheid"));
    if(strcmp(name, "adelheid") == 0){
        printf("you dont have a grade!\n");

    }
    else if(grade > 90){
        printf("you have an A!\n");
    }else if(grade >=80){
        printf("you have a B!\n");
    }else{
        printf("you dont have an A\n");
    }

How do we write elif conditions in C?
    write out else if

When do else conditions run?
    when all previous statements dont meet the requirements
    
What are the 3 logical operators in C?
    && and
    || or
    ! not*/