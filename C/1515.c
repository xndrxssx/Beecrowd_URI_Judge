#include <stdio.h>
#include <string.h>

int main(){
    int n, a, t, i, k, d;
    char str[50], str2[50];


    while (1){
        scanf("%d", &n);
        if (n==0) break;

       for(i=0; i<n; i++){

        scanf("%s", str);
        scanf("%d", &a);
        scanf("%d", &t);

        d=a-t;

        if (!i){
            strcpy(str2, str);
            k=a-t;
        }
        else if (k > d){
            strcpy(str2, str);
            k=d;
        }
        }
        printf("%s\n", str2);

    }

}
