#include <stdio.h>

int main(){
    long int n;
    int valor;

    scanf("%d", &n);

    if (n<=10)
        printf("7\n");
    else if (10<n&&n<=30){
        n-=10;
        valor=n*1;
        printf("%d\n", valor+7);
    }
    else if (30<n&&n<=100){
        n-=30;
        valor=(n*2);
        printf("%d\n", valor+27);
    }
    else if (100<n){
        n-=100;
        valor=(n*5);
        printf("%d\n", valor+167);
    }
}
