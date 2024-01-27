#include <stdio.h>

int main() {

    float b;
    int a=0, flag=0;

    while (a<6){
        scanf("%f", &b);

            if (b>0)
                flag++;

        a++;
    }

    printf("%d valores positivos", flag);

    return 0;
}
