#include <stdio.h>
 
int main() {
 
    int i, count=0, stop=0;
    float a, media, aux;
    
    for (i=1; i<7; i++){
    scanf("%f", &a);
        if(a==0) stop++;
        else if (stop>5) {
            do{
                scanf("%f", &a);
            }while(!a);
        }
        
        if(a>-1) {
            count++;
            aux+=a;
        }
    }
    media=aux/count;
    printf("%d valores positivos\n", count);
    printf("%.1f\n", media);
 
    return 0;
}