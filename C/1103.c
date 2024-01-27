#include <stdio.h>
#include<stdlib.h>
int main (){

    int h1, h2, m1, m2, h;

    while(1){
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if (h1==0&&m1==0&&h2==0&&m2==0){
            exit(0);
    }

    else if (h1<h2){
            if (m1==m2){
                h=h2-h1;
                h=h*60;
                printf("%d\n", h);
            }
            else{
                h=h2-h1;
                h=h*60;
                    if (m1>m2)
                        h=h-abs(m2-m1);
                    else
                        h=h+abs(m2-m1);
                printf("%d\n", h);
            }
    }
    else if (h2<h1){
       if (m1==m2){
                h=abs(h1-24)+h2;
                h=h*60;
                printf("%d\n", h);
            }
            else{
                h=abs(h1-23)+h2;
                h=h*60;
                h=h+abs((m2+60)-m1);
                printf("%d\n", h);
            }
    }
    else if (h1==h2){
        if (m1<m2){
            printf("%d\n", abs(m1-m2));
        }
        else
            printf("%d\n", 1440-abs(m1-m2));
    }
    }
}

