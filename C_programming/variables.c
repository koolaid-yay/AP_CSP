// AS 6th variables notes
/*
woahhhhhhhhhhhh multi-line comments
*/
#include <stdio.h>

int main(void){
    int num = 4;
    float pi = 3.14;
    char grade; //will only hold 1 letter
    char name[]= "adelheid";

    printf("what is your letter grade?: ");
    scanf("%c", &grade );

    printf("tell me a number: ");
    scanf("%d", &num );
    fgets(name, sizeof(name), stdin);

    printf("tell me your name: ");
    scanf("%s" , &name);



    printf("%d\n",num);
    printf("%s has a %c grade in the class!\n",name,grade);
    


    return 0; 
}

//What is the main difference between declaring variables in Python and C?
    //n c you have to set what type of data the variable will hold
    // static is data types 
    // dynamic is also a new thing
    // int is 4 bytes float is 4 bytes a double is 8 bytes a character (char) takes 1 byte
    //tell computer what type of info


//in C, what is the purpose of specifying a data type when declaring a variable?
    // tell computer info
    // % is the key to the cmoputer as a place holder


//List three common data types used in C and their corresponding format specifiers for printf().
    // char = c
    // string = s
    // integer = d
    // float = f
    // double = lf


//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    // int age = 25;


//What is the difference between printf() and scanf() functions in C?
    //printf prints your question/input while scanf gives you the output/answer


//How do you add comments in C?
    // two slashes and if you wanna write big bodies of text its /**/


//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    // allows the program to use the input/output


//In C, what is the significance of the main() function?
    // its the entry point for all programs terminal


//What is the difference between %d and %f format specifiers in printf()?


//How do you print a newline character in C?


//What is the purpose of the & symbol when using scanf() to get user input?


//How do you declare a constant in C? Provide an example.

