#include <stdio.h>
#include <math.h>

int rafael (int x, int y){
	int a;
	a=pow(3*x, 2)+pow(y,2);
	return a;
}
int beto (int x, int y){
	int a;
	a=2*(pow(x, 2))+pow(5*y,2);
	return a;
}
int carlos (int x, int y){
	int a;
	a=(-100*x)+pow(y, 3);
	return a;
}

int main(){
	int x, y, n, a, b, c;
	scanf("%d", &n);
	while (n>0){
	
	scanf ("%d %d", &x, &y);
	
	a=rafael(x, y);
	b=beto(x, y);
	c=carlos(x, y);
	
	if (a>b&&a>c)
		printf("Rafael ganhou\n");
	
	else if (c>a&&c>b)
		printf("Carlos ganhou\n");
	
	else if (b>a&&b>c)
		printf("Beto ganhou\n"); 

	n--;	
	}
	
}