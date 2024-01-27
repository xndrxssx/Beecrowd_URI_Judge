#include <stdio.h>
#include <string.h>

int main()
{
   int t,n,i,j,k,count=0,countf=0;
   float dec;
   char nome[100][52],pres[52],lista[100000]="",ctrl[100]="";
   
   scanf("%d",&t);
   setbuf(stdin, NULL);
   for(i=0;i<t;i++){
      strcpy(lista,ctrl);
       scanf("%d",&n);
       setbuf(stdin, NULL);
       /* pegando os nomes*/
       for(j=0;j<n;j++){
           scanf("%s",&nome[j][0]);
           setbuf(stdin,NULL);
       }
       lista[0] = '\0';
       for(j=0;j<n;j++){
           scanf("%s",pres);
           setbuf(stdin, NULL);
           count = 0;
           countf= 0;
           for(k=0;1;k++){
               if(!pres[k]){break;}
               else{
                   if(pres[k]=='P'){count++;}
                   if(pres[k]=='A'){countf++;}
               }
           }
           dec = (float)count/(count+countf);
                   if(dec<0.75){
                       strcat(lista,nome[j]);
                       strcat(lista," ");
                   }
       }
        lista[strlen(lista) - 1] = 0;
        printf("%s\n",lista);
   }
}