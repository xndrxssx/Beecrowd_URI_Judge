#include <stdio.h>

int main(){
   int n, c, v, pares=0;
   
   while(1){
      scanf("%d", &n);
         if (!n)
            break;
         else {
            while (n>0){
            scanf("%d %d", &c, &v);
               if (!(v%2))
               pares+=v;
                  else
                  {
                     pares+=v-1;
                  }
            n--;
            }
         printf("%d\n", pares/4);
         pares=0;
         }
}
}