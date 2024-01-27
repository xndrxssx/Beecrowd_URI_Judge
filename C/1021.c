#include <stdio.h>
 
int main() {
 
    double resto=0, n;
    int a, moedas;
    
    scanf("%lf", &n);

    a=n;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a/100);
    printf("%d nota(s) de R$ 50.00\n", ((a%100)/50));
    printf("%d nota(s) de R$ 20.00\n", (((a%100)%50)/20));
    printf("%d nota(s) de R$ 10.00\n", ((((a%100)%50)%20)/10));
    printf("%d nota(s) de R$ 5.00\n", (((((a%100)%50)%20)%10)/5));
    printf("%d nota(s) de R$ 2.00\n", ((((((a%100)%50)%20)%10)%5)/2));

    resto=((((((a%100)%50)%20)%10)%5)%2)*100;
    resto+=(n-((double)a))*100;
    moedas=(int)resto; 

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedas/100);
    printf("%d moeda(s) de R$ 0.50\n", (moedas%100)/50);
    printf("%d moeda(s) de R$ 0.25\n", ((moedas%100)%50)/25);
    printf("%d moeda(s) de R$ 0.10\n", (((moedas%100)%50)%25)/10);
    printf("%d moeda(s) de R$ 0.05\n", ((((moedas%100)%50)%25)%10)/5);
    printf("%d moeda(s) de R$ 0.01\n", (((((moedas%100)%50)%25)%10)%5)/1);
    
    return 0;
}