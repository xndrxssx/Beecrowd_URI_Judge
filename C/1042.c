#include <stdio.h>
 
int main() {
    int a=0, b=0, c=0;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a<=b && b<=c){
        printf ("%d\n%d\n%d\n", a, b, c);
        printf ("\n%d\n%d\n%d\n", c, b, a);
    }
    else if(a<=c && c<=b){
        printf ("%d\n%d\n%d\n", a, c, b);
        printf ("\n%d\n%d\n%d\n", b, c, a);
    }
    else if(b<=c && c<=a){
        printf ("%d\n%d\n%d\n", b, c, a);
        printf ("\n%d\n%d\n%d\n", a, c, b);
    }
    else if(b<=a && a<=c){
        printf ("%d\n%d\n%d\n", b, a, c);
        printf ("\n%d\n%d\n%d\n", c, a, b);
    }
    else if(c<=b && b<=a){
        printf ("%d\n%d\n%d\n", c, b, a);
        printf ("\n%d\n%d\n%d\n", a, b, c);
    }
    else if(c<=a && a<=b){
        printf ("%d\n%d\n%d\n", c, a, b);
        printf ("\n%d\n%d\n%d\n", b, a, c);
    }
    
    return 0;
}