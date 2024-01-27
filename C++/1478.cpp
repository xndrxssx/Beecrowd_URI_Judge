#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    while(true){
        cin>>n;

        if(n==0) break;

        int m[n][n];

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                m[i][j]=1+abs(j-i);
            }
        }

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                printf("%3d", m[i][j]);
                if(j!=n-1) cout<<" ";
            }
            cout<<endl;
        }

        cout<<endl;
    }

    return 0;
}
