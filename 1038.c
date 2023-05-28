#include <stdio.h>

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    switch (a){
        case 1:
            printf ("Total: R$ %.2f", 4.00*b);
            break;
        case 2:
            printf ("Total: R$ %.2f", 4.50*b);
            break;
        case 3:
            printf ("Total: R$ %.2f", 5.00*b);
            break;
        case 4:
            printf ("Total: R$ %.2f", 2.00*b);
            break;
        case 5:
            printf ("Total: R$ %.2f", 1.50*b);
            break;
    }

    return 0;
}
