//AS 6th silly sentences
#include <stdio.h>
#include <string.h>

int main(void){

    char name[100];
    char silly[25];
    char giggle[25];

    printf("enter your evil name pretty please pleaseee: ");
    scanf("%s", name);
    printf("now enter the silliest thing you can think of: ");
    scanf("%s", silly);
    printf("finally, enter a thing that makes you giggle: ");
    scanf("%s", giggle);

    printf("%s is evil and silly. one day the stumbled upon a %s. it made them giggle. %s makes me giggle.\n", name, silly, giggle);


    return 0;
} 