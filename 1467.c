#include <stdio.h>

int main (){

    int a, b, c;

        while (scanf("%d %d %d", &a, &b, &c) != EOF){

        if ((a==1) && (b==1) && (c==1)) printf ("*\n");
        else if ((a==0) && (b==0) && (c==0)) printf ("*\n");
        else{

        if (a==1){
            if (b!=a) 
                if (c!=a) printf ("A\n");
                else printf ("B\n");
            else printf ("C\n");
        }
        else{
            if (b!=a) 
                if (c!=a) printf ("A\n");
                else printf ("B\n");
            else printf ("C\n");
        }
        }

        }
}