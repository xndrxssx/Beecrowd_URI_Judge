#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int a, b;
    while(scanf("%lld %lld", &a, &b)!=EOF){
            if (a<b)
                printf("%lld\n", (a-b)*(-1));
            else
                printf("%lld\n", (a-b));
    }
    return 0;
}