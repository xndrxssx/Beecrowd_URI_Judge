#include <bits/stdc++.h>
using namespace std;

int main(){
    int b, h, p;
    while(cin>>b, b){
        cin>>h>>p;
        cout<<(int)sqrt((b*h)*(100.0/p))<<endl;
    }
}