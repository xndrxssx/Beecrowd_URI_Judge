#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x, y, soma=0;
        cin>>x>>y;
        for(int i=0; i<y;){
            if(x%2 != 0){
                soma+=x;
                i++;
            }
            x++;
        }
        cout<<soma<<endl;
    }
}