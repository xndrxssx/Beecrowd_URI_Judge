#include <stdio.h>

int main(){
    char str[21];
    int i;

    scanf("%21[^\n]", str);

    for (i=0; str[i]!='\0' ; i++)

    if (i>9) printf("palavrao\n");
    else printf("palavrinha\n");
}