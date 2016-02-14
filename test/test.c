#include <stdio.h>
#include "../src/hello.h"

int main(){

    int result;

    result = hello(1);

    printf("Result: %d", result);

    return(0);
}
