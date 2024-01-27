#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    int count=1;

    for (count; count <= y;) {
        for (int j=1; j<=x; j++) {
            cout<<count;
            if (j<x) {
                cout<<" ";
            }
            count++;
        }
        cout<<endl;
    }

    return 0;
}
