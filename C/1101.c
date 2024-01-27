#include <stdio.h>
 
int main() {
 
    int x, y, acum=0, a, b;
    while(1){
    scanf("%d %d", &x, &y);
    if(x<=0 || y<=0) break;
    
    if(x<y){
        a=x;
        b=y;
    }
    else{ 
        a=y;
        b=x;
    }
    for(x=a; x<=b; x++){
            printf("%d ", x);
            acum+=x;
        }
        printf("Sum=%d\n", acum);
        acum=0;
    }
    return 0;
}
