#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int a, b, q, r;
   
   cin>>a;
   do{
    cin>>b;
   }while(b==0);

    int sinala = (a>0) ? 1 : (a<0) ? -1:0;
    int sinalb = (b>0) ? 1 : (b<0) ? -1:0;

   q=a/b;
   r=a%b;

    if (r<0) {
        if (sinala<0 && sinalb>0){
            q--;
            r=a-(q*b);
        }else if(sinala>0 && sinalb<0){
            q--;
            r=a-(q*b);
        }
        else {
            q++;
            r=a-(q*b);
        }
    }
    cout<<q<<" "<<r<<endl;
}