#include <bits/stdc++.h>

using namespace std;

int main(){
    
    unsigned long long int byte, count=0, x, y;

        do{
        cin>>x>>y;

        if(x==0 && y==0) break;

        byte=x^y;

        while (byte != 0) {
        if (byte & 1) {
            count++;  
        }
        byte >>= 1; 
    }


        cout<<count<<endl;
        count=0;
        }while(1);

}