#include <stdio.h>
 
int main() {

    int v;
    
    scanf("%d", &v);
    
    printf("%d\n", v);
    printf ("%d nota(s) de R$ 100,00\n", v/100);
    printf ("%d nota(s) de R$ 50,00\n", (v%100)/50);
    printf ("%d nota(s) de R$ 20,00\n", ((v%100)%50)/20);
    printf ("%d nota(s) de R$ 10,00\n", (((v%100)%50)%20)/10);
    printf ("%d nota(s) de R$ 5,00\n", ((((v%100)%50)%20)%10)/5);
    printf ("%d nota(s) de R$ 2,00\n", (((((v%100)%50)%20)%10)%5)/2);
    printf ("%d nota(s) de R$ 1,00\n", ((((((v%100)%50)%20)%10)%5)%2)/1);
    
    
    return 0;
}