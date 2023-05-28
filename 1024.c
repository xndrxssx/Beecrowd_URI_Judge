#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
	char *str;
	int i, j, n, tam, count;
	char aux;

    scanf(" %d", &n);

	for (count=0; count<n; count++)
        {
        str = (char*)malloc(1001*sizeof(char));
        scanf(" %[^\n]", str);

		for (i=0; str[i]!='\0'; i++)
		{
			if ((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
                str[i]+=3;
		}
		for (tam=i-1, i=0; i<tam; i++, tam--)
		{
			aux=str[i];
			str[i]=str[tam];
			str[tam]=aux;
		}
		for (j=strlen(str)-1, i=(j%2)?(j/2)+1:(j/2); i<=j; i++)
		{
			str[i]-=1;
		}
        printf("%s", str);
        printf("\n");
}
}