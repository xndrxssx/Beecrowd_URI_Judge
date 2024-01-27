#include <bits/stdc++.h>
using namespace std;

int main(){
    int nc, n, k, caso=0, i, posicao;
    vector<int>pessoas;

    cin>>nc;
    while(nc--){
        caso++;
        cin>>n>>k;
        for(i=1; i<=n; i++){
            pessoas.push_back(i);
        }
        i=0;
        while (pessoas.size()>1){
            i=(i+k-1)%pessoas.size();//garantir que o indice do elemento a ser acessado nao extrapole
            pessoas.erase(pessoas.begin()+i);//eliminando

        }
            cout<<"Case "<<caso<<": "<<pessoas.at(0)<<endl;
            pessoas.clear();
    }
}