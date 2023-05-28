#include <stdio.h>

int num_calls=0;
                    
int fibo (int x){ 
    num_calls++;
    if (!x)
        return x;
        if (x>=2){
            return fibo(x-1)+fibo(x-2);
        }
                else
                    return 1;
}
int main (){
    int n, x, i;
    scanf ("%d", &n);
    for (i=0; i<n; i++){
        do{
        scanf ("%d", &x);
        }while (x<0||x>39);
        printf("fib(%d) = %d calls = %d", x, num_calls-1, fibo(x));
        num_calls=0;
        printf("\n");
    }
    }
