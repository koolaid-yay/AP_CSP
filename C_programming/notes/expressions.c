// AS 6th expressions notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.141592653589; 

    printf("8/3 =%d\n",(float) 8/3);
    printf("8/3 =%1.2f\n", 8/3.0);
    printf("2 ^ 4 = %f\n", (int)pow(2,4));

    printf("%f",2.4+5);

    year += 1;
    year++;

    return 0;
}

/* What is the difference between an integer and a float in C?
    ints take whole numbers and floats take decimals. 

How does C handle integer division compared to float division?
    every division is the same division.

List the arithmetic operators available in C and their functions.
    + addition 
    - subtraction
    / division
    * multiplication
    % modulo (remainder)

What is the modulus operator, and how is it used?
    % rounds up the remainder

How do you round a float to the nearest integer in C?


What is type casting in C? Provide an example of explicit type casting.
     type float in parenthesis to cast

How do compound assignment operators work in C? List three examples.
    use incrimentor which shortens code and does exact same thing.

What is the purpose of the math.h library? Name three functions it provides.
    it shows you all possible math symbols 


How do you print a float with a specific number of decimal places using printf()?

What happens when you mix integer and float operations in C?
    the operation will always be a float */