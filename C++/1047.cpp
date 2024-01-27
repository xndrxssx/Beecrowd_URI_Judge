#include <bits/stdc++.h>

using namespace std;

int main(){
    int h1, h2, m1, m2, h3=0, m3=0;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if(h1==h2){
        if(m1==m2) {
            m3=0;
            h3=24;
        }
        else if (m1<m2) m3=abs(m1-m2);
        else if (m1>m2) {
            m3=60-abs(m1-m2);
            h3=23;
        }
        }
    else if (h1<h2){
        if(m1==m2) {
            m3=0;
            h3=abs(h1-h2);
        }
        else if (m1<m2) {
            m3=abs(m1-m2);
            h3=abs(h1-h2);
        }
        else if (m1>m2) {
            m3=60-abs(m1-m2);
            h3=abs(h1-h2)-1;
        }
    }
    else if (h1>h2){
        if(m1==m2) {
            m3=0;
            h3=24-abs(h1-h2);
        }
        else if (m1<m2) {
            m3=abs(m1-m2);
            h3=24-abs(h1-h2);
        }
        else if (m1>m2) {
            m3=60-abs(m1-m2);
            h3=23-abs(h1-h2);
        }
    }
    cout<<"O JOGO DUROU "<<h3<<" HORA(S)"<<" E "<<m3<<" MINUTO(S)"<<endl;
    }
