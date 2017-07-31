#include <stdio.h>

int add(int x, int y){
    return x + y;
}

void out(const char* adrs, const char* name){
    printf("hello, myname is %s %s.\n", adrs, name);
}
