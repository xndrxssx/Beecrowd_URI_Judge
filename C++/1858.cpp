#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int t;
        cin>>t;
        v.push_back(t);
    }
    auto it=min_element(v.begin(), v.end());
    cout<<distance(v.begin(), it)+1<<endl;
}