#include <stdio.h>

int main(){
    unsigned long long int xor, count=0, x, y;

    do{
        scanf("%d %d", &x, &y);

        if(x==0 && y==0) break;

        xor=x^y;

        while (xor != 0) {
        if (xor & 1) {
            count++;  
        }
        xor >>= 1; 
    }


        printf("%d\n", count);
        count=0;
        xor=0;

    }while (1);
    
    


    

}