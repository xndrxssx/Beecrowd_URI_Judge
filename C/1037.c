#include <stdio.h>
#include <stdlib.h>

int main() {

    float n;
    scanf(" %f",&n);

    if(n<0 || n>100){
            printf("Fora de intervalo\n");
            exit(0);
			}
    else if(n>=0 && n<=25){
            printf("Intervalo [0,25]\n");
            exit(0);
        }
    else if(n>25 && n<=50){
            printf("Intervalo (25,50]\n");
            exit(0);
		}
    else if (n>50 && n<= 75){
            printf("Intervalo (50,75]\n");
            exit(0);
		}
    else{
    	printf("Intervalo (75,100]\n");
    	exit(0);
	}

    return 0;
}

