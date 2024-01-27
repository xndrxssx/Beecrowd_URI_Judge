#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    for(int i=0; i<10; i++){
        int n;
        cin>>n;
        if(n<=0) v.push_back(1);
        else v.push_back(n);
    }
        for(int i=0; i<10; i++){
        cout<<"X["<<i<<"] = "<<v.at(i)<<endl;
    }
 
    return 0;
}