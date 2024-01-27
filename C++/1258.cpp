#include <bits/stdc++.h>
using namespace std;

struct camisas
{
    string nome, cor;
    char tamanho;
};

void preenche(camisas pessoa[], int n) {
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, pessoa[i].nome);
        cin >> pessoa[i].cor >> pessoa[i].tamanho;
        cin.ignore(); // Ignorar o caractere de quebra de linha
    }
}

bool comp(const camisas &a, const camisas &b) {
    if (a.cor != b.cor) {
        return a.cor < b.cor;
    }
    if (a.tamanho != b.tamanho) {
        return a.tamanho > b.tamanho;
    }
    return a.nome < b.nome;
}

void printa(camisas pessoa[], int n) {
    for(int i = 0; i < n; i++) {
        cout << pessoa[i].cor << " " << pessoa[i].tamanho << " " << pessoa[i].nome << "\n";
    }
}

int main() {
    int n;
    bool f = true;
    while(cin >> n, n) {
        camisas *pessoa = new camisas[n]; /*alocando dinamicamente*/
        preenche(pessoa, n);
        sort(pessoa, pessoa + n, comp);
        if (!f) {
            cout << '\n';
        } else {
            f = false;
        }
        printa(pessoa, n);
        delete[] pessoa; /*liberar memoria*/
    }
}
