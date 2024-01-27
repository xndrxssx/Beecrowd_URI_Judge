#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    while(true){
        cin>>n;

        if(n==0) break;

        int m[n][n];
        int aux=(n%2 == 0 ? n/2 : (n+1)/2);
        m[aux-1][aux-1]=aux;
        int aux2;

        for (int i=0; i<aux; i++) {
            aux2=n-i-1;
            for (int j=i; j<=aux2; j++) {
                m[i][j]=i+1;
                m[aux2][j]=i+1;
                m[j][i]=i+1;
                m[j][aux2]=i+1;
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
