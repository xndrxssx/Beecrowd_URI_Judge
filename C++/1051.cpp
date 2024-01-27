#include <bits/stdc++.h>
using namespace std;


int main(){
 
    float salario, acum=0, aux=0;

    cin>>salario;
    
    if(2000.00<salario){
        if(3000.00<salario){
                if(4500.00<salario){
                    acum+=1000*0.08;
                    acum+=1500*0.18;
                    acum+=(salario-4500.00)*0.28;
                    printf("R$ %.2f\n", acum);
                }
                else{
                    acum+=1000*0.08;
                    acum+=(salario-3000.00)*0.18;
                    printf("R$ %.2f\n", acum);
                }
        }
        else{
            acum+=(salario-2000)*0.08;
            printf("R$ %.2f\n", acum);
        }
    }
    else printf("Isento\n");
    return 0;
}