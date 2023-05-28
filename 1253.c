#include <stdio.h>
 
int main() {
 
    char str[51];
    int n, i, j, v, k;
    
    scanf("%d", &n);
    
    for (i=0; i<n; i++){
    	scanf("%s", str);
    	scanf("%d", &v);
    	for (j=0; str[j]; j++)
    		if ((str[j]-v)<65)
    		{
			k=65-str[j];
			str[j]=91-(k+v);
			}
			else
			str[j]-=v;

    printf("%s\n", str);
    }
 
    return 0;
}