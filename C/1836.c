#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

    int HP, AT, DF, SP, T, i, EV;
    int Bs, IV, L;
    char P[21];

    do {
        scanf("%d", &T);
    } while(T>1000);

    for(i=1; i<=T; i++) {
        scanf("%20s %d", P, &L);

        scanf("%d %d %d", &Bs, &IV, &EV);
        HP = (int)(((IV+Bs+(sqrt(EV)/8)+50)*L)/50)+10;

        scanf("%d %d %d", &Bs, &IV, &EV);
        AT = (int)((((IV+Bs+(sqrt(EV)/8)))*L)/50)+5;

        scanf("%d %d %d", &Bs, &IV, &EV);
        DF = (int)((((IV+Bs+(sqrt(EV)/8)))*L)/50)+5;

        scanf("%d %d %d", &Bs, &IV, &EV);
        SP = (int)((((IV+Bs+(sqrt(EV)/8)))*L)/50)+5;

        printf("Caso #%d: %s nivel %d", i, P, L);
        printf("\nHP: %d", HP);
        printf("\nAT: %d", AT);
        printf("\nDF: %d", DF);
        printf("\nSP: %d\n", SP);
    }
}
