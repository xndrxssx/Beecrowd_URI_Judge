/*ideia aqui eh quebrar a frase fornecida em varias palavras e armazena-las num vetor de strings e ir organizando elas de acordo com a ordem que foram fornecidas e seus respectivos tamanhos*/

#include <bits/stdc++.h>
using namespace std;

bool compara(const string& a, const string& b) {//funcao que reordena pelo tamanho
    if(a.length() != b.length()){//se n for do mesmo tamanho retorna falso
        return a.length()>b.length(); //se for retorna true
    }
    return false;
}

int main(){
    int n, i, tam, aux;

    cin>>n;
    cin.ignore();
    while(n--){
    string s, str_aux;
    vector<string> ordem;

        getline(cin, s);
        tam=s.size();

        for(i=0; i<tam;i++){
            if(s[i]!=' '){//vai pegando palavra por palavra
                str_aux+=s[i];
            }
            else{
                if (!str_aux.empty()){//quando pegar a primeira palavra, joga no vector         
                    ordem.push_back(str_aux);
                    str_aux.clear();
                }
                sort(ordem.begin(), ordem.end(), compara);//chama a func q organiza
            } 
            
        }
        if (!str_aux.empty()){//para ordenar a ultima palavra
            auto it = upper_bound(ordem.begin(), ordem.end(), str_aux, compara);
            ordem.insert(it, str_aux);
        }
        
        for(auto v:ordem){
            cout<<v;
                if(v!=ordem.back()) cout<<" ";
        }
        cout<<endl;
    }
}
