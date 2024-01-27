#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> f{1, 1}; //caso base, ela so pode ir pra primeira lajota
    for(int i = 2; i <= 40; i++){
        f.push_back(f[i-1]+f[i-2]);//guardando os valores de possibilidades de caminhos
        //ex, pra um x=4, 4 lajotas, temos 5 caminhos diferentes 1-2-3-4, 1-2-4, 1-3-4, 2-3-4 e 2-4
    }

    int x;
    while(scanf("%d", &x)){
        printf("%d\n", f[x]);
    }
}