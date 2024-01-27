#include <bits/stdc++.h>
using namespace std;

int main(){
    char x[100];
    int n;
    while(scanf("%s ", x), x[0]!='-'){
        sscanf(x, "%i", &n);
        if(x[1]=='x') {
            printf("%d\n", n);
        }else{
            printf("0x%X\n", n);
        }
    }
}