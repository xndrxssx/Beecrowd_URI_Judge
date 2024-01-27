#include <bits/stdc++.h>
using namespace std;

//definindo a struct
typedef struct produtos{
    char nome[20];
    float valor;
}produtos;

//funçao que conta os produtos disponíveis
void feira (int p, produtos prod[]){
    int i;
    for(i=0; i<p; i++){
        scanf("%s", prod[i].nome);
        setbuf(stdin, NULL);
        scanf("%f", &prod[i].valor);
        setbuf(stdin, NULL);
    }
}

//funçao que soma os produtos
void compras (int c, produtos prod[], int p){
    float total=0;
    string s;
    int v, i, j;
    while(c--){
        cin>>s>>v;
        getchar();
        for(i=0; i<p; i++){//verifica se o produto esta disponivel
            if(s==prod[i].nome){
                total+=(prod[i].valor)*v; //acumula o valor
            }
        }
    }
    cout << fixed << setprecision(2);
    cout<<"R$ "<<total<<endl;
}


int main(){
    int n, p, c;
    produtos *prod;

    cin>>n;
    getchar();
    while(n--){//casos de teste
        cin>>p; //nº de prod disponiveis
        getchar();
        prod=(produtos*)malloc(p*sizeof(produtos)); //alocando o struct que vai guardar esses produtos
        feira(p, prod); 
        cin>>c; //qtd de produtos comprados
        getchar();
        compras(c, prod, p);
    }
    free(prod); 

}