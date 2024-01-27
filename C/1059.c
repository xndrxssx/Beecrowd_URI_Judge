#include <stdio.h>

int main() {

    int i;
    for(i=0; i<=100 ; i++)
        if (i!=0)
            if (!(i%2))
                printf ("%d\n", i);

    return 0;
}
