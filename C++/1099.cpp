#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,acum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        if (x>y) {
            swap(x,y);
            x++;
        }
        else x++;
        
        while(x<y){
            if(x%2) acum+=x;
            x++;
        }
        cout<<acum<<endl;
        acum=0;
    }

}