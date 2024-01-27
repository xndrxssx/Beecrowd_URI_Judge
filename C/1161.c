#include <stdio.h>

int main (){
		long long int m, n, f1, f2;
		int i;
		
		while (scanf("%lld %lld", &m, &n)!=EOF){
		if (m==0)
			f1=1;
		else {		
			for	(i=1; i<=m; i++){
				if (i==1)
					f1=i*i;
				else
					f1=f1*i;
				}
			}
		if (n==0)
			f2=1;
		else{		
			for	(i=1; i<=n; i++){
				if (i==1)
					f2=i*i;
				else
					f2=f2*i;
				}
			}
					
		printf("%lld\n", f1+f2);	
	}}