#include <stdio.h>
#include <stdlib.h>

int main() {

    float x, y;
    scanf ("%f %f", &x, &y);

    if (x>0 && y<0){
        printf ("Q4\n");
        exit(0);}
    else if (x>0&&y>0){
        printf ("Q1\n");
        exit(0);}
    else if (x<0&&y<0){
        printf ("Q3\n");
        exit(0);}
    else if (x<0&&y>0){
        printf ("Q2\n");
        exit(0);}
    else if (x==0&&y==0)
        {printf ("Origem\n");
        exit(0);
        }
    else if (x==0)
    {
        printf("Eixo Y\n");
        exit(0);
    }
    else if (y==0)
    {
        printf("Eixo X\n");
        exit(0);
    }

    return 0;
}
