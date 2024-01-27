#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, count, i, v;
    string s, str_aux;
    map<string, int> dicionario;

    cin>>m>>n;
    cin.ignore();

    for(i=0; i<m; i++){
        cin>>s>>v;
        dicionario[s]=v;
    }
    while (n--){
        count=0;
        while (cin>>s, s != "."){
            count+=dicionario[s];
        }
        cout<<count<<endl; 
    }
}
