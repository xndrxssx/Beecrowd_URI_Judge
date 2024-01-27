#include <stdio.h>

int main() {

    int n=0, a=0, b=0, p1=0, p2=0;

    while(scanf ("%d", &n)){

    if (!n){
        exit(0);
    }

    while(n>0){

        scanf("%d %d", &a, &b);
        if(0>=a>=10 || 0>=b>=10){
            scanf("%d %d", &a, &b);
        }
        else
        {
            if (a>b){
                p1++;
            }
            else
            if (b>a){
                p2++;
            }
        }

    n--;
    }


    printf ("%d %d\n", p1, p2);
    p1=0; p2=0;
    }
    return 0;
}
