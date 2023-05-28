#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, d, r1, r2;
    scanf ("%f %f %f", &a, &b, &c);

    d=(pow(b,2))-(4*a*c);

    if (d<0)
        printf("Impossivel calcular\n");
    else if (a==0)
        printf("Impossivel calcular\n");
    else {
        r2=(-b-(sqrt(d)))/(2*a);
        r1=(-b+(sqrt(d)))/(2*a);

        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);
    }


    return 0;
}
