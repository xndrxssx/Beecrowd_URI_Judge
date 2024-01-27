#include <stdio.h>
 
int main() {
 
    char str[51];
    int n, i, j, v, k;
    
    scanf("%d", &n);
    
    for (i=0; i<n; i++){
    	scanf("%s", str);
    	scanf("%d", &v);
    	for (j=0; str[j]; j++)
    		if ((str[j]-v)<65) //verifica se a letra em questao é menor que o 'A'
    		{
			k=65-str[j]; //guarda quantas casas vai voltar
			str[j]=91-(k+v); //conta essas casas a partir do 'Z'
			}
			else
			str[j]-=v;

    printf("%s\n", str);
    }
 
    return 0;
}