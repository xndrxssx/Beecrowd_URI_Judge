#include <stdio.h>
#include <stdlib.h>
int func(int x, int *v, int i);											/* DECLARAÇÃO PRÉVIA DA FUNÇÃO */
main(){
	int *vetor,x,i;
		scanf("%d",&x);													/* LÊ O FIBONACCI QUE SERÁ FEITO */
	vetor=(int*)calloc(x, sizeof(int));									/* ALOCA DINAMICAMENTE UM VETOR PARA ARMAZENAMENTO */
	vetor[1]=vetor[2]=1;												/* CASO X SEJA 1 OU 2 ELE RETORNA 1 AUTOMATICAMENTE */
		func(x,vetor, 0);												/* CHAMA A FUNÇÃO */
	for(i = 0; i < x; i++){												/* LOOP USADO PARA PRINTAR OS VALORES ARMAZENADOS NO VETOR */
		printf("%d",vetor[i]);
		if (i < x - 1) printf (" ");
	}
	printf("\n");
	free(vetor);														/* LIBERA O ESPAÇO ALOCADO */
}
func (int x, int *v, int i) {
	if (x <= 2) {														/* IF USADO PARA QUANDO CHEGAR EM FIBONACCI DE 1 E 2 */
		v[i] = 1;
		return 1;
	}
	else
		v[i] = func (x - 1, v, i + 1) + func (x - 2, v, i + 2);			/* O PONTEIRO USADO COMO VETOR RECEBE O VALOR DO FIBONACCI QUE SERÁ FEITO */
}
