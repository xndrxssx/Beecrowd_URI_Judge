#include <stdio.h>
#include <string.h>

int main(){
    char str[51], s_aux[51]="";
    int n, i, cont, tam_str;

    scanf("%d", &n);
    setbuf(stdin, NULL);

    do{
        cont = 0;
        scanf("%s[^\n]", str);
        setbuf(stdin, NULL);

        tam_str=strlen(str);

        for(i = 1; i < tam_str; i++){
            if (str[i] != ' '){
                if(97 <= str[i] && str[i] <= 122){
                if (str[i-1]==' '){
                s_aux[cont] = str[i];
                cont++;
            }
            }
        }
        }

        s_aux[cont] = '\0';

        printf("%s\n", s_aux);
        n--;
    } while (n);
}