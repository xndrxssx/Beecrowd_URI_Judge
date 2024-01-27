#include <bits/stdc++.h>
 
using namespace std;
 
int cont(int n) {
    return (n*(n+1))/2;
}

int main() {
    int x, n, i, caso=0;

        while(cin>>x){
            cin.ignore();
                for(i=0; i<=x; i++){
                if (x==0) {
                    cout<<"Caso "<<++caso<<": "<<cont(x)+1<<" numero"<<endl;
                    cout<<0<<endl<<endl;
                    }
                else {
                    cout<<"Caso "<<++caso<<": "<<cont(x)+1<<" numeros"<<endl;
                        cout<<0<<" ";
                        for(i=1; i<=x; i++){
                            for(n=1; n<=i; n++){
                                cout<<i;
                                if(i!=x || n!=i) cout<<" ";
                            }
                        }
                    cout<<endl<<endl;
                }
            }
            n=0;
            i=0;
        }
    }