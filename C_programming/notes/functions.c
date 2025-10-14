// AS 6th functions notes
#include <stdio.h>

void birthday(char* name, int age){
    printf("happy birthday to you\n");
    printf("happy birthday to you\n");
    printf("happy birthday dear %s\n", name);
    printf("happy birthday to you\n");
    printf("happy birthday %s is now %d\n", name, age);
}

int add(int num_one, int num_two){
    return num_one + num_two;
}

char* get_name(void){
    char *name;
    printf("what is your name: ");
    scanf("%s",name);
    return name;
}
    int main(void){
        birthday("santa", 5000);
        birthday("fanta", 10);
        birthday("hi", 910);
        char* user = get_name();
        birthday(user, 5);
        int addition = add(5,4);
        printf("%d\n", addition);
        printf("%d\n", add(50,37));

        return 0;
    }



/*What a function is
    like variables but instead they store actions.

Why we use functions
    so we can have a main function so it runs.

How to write a function in C
    we do not write functions in another function.

What are arguments and parameters?
    parameter is what you put in parenthesis by the variable and void.

How do arguments and parameters work together?
How to use parameters and arguments in c
    for parameters we put what we want to change on each output.

What are return statements?
    taking one thing and replacing the call with it.

How do return statements change how you define a function in C?
What do return statements do with the information?
    */