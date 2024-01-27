#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, str1, str2;
    int i, j;
    list<string> strings;

    while (getline(cin, str)){
        for(i=0; str[i]; i++){
            if (str[i]=='['){
                for(j=i+1; j<str.size() && str[j]!=']' && str[j]!='['; j++){
                str1+=str[j];
                }
                strings.push_front(str1);
                str1.clear();
                if (str[j]=='[') {
                    str1.clear();
                    }
                i=j-1;   
                }
            else if (str[i]!=']') {
                str2+=str[i];
            }
        }
        for(auto& v:strings){
            cout<<v;
        }
        cout<<str2;
        cout<<endl;
        str1.clear();
        str2.clear();
        strings.clear();
    }
    
}