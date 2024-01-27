#include <stdio.h>
#include <stdlib.h>

int main() {

    float n1, n2, n3, n4, ne, media;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    if(media>=7.0)
        {printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
        exit(0);}
    else if (media<=6.9)
        if(media>=5.0)
        {printf("Aluno em exame.\n");
        scanf("%f", &ne);
        printf("Nota do exame: %.1f\n", ne);
        ne=(ne+media)/2;
            {if(ne>=5.0)
                {printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", ne);
                exit(0);}
                else
                {printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", ne);
                exit(0);}}}
     else if (media<=4.9)
        {printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
        exit(0);}
    return 0;
}
