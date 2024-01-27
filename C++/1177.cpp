#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector<int> vet;
    int x;
    cin>>x;

    for(int i=0; i<1000; ){
        int count=0;
        while(count!=x){
            vet.push_back(count);
            cout<<"N["<<i<<"]"<<" = "<<count<<endl;
            i++;
            if(i>999) break;
            count++;
        }
    }

}