#include <bits/stdc++.h>
using namespace std;

int posicao(vector<int> ordem, int a){

    auto it = find(ordem.begin(), ordem.end(), a);

    if (it != ordem.end()) {
        int posicao=it-ordem.begin()+1;
        return posicao;
    }
    else {
        return -1;
    }
}

int main(){
    vector<int>ordem;
    int n, q, i, num;
    static int count=1;

    while(1){
    cin>>n>>q;
    if(n==0 && q==0) break;

    for(i=0; i<n; i++){
        cin>>num;
        ordem.push_back(num);
    }
    sort(ordem.begin(), ordem.end());

    cout<<"CASE# "<<count++<<":"<<endl;

    for(i=0; i<q;i++){
        cin>>num;
        if((posicao(ordem, num))!=(-1))
        cout<<num<<" found at "<<posicao(ordem, num)<<endl;
        else cout<<num<<" not found"<<endl;
    }
    ordem.clear();
    }
}