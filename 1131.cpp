#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, g, c, v=0, inter=0, gremio=0, empate=0;

    do{
    cin>>i>>g;
        if (i>g)
            inter++;
        else if (g>i)
            gremio++;
        else
            empate++;
    cin>>c;
    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    v++;
    }while (c==1);

    cout<<v<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<empate<<endl;
    if(inter>gremio)
        cout<<"Inter venceu mais"<<endl;
    else if (gremio>inter)
        cout<<"Gremio venceu mais"<<endl;
    else
        cout<<"Nao houve vencedor"<<endl;

}
