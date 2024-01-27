#include <bits/stdc++.h>

using namespace std;
vector<int>v{2, 3};
int MAX = 1 << 17;

int primo (){
    int r, i, p=5;
    while (p<=MAX){
        r=sqrt(p);
        for(i=0;  i < v.size() && v[i] <= r; i++){
            if (p%v[i]==0){
                break;
            }
        }
        
        if (i == v.size()||v[i]>r)
            v.push_back(p);
        
        p+=2;  
    }
}

int ehprimo(int p){
    if (p<MAX)
        return binary_search (v.begin(), v.end(), p);
    
    int r=sqrt(p);
    for(int i=0; i < v.size() && v[i] <= r; i++){
        if (p % v[i] == 0)
            return false;
    }
    return true;
}

int main(){
    primo();
    int n, t;
    cin>>t;
    while(t--){
        cin>>n;
        if (ehprimo(n))
            cout<<"Prime"<<endl;
        else
            cout<<"Not Prime"<<endl;
    }
    return 0;
}
