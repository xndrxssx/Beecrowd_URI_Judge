#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, float> produtos;
    int n, p, c, i;
    string s;
    float v, total=0;

    cin>>n;
    getchar();
    while(n--){
        cin>>p;
        getchar();
            while (p--){
                cin>>s>>v;
                produtos[s]=v;
            }
        cin>>c;
        getchar();
            while (c--){
                cin>>s>>v;
                auto it=produtos.find(s);
                if (it != produtos.end()) {
                    total+=(it->second)*v;
            }
    }
    cout << fixed << setprecision(2);
    cout<<"R$ "<<total<<endl;
    produtos.clear();
    total=0;
}
}