#include <stdio.h>
#include <math.h>

int main (){
    float a, b, c, n;

    do
    {
        scanf("%f %f %f", &a, &b, &c);
    } while (a<1 || b<1 || c<1);

    while(c>b||b>a){
    if(c>b){
        n=b;
        b=c;
        c=n;
    }
    if(b>a){
        n=a;
        a=b;
        b=n;
    }
    if(c>a){
        n=a;
        a=c;
        c=n;
    }}

    if (a>=b+c) printf("NAO FORMA TRIANGULO\n");
    else {

    if (pow(a,2) == pow(b,2) + pow(c,2)) printf("TRIANGULO RETANGULO\n");
    else if (pow(a,2) > pow(b,2) + pow(c,2)) printf("TRIANGULO OBTUSANGULO\n");
    else if (pow(a,2) < pow(b,2) + pow(c,2)) printf("TRIANGULO ACUTANGULO\n");

    if (a==b && a==c) printf("TRIANGULO EQUILATERO\n");
    else if (a==b || b==c || c==a) printf("TRIANGULO ISOSCELES\n");
    }

}