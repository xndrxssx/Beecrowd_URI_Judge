#include <stdio.h>

int main() {

    int L=0, R=0;

    do{
        scanf ("%d %d", &L, &R);

        if ((L>5||L<1) || (R>5||R<1)){
            scanf ("%d %d", &L, &R);
        }
        else
            printf("%d\n", L+R);

    }while(L!=0 && R!=0);

}
