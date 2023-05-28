#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, a, b, r;
    set <int> alice;
    set <int> bia;
    set <int> aux;
    while(1){
        cin>>a>>b;
            if (a<=0 && b<=0)
                break;
        for (int i=0; i<a; i++){
            cin>>x;
            alice.insert(x);
        }
        for (int i=0; i<b; i++){
            cin>>y;
            bia.insert(y);
        }
        aux.insert(alice.begin(), alice.end());
        aux.insert(bia. begin(), bia.end());
        r=aux.size()-(max(alice.size(), bia.size()));
        cout<<r<<endl;
        aux.clear();
        alice.clear();
        bia.clear();

    }

}
