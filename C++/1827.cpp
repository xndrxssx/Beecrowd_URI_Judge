#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;

    while(cin>>n){
        if(cin.eof()) break;

        int m[n][n];

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                m[i][j]=0;
            }
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if(i==j) m[i][j]=2;
                else m[i][n-i-1]=3;

            }
        }

        for (int i=n/3; i<n-(n/3); i++) {
            for (int j=n/3; j<n-(n/3); j++) {
                m[i][j]=1;
            }
        }

        m[n/2][n/2]=4;

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cout<<m[i][j];
            }
            cout<<endl;
        }

        cout<<endl;
    }

    return 0;
}
