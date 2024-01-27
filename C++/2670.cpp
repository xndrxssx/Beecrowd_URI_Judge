#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> pessoas;
    vector<int> tempos={0};

    pessoas.resize(4);
    tempos.resize(4);
    
    for(int i=0; i<3; i++){
        cin>>pessoas[i];
    }

    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i!=j) tempos[i]+=pessoas[j]*2;
        }
    }

    int min=tempos[0];
    for(int i=1; i<3; i++){
        if(tempos[i]<min) min=tempos[i];
    }
    cout<<min<<endl; 
}