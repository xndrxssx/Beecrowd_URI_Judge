#include <stdio.h>
#include <string.h>

int main()
{
   int t,n,i,j,k,count=0,countf=0;
   float dec;
   char nome[50][51],pres[51],lista[100]="",ctrl[100]="";
   
   scanf("%d",&t);
   for(i=0;i<t;i++){
      strcpy(lista,ctrl);
       scanf("%d",&n);
       /* pegando os nomes*/
       for(j=0;j<n;j++){
           scanf("%s[^\n]",&nome[j][0]);
           setbuf(stdin,NULL);
       }
       /pegando as presenças/
       for(j=0;j<n;j++){
           scanf("%s[^\n]",pres);
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
                       printf("P%d A%d ",count, countf);
                   }
       }
       printf("%s\n",lista);
   }
}