#include <bits/stdc++.h>
using namespace std;

bool compara(const string& a, const string& b) {
        return a.length()>b.length(); 
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
            if(s[i]!=' '){
                str_aux+=s[i];
            }
            else{
                if (!str_aux.empty()){         
                    ordem.push_back(str_aux);
                    str_aux.clear();
                    stable_sort(ordem.begin(), ordem.end(), compara);
                }
            } 
            
        }
        if (!str_aux.empty()){
            ordem.push_back(str_aux);
            str_aux.clear();
            stable_sort(ordem.begin(), ordem.end(), compara);
        }
        
       for(i=0; i<ordem.size();i++){
        if(i){
            cout<<" ";
            cout<<ordem[i];
       }
       else cout<<ordem[i];
       }
        cout<<endl;
    }
}