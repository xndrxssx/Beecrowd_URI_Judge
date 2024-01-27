#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ehpar, impar;
    int n;

    for (int i=0; i<15; ++i) {
        cin>>n;
        if (n%2) {
            impar.push_back(n);
            if (impar.size()==5) {
                for (int j=0; j<5; ++j) {
                    cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
                }
                impar.clear();
            }
        } else {
            ehpar.push_back(n);
            if (ehpar.size()==5) {
                for (int j=0; j<5; ++j) {
                    cout<<"par["<<j<<"] = "<<ehpar[j]<<endl;
                }
                ehpar.clear();
            }
        }
    }

    for (int i=0; i<impar.size(); ++i) {
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
    }

    for (int i=0; i<ehpar.size(); ++i) {
        cout<<"par["<<i<<"] = "<<ehpar[i]<<endl;
    }

    return 0;
}
