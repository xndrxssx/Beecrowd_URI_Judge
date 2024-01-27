#include <bits/stdc++.h>
using namespace std;

int led(char a){
    if (a=='1') return 2;
    else if (a=='2' || a=='3' || a=='5') return 5;
    else if (a=='4') return 4;
    else if (a=='6'||a=='9'||a=='0') return 6;
    else if (a=='7') return 3;
    else if (a=='8') return 7;
    return 0;
}

int main(){
    int n, i, count=0;
    string s;
    cin>>n;
    cin.ignore();
    while(n--){
        count=0;
        getline(cin,s);
        for(auto c:s){
            count+=led(c);
        }
        cout<<count<<" leds"<<endl;
    }
}