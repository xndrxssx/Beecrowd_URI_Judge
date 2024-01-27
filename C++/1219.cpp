#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    
    while(cin>>a>>b>>c){
        double p=0, area=0, violets=0, roses=0, sunflower=0;
        p=(a+b+c)/2.0;
        area=sqrt(p*(p-a)*(p-b)*(p-c)); //area do triangulo
        roses=M_PI*pow(area/p,2); //area do circulo menor
        sunflower=M_PI*pow((a*b*c)/(area*4),2)-area; //circulo maior
        violets=area-roses;
        cout<<fixed<<setprecision(4);
        cout<<sunflower<<" "<<violets<<" "<<roses<<endl;
    }

}