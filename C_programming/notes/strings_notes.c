// AS 6th strings notes
#include <stdio.h>
#include <string.h>

int main(void){

    char name[100] = "adelheid";
    char last_name[25];
    char full_name[100];

    name[2] = 'j';
    printf("please tell me your last name: \n");
    scanf("%s\n", last_name);

    printf("[%s]\n", name);

    strcat(full_name, " ");
    printf("[%s]\n", full_name);
    strcat(full_name, " ");
    strcat(name, full_name);
    printf("[%s]\n", full_name);

    strcmp(last_name, "shomaker"); // returns 0 if equal

    printf("%zu\n", strlen(full_name));
    printf("%zu\n", sizeof(full_name));


    

    return 0;
}


/*What is the difference between a string and a character?
    char means we are dealing with letters.
    strings are very specific lists of characters.

What types of quotation marks do we need for a string?
    we use double quotes because single quotes give us an error.

What library do we need to include to access the string functions in C?
    <string.h>

List functions the library allows us to use.
    strlen, strcat, strcmp
    
How do we concatenate strings in C?
    strcat() it only lets you do it with 2 strings.

How do we get individual characters from a string in C?
    by using []*/