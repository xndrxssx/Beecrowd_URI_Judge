#include <stdio.h>
#include <string.h>

int main(){
	char str[1001];
	int i, count=0;
	
	scanf("%1000[^\n]", str);
	
	for (i=0; str[i]; i++)
		if (str[i]==' ')
		{
		  count=0;
		  printf(" ");
		}
		else
			if(count%2)
			{
				count++;
				printf("%c", str[i]);
			}
				else
					count++;	
					

    printf("\n");
}