#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int soma=0, piscada=0;

    for(piscada=0; piscada<3; piscada++){
    while(getline(cin, s)){

        if(s[0]=='c'){
            cout<<soma<<endl;
            soma=0;
            piscada=0;
        }else{
            if (s[0]=='*') soma+=4;
            if (s[1]=='*') soma+=2;
            if (s[2]=='*') soma+=1;
            piscada++;
            }
        }

    }
}
