#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(1){
        cin>>n;
        if(cin.eof()) break;

        int m[n][n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if (i==j) m[i][j]=1;
                else m[i][j]=3;
                if(j==n-i-1) m[i][j]=2;
                
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<m[i][j];
                if(j==n-1) cout<<endl;
            }
        }

    }
}