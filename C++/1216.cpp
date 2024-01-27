#include <bits/stdc++.h>
using namespace std;

int main(){
    int dist, count=0;
    string s;
    double media=0.0;
    while(getline(cin, s)){
        cin>>dist;
        cin.ignore();
        media+=dist;
        count++;
    }
    cout<<fixed<<setprecision(1);
    cout<<media/count<<endl;
}