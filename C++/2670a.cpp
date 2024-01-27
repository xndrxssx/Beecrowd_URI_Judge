#include <bits/stdc++.h>
using namespace std;

int main (){
    int a1, a2, a3, min1, min2, min3;
     
    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);

    min1=(a2*2)+(a3*4);
    min2=(a1*2)+(a3*2);
    min3=(a1*4)+(a2*2);

    if(min1<=min2 && min1<=min3) cout<<min1<<endl;
    else if (min3>=min2) cout<<min2<<endl;
    else cout<<min3<<endl;


    }