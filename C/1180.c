#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int *vet, i, x, n, menor, k;

    scanf("%d", &n);

    vet=(int*)malloc(n*sizeof(int));

    for(i=0; i<n; i++){
        scanf("%d", &x);
        vet[i]=x;
        if(!i){
        menor=x;
        k=i;
    }
    else if(x<menor){
        menor=x;
        k=i;
    }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", k);


    return 0;
}
