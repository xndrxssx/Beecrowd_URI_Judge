#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, num;
    vector<int> par;
    vector<int> impar;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>num;
            if(!(num%2)) par.push_back(num);
            else impar.push_back(num);
    }
    sort(par.begin(), par.end(), less<int>());
    sort(impar.rbegin(), impar.rend());

    for(auto i:par){
        cout<<i<<endl;
    }
    for(auto i:impar){
        cout<<i<<endl;
    }

}