#include <stdio.h>

int main (){
    int a, b, n;
    char op;

    scanf("%d", &n);

    while (n)
    {
        scanf("%d%c%d", &a, &op, &b);
        if (a==b) printf("%d\n", a*b);
        else{
            if (op>='A' && op<='Z') printf("%d\n", b-a);
            else if (op>='a' && op<='z') printf("%d\n", a+b); 
        }
    n--;
    }
    
}