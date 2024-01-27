#include <bits/stdc++.h>
using namespace std;

bool teste(const string& primeira, const string& segunda){
    int i, diff=0;
    for(i=0; i<primeira.size(); i++)
        if(primeira[i]!=segunda[i]) diff++;
    return diff>1;
}

int main(){
    map<string,string> assinaturas;
    string nome; 
    char assinatura[21];
    int falsa, n, m;

    while(1){
        cin>>n;
        if (n==0) break;
        cin.ignore();

        while(n--){
            cin>>nome>>assinatura;
            cin.ignore();
            assinaturas[nome]=assinatura;
        }
        cin>>m;
        falsa=0;
            while(m--){
                cin>>nome>>assinatura;
                cin.ignore();
                bool cmp=teste(assinaturas[nome], assinatura);
                    if(cmp) falsa++;
            }
    cout<<falsa<<endl;
    }
}