#include <bits/stdc++.h>
using namespace std;

vector<int> fibo(int n){
    vector<int> v{0,1};
    for(int i=2; i<n; i++){
        v.push_back(v[i-1]+v[i-2]);
    }
    return v;
    
}
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<fibo(n).at(i);
            if(i!=n-1) cout<<" ";
    }
    cout<<endl;
 
    return 0;
}