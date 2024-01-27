#include <stdio.h>

int main() {

    int n=5, x, p=0, i=0, po=0, ne=0;

    while (n>0){
        scanf("%d", &x);
            if(x%2)
                i++;
                else
                    p++;
            if(x<0)
                ne++;
                else if(x>0)
                    po++;
        n--;
    }
    printf("%d valor(es) par(es)\n", p);
    printf("%d valor(es) impar(es)\n", i);
    printf("%d valor(es) positivo(s)\n", po);
    printf("%d valor(es) negativo(s)\n", ne);
    return 0;
}
