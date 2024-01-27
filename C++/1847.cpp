#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;

    cin>>a>>b>>c;

    if(a>b){//desceu
        if (b<=c) cout<<":)"<<endl;
        else {
            if((b-c)<(a-b)) cout<<":)"<<endl;
            else if ((b-c)>=(a-b)) cout<<":("<<endl;
        }
    }
    else if(a<b){
        if (b<c) {
            if(c-b<b-a) cout<<":("<<endl;
            else if((c-b)>=(b-a)) cout<<":)"<<endl;
            else cout<<":("<<endl;
        }
        else cout<<":("<<endl;
    }
    else{
        if (b<c) cout<<":)"<<endl;
        else cout<<":("<<endl;
    }
}