#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, a, b, c, d, e, aux=0;

    scanf("%d", &n);
    if (!n)
    exit(0);

    while (n){
    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != EOF){
        if (a<=127){
            a=1;
            aux++;
        }
        if (b<=127){
            b=1;
            aux++;
        }
        if (c<=127){
            c=1;
            aux++;
        }
        if (d<=127){
            d=1;
            aux++;
        }
        if (e<=127){
            e=1;
            aux++;
        }


        if (aux>1) printf ("*\n");
        else if (aux==0) printf("*\n");
        else if (a==1) printf ("A\n");
        else if (b==1) printf ("B\n");
        else if (c==1) printf ("C\n");
        else if (d==1) printf ("D\n");
        else if (e==1) printf ("E\n");
    aux=0;
    }
    n--;
    }

}