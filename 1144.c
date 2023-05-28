#include <stdio.h>

int main() {

    long int n;
    int i;

    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("%d %d %d\n", i+1, (i+1)*(i+1), (i+1)*(i+1)*(i+1));
        printf("%d %d %d\n", i+1, ((i+1)*(i+1))+1, ((i+1)*(i+1)*(i+1))+1);
    }

    return 0;
}
