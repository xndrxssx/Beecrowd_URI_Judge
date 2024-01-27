#include <bits/stdc++.h>

using namespace std;

int main() {

    set<string> lista;
    int n;
    string s;

    cin>>n;

    do{
        cin>>s;
        lista.insert(s);

    n--;
    }while(n>0);
    cout<<s;
    return 0;
}
