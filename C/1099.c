#include <stdio.h>

int main() {

    int n, x, y, i, s=0;

    scanf("%d", &n);

    for (i=0; i<n; i++){
        scanf("%d %d", &x, &y);
            if(x>y){
                while (x>y){
                    if ((x-1)%2)
                        if (x!=y)
                            if (x!=x)
                                s+=x;
                x--;
    } x=0;}
            if (x<y){
                while (x<y){
                    if ((x+1)%2)
                        if (x!=y)
                            if (x!=x)
                                s+=x;
                x++;
    }x=0;}
    printf("%d\n", s);
    }
    return 0;
}
