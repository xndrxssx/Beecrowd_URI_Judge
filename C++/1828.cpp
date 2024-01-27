#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, count=1;
    cin>>t;
    while(t--){
        string r, s;
        cin>>s>>r;

        if(r==s) cout<<"Caso #"<<count++<<": De novo!"<<endl;
        else if(r=="papel"){

            if(s=="pedra" || s=="Spock") cout<<"Caso #"<<count++<<": Raj trapaceou!"<<endl;
            else if(s=="papel") cout<<"Caso #"<<count++<<": De novo!"<<endl;
            else if (s=="tesoura" || s=="lagarto") cout<<"Caso #"<<count++<<": Bazinga!"<<endl;

        }
        else if(r=="tesoura"){

            if(s=="Spock" || s=="pedra") cout<<"Caso #"<<count++<<": Bazinga!"<<endl;
            else if( s=="tesoura") cout<<"Caso #"<<count++<<": De novo!"<<endl;
            else if (s=="papel" || s=="lagarto") cout<<"Caso #"<<count++<<": Raj trapaceou!"<<endl;

        }
        else if(r=="pedra"){
            
            if(s=="Spock" || s=="papel") cout<<"Caso #"<<count++<<": Bazinga!"<<endl;
            else if( s=="pedra") cout<<"Caso #"<<count++<<": De novo!"<<endl;
            else if (s=="lagarto" || s=="tesoura") cout<<"Caso #"<<count++<<": Raj trapaceou!"<<endl;

        }
        else if(r=="Spock"){
            
            if(s=="lagarto" || s=="papel") cout<<"Caso #"<<count++<<": Bazinga!"<<endl;
            else if(s=="Spock") cout<<"Caso #"<<count++<<": De novo!"<<endl;
            else if (s=="pedra" || s=="tesoura") cout<<"Caso #"<<count++<<": Raj trapaceou!"<<endl;

        }
        else if(r=="lagarto"){
            
            if(s=="pedra" || s=="tesoura") cout<<"Caso #"<<count++<<": Bazinga!"<<endl;
            else if(s=="lagarto") cout<<"Caso #"<<count++<<": De novo!"<<endl;
            else if (s=="papel" || s=="Spock") cout<<"Caso #"<<count++<<": Raj trapaceou!"<<endl;
        }

    }
}