#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    
    cin>>s;
    cin.ignore();
    for(auto &k:s){
        k=tolower(k);
    }
    cout<<(string::npos==(s.find("zelda"))?"Link Tranquilo":"Link Bolado")<<endl;

}