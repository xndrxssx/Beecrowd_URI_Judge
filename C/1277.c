#include <stdio.h>
#include <string.h>

int main(){
    int t, n, a, p, min, j, i, k;
    char nome[50], freq[50], faltoso[50];

    scanf("%d", &t);

    while (t>0){
        j=0;
        k=0;
        a=0;
        p=0;
        scanf("%d", &n);
            while (n>0)
            {
                scanf("%s", nome);
                setbuf(stdin, NULL);
                scanf("%s", freq);
                setbuf(stdin, NULL);

                for (i=0;freq[i]!='\0'; i++){
                    if (freq[i] == 'P') p++;
			        else if (freq[i] == 'A') a++;
                    else if (freq[i] == ' ' || freq[i] == '\0'){
                        min=p/(p+a);
                        if (min<0,75){
                            for (;nome[j]!=' '&&nome[j]!='\0'; j++, k++);
                            strcpy(faltoso, nome);
                            faltoso[k]+=' ';
                            p=0;
                            a=0;
                        }
                        else{
                            while(nome[j]!=' '){
                            j++;
                            }
                            j++;
                            p=0;
                            a=0;
                        }
                        
                    }

                }
            }
    faltoso[k] = '\0';      
    printf("%s\n",faltoso);
    t--;
    }
}