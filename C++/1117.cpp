#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;

    while(true){
        cin>>a;

        if (a<0 || a>10) {
            cin.ignore();
            cout<<"nota invalida"<<endl;
        } else {
            break; 
        }
    }

    while(true){
        cin>>b;

        if (b<0 || b>10) {
            cin.ignore();
            cout<<"nota invalida"<<endl;
        } else {
            break; 
        }
    }

    double media;
    media=(a+b)/2;
    cout<<fixed<<setprecision(2);
    cout<<"media = "<<media<<endl;

    return 0;
}
