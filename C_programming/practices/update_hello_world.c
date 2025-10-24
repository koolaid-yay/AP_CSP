// AS 6th update hello world - C

#include <stdio.h>

void greet(const char* name){
    printf("hello! %s\n", name);
}

int main(){
    greet("santa");
    greet("silly man");
    greet("funny guy");
    greet("rambo");
    greet("insane lady");

    return 0;
}