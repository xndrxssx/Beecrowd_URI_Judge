#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector <int> n1;
    int c, n, v;

    cin>>c;
    for(int i = 0; i<c; i++){
        float count=0.0, media, soma=0;
    
        cin >> v;
        for(int j = 0; j<v; j++){
            cin>>n;
            n1.push_back(n);
        }

        for(auto& x: n1){
            soma+= x;
        }
        
        media=soma/n1.size();
    
        for (int i=0; i<n1.size(); i++){
            if(n1[i]>media)
                count++;
            }

        soma=(count/n1.size())*100;
    
        cout<<fixed<<setprecision(3)<<soma<<"%"<<endl;
        
    n1.clear();
    }

    return 0;
}