#include <stdio.h>
 
int main() {
 
    int a, b;
    scanf("%d %d", &a, &b);
    if (b>a){
        if (b%a){
            printf("Nao sao Multiplos\n");
        }
            else{
                printf("Sao Multiplos\n");
            }}
    else{
        if (a%b){
            printf("Nao sao Multiplos\n");
        }
            else{
                printf("Sao Multiplos\n");
            }}
    return 0;
}