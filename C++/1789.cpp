#include <bits/stdc++.h>
using namespace std;

int main(){
    int l;
    vector<int> v;
    while(cin>>l){
        if(cin.eof()){
            break;
        }
        for(int i=0; i<l; i++){
            int num;
            cin>>num;
            v.push_back(num);
        }

        int max=*max_element(v.begin(), v.end());

        if(max<10) cout<<1<<endl;
        else if(max<20) cout<<2<<endl;
        else cout<<3<<endl;
        max=0;
        v.clear();
    }

}