#include <stdio.h>

int main (){

    unsigned int val1, val2;
    
    while(scanf(" %u %u", &val1, &val2) != EOF){

    printf("%u", val2 ^ val1);
    printf("\n");
    }
    return 0;
}
