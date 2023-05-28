#include <stdio.h>
 
int main() {
    char nome;
    double s, tv; 

    scanf("%s %lf %lf", &nome, &s, &tv);
    
    printf("TOTAL = R$ %.2lf\n", s+((tv/100)*15));
 
    return 0;
}