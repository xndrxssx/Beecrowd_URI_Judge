#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> lista;
    int *discard;
    int i, n, j, aux;

    while(1){
    cin>>n;

    if(n==0) break;

    discard=(int*)malloc(n*sizeof(int));

    for(i=1; i<=n; i++){
        lista.push_back(i);
    }

    j=0;
    while(j<n-1){
        discard[j]=lista.front();
        lista.pop_front();
        lista.push_back(lista.front());
        lista.pop_front();
        j++;
    }

    cout<<"Discarded cards:";
    for (i=0; i<n-1; i++){
        printf(" %d", discard[i]);
        if (i!=n-2) printf(",");
    }
    auto it=lista.end();
    cout<<endl<<"Remaining card: "<<*(--it)<<endl;
    lista.clear();
    free(discard);
}
}