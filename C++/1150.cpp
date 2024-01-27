#include <iostream>
using namespace std;

int main() {
    int X,Z;
    cin>>X;
    
    do{
        cin>>Z;
    }while (Z<=X); 

    int soma=X;
    int count=1; 

    while(soma<=Z){
        X++;
        soma+=X;
        count++;
    }

    cout<<count<<endl;

    return 0;
}
