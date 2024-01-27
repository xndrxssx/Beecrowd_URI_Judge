#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    float nota, media=0;

    while(1){
    media=0;
    for (int i=0; i<2; i++){
        cin>>nota;
            if (!(nota>=0.0 && nota<=10.0)){
                cout<<"nota invalida"<<endl;
                i--;
            }
            else{
                media+=nota;
            }
            }
        cout<<fixed<<setprecision(2);
        cout<<"media = "<<media/2<<endl;
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        cin>>x;
        if(x==2) break;
        else {
            while (x!=1 && x!=2){
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                cin>>x;
            }
            if (x==2) break;
        }
    }
}