#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool a=true;
    while(a){
        cin>>s;
        if(s=="2002"){
            a=false;
            cout<<"Acesso Permitido"<<endl;
        }
        else{
            cout<<"Senha Invalida"<<endl;
        }
    }
 
    return 0;
}