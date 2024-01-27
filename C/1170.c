#include <stdio.h>

int main (){
	int n, i, aux;
	float c;
	
	scanf ("%d", &n);
	
	while(n>0){
		
		scanf("%f", &c);
		for (i=0; c>1.0; i++)
			{
				c=c/2;
			}
		printf("%d dias\n", i);
		
	n--;	
	}
	
}