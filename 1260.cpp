#include <bits/stdc++.h>


using namespace std;

int main (){
	int n,  total=0;
	map<string, int> tree;
	string s;

	cin>>n;
	getchar();
	getchar();
	while(n--){
        while(getline(cin, s)){
            if (!s.size())
                break;
            else{
                tree[s]++;
                total++;
            }
        }
        cout << fixed << setprecision(4);
        for(auto [key, value] : tree){
            cout<<key<<" "<<((100.0*value)/total)<<endl;
        }
        total=0;
        tree.clear();
        if(n!=0)
            printf("\n");
	}
	return 0;
}



