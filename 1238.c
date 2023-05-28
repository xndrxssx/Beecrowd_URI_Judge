#include <stdio.h>
#include <string.h>

int main (){
	char str1[501], str2[501];
	int i, j, n;
	
	scanf("%d", &n);
	
	for(j=0;j<n; j++)
	{
    	scanf (" %s %s", str1, str2);
    	
    	for (i=0; str1[i]&&str2[i]; i++)
    	{
    		printf ("%c", str1[i]);
    		printf ("%c", str2[i]);
    	}
    	if (str1[i])
    	{
    	    printf("%s\n", str1+i);
    	}
    	else if (str2[i])
    	    printf ("%s\n", str2+i);
    	else
    		printf("\n");
}
}