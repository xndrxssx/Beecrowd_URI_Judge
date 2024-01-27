#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin.get();
    while(n--){
        getline(cin, s);
        int i = 0;
        while(true){
            i = s.find("oulupukk", i + 1);
            if(i == string::npos){
                break;
            }

            if(isalpha(s[i - 1]) && isalpha(s[i + 8])){
                s[i - 1] = 'J';
                s[i + 8] = 'i';
            }
        }
        
        cout << s << '\n';
    }
}