#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s){
        if(cin.eof()) break;
        int tam;
        cin>>tam;
        cin.ignore();
        char str[tam+1]="";

        int i;
        for (i=0; i<tam; i++){
            int posicao;
            cin>>posicao;
            str[i]+=s.at(posicao-1);
        }
        str[i]+='\0';
        cout<<str<<endl;
        for(i=0; i<tam; i++) {
            str[i]='\0';
        }


    }
}