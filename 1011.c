#include <stdio.h>
#include <math.h>
 
int main() {
    double pi, r;
    
    pi = 3.14159;
    
    scanf("%lf", &r);
    printf("VOLUME = %.3lf\n", ((4.0/3)*pi*(pow(r, 3))));
    return 0;
}