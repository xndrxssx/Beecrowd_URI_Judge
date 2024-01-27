#include <iostream>
using namespace std;

int main(){
    int a, n, acum=0;
    do{
        cin>>a;
    }while(!a);
    do{
        cin>>n;
    }while(n<=0);

    for(int i=0; i<n; i++){
        acum+=a+i;
    }
    cout<<acum;

}