// AS 6th loops notes
#include <stdio.h>

int main(void){
    int nums[] = {5,90,91,1,9};
    char candy [5][20] = {"skittles", "butterfingers", "reeses", "twix", "kitkat"};

    for(int x = 0; x < 11; x++){
        printf("%d\n", nums[x]);
    }

    for(int i=0; i < 5; i++){
        printf("%s is my favorite candy!\n", candy[i]);
    }

    for(int num = 1; num < 11; num++){
        printf("%d\n", num);
    }

    int goose = 6;
    int count = 0;
    while(count != goose){
        printf("duck\n");
        count++;
    }
    printf("goose!");

    return 0;
}
/*What is a loop? 
    a loop quite literally loops code until told to stop.
    
What are the two types of loops?
    for loops and while loops.

What is iteration?
    the process of repeating a code until the requirement is met.

What are arrays? 
    the same as lists but python is the only coding program that calls it lists.

How do you make lists in C? 
    set data type and give how many items and you also use curly brackets. 
    we also need commas between each item.

How do you make for loops in C? 
    set start point end point and what we are counting by.
    we don't need to be connected to an array.

How do you make while loops in C?
  int goose = 6;
    int count = 0;
    while(count != goose){
        printf("duck\n");
        count++;
    }
    printf("goose!"); */