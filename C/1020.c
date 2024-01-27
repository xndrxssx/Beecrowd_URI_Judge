#include <stdio.h>
 
int main() {

    int i;
    
    scanf("%d", &i);
    
    printf("%d ano(s)\n", i/365);
    printf("%d mes(es)\n", (i%365)/30);
    printf("%d dia(s)\n", ((i%365)%30)/1);
    return 0;
}