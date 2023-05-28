#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=1, p1=0, p2=0, t1=0, t2=0;
    string s;
    while(getline(cin, s)){
        for(int i=0; s[i]; i++)
        {
            if (s[i]=='('){
                p1++;
                t1+=i;
            }
            else if (s[i]==')'){
                p2++;
                t2+=i;
                }
            }
        if (t2<t1 || t2==t1){
            cout<<"incorrect"<<endl;
        }
                    
        else if (p1>p2 || p2>p1){
            cout<<"incorrect"<<endl;
        }
        else{   
            cout<<"correct"<<endl;
        }
        p1=0, p2=0, t1=0, t2=0;
    }
    return 0;
}