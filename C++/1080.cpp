#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, maior=0, posicao, count=0;
    while(count<100){
        cin>>n;
        if(!count){
            maior=n;
        }
        else if (n>maior) maior=n, posicao=count;
        count++;
    }
    cout<<maior<<"\n"<<posicao+1<<"\n";
 
    return 0;
}