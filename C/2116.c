#include <stdio.h>
#include <math.h>
int main(){
	int m,n,i, p1, p2, j;
	scanf("%d %d", &n, &m);

	for (i=n; i!=1; i--){
		for(j=2; j<=sqrt(i); j++){
			if (i%j==0) break; 
		}
		if(j>sqrt(i)){
		    p1=i;
		    break;
		}
	}
	for (i=m; i!=1; i--){
		for(j=2; j<sqrt(i); j++){
			if (i%j==0) break; 
		}
		if(j>sqrt(i)){
		    p2=i;
		    break;
		}
	}
	printf("%d\n", p1*p2);
}