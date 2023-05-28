#include <stdio.h>

int main() {
	int n, i, j, c;
	char str[1001];

	scanf ("%d", &n);
	setbuf(stdin,NULL);

	for (i=0; i<n; i++)
	{
       int count = 0;
		scanf ("%*c%[^\n]", str);
		for (j='a'; j<='z'; j++)
			for (c=0; str[c]; c++){
                if (str[c]==j){
					count++;
					break;}
			}

		if (count==26){
			printf("frase completa\n");
		}
		else if (count>=13){
			printf("frase quase completa\n");
		}
        else{
            printf("frase mal elaborada\n");
        }
	}

    return 0;
}
