#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    string str, str_aux;
    string sub_str="oulupukk";
    list<string>string;

    cin>>n;
    cin.get();

    while(n--){
        getline(cin, str);
        
        for(i=0; i<str.length(); i++){
            if(str.substr(i, sub_str.length())==sub_str){
                if(isalpha(str[i-1]) && isalpha(str[i+8])){
                    str[i-1]='J';
                    str[i+8]='i';
            }
            i=i+8;
            }

        }
        cout<<str<<endl;
        str.clear();
    }
}