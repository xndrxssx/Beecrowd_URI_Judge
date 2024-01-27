#include <bits/stdc++.h>
using namespace std;

map<int, string> extenso = {
    {0, "zero"}, {1, "um"}, {2, "dois"}, {3, "tres"}, {4, "quatro"},
    {5, "cinco"}, {6, "seis"}, {7, "sete"}, {8, "oito"}, {9, "nove"},
    {10, "dez"}, {11, "onze"}, {12, "doze"}, {13, "treze"}, {14, "quatorze"},
    {15, "quinze"}, {16, "dezesseis"}, {17, "dezessete"}, {18, "dezoito"}, {19, "dezenove"},
    {20, "vinte"}, {30, "trinta"}, {40, "quarenta"}, {50, "cinquenta"}, {60, "sessenta"},
    {70, "setenta"}, {80, "oitenta"}, {90, "noventa"},
    {100, "cem"}, {200, "duzentos"}, {300, "trezentos"}, {400, "quatrocentos"}, {500, "quinhentos"},
    {600, "seiscentos"}, {700, "setecentos"}, {800, "oitocentos"}, {900, "novecentos"}
};

string numeroPorExtenso(long int num) {
    if (extenso.find(num) != extenso.end()) {  /*ta vendo se acha dentro do mapa o numero digitado*/
        return extenso[num];
    }

    if (num < 100) {
        int dezena = (num / 10) * 10;
        int unidade = num % 10;
        return extenso[dezena] + (unidade != 0 ? " e " + extenso[unidade] : "");
    } /*isso aqui ta correto, me retorna numeros ate 99 por extenso*/

    if (num < 1000) { /*999*/
        int centena = (num / 100) * 100; /* 999/100 = 9*100 = 900 e ai eu tenho a centena*/
        int dezena = ((num % 100) / 10) * 10; /*99/10 --> 9*10 = 90 e ai e a dezena, ok entendi*/
        int unidade = (num % 10); /*mesma coisa ali so pra ter a unidade logica basica*/
        string result; 

        if(centena == 100) {
          result += "cento";  /*aqui so modifica caso a centena seja 100 pq no mapa nao tem 'cento'*/
        } else {

            result += extenso[centena]; /*aqui ele procura no mapa a centena em numero e adiciona a string result o nome por extenso*/
        }

        int aux=num%100; /*isso aqui me retorna a dezena+unidade*/

        if(extenso.find(aux)!=extenso.end()) { /*porem, no caso de ser 20, temos no mapa e podemos so buscar e concatenar*/

            result += " e " + extenso[aux];

        } else { /*aqui ele pode nao ter no mapa, e ai eu teria que verificar a dezena e a unidade, buscar no mapa e assim dar concat*/

            if (dezena != 0) {
                result += " e " + extenso[dezena];
            }
            if (unidade != 0) {
                result += " e " + extenso[unidade];
            }
        }

        return result;
    }

    if (num < 100000) { /*99999*/

        int milhar = (num / 1000); //99
        int resto_milhar = num % 1000; //1
        string result;

        if(milhar != 1) {
            result = numeroPorExtenso(milhar) + " mil"; /*recursividade nessa pica entendi fodase*/
        } else {
            result += "mil";
        }

        if(resto_milhar==0){
            return result;
        }
        if(extenso.find(resto_milhar)!=extenso.end()){
            result+=" e "+extenso[resto_milhar];
            return result;
        }
        if(resto_milhar>100){
            result+=" "+numeroPorExtenso(resto_milhar);
            return result;
        }
        else if (resto_milhar != 0){ /*tirei o if dentro do if pq nao precisava xd*/
            result += " e " + numeroPorExtenso(resto_milhar);
            return result;
        }
        
        
    }

if (num <= 1000000) {
        int cem_milhar = (num / 1000); // 131072 ->131
        int resto_cem_milhar = ((num % 100000)%10000)%1000;  // 131072->072
        int aux1, aux2;
        string result="";
        //verificar 131
        if(cem_milhar==100){
            result+="cem mil";
        }
        else if (cem_milhar<200){
            result+="cento e ";
            result+=numeroPorExtenso(cem_milhar%100) + " mil";
        }
        else{
            result+=numeroPorExtenso(cem_milhar)+" mil";
        }

        //verifica 072
        if(resto_cem_milhar==0){
            return result;
        }
        else if(extenso.find(resto_cem_milhar)!=extenso.end()){
            result+=" e "+extenso[resto_cem_milhar];
        }
        else if(resto_cem_milhar<=100){
            result+=" e "+numeroPorExtenso(resto_cem_milhar);
        }
        else{
            result+=" "+numeroPorExtenso(resto_cem_milhar);
        }
        return result;
        
}
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long int n;
    while (cin >> n) {
        cout << numeroPorExtenso(n) << "\n";
    }

    return 0;
}
