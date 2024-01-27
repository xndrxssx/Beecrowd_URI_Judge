#include <bits/stdc++.h>
using namespace std;

struct pais
{
    string nome;
    int o, p, b;
};

void preenche(pais paises[], int n) {
    for(int i=0; i<n; i++) {
        cin>>paises[i].nome;
        cin>>paises[i].o>>paises[i].p>>paises[i].b;
    }
}

bool comp(const pais &a, const pais &b) {
    if (a.o != b.o) {
        return a.o > b.o;
    }
    if (a.p != b.p) {
        return a.p > b.p;
    }
    if (a.b != b.b) {
        return a.b > b.b;
    }
    return a.nome < b.nome;
}

void printa(pais paises[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<paises[i].nome<<" "<<paises[i].o<<" "<<paises[i].p<<" "<<paises[i].b<<"\n";
    }
}

int main() {
    int n;
    cin >> n;
    pais *paises=new pais[n]; /*alocando dinamicamente*/
    preenche(paises, n);
    sort(paises, paises + n, comp);
    printa(paises, n);
    delete[] paises; /*liberar memoria*/
}
