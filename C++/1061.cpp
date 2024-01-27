#include <bits/stdc++.h>
using namespace std;

int main(){
    string dia;
    int d1, d2, h1, h2, m1, m2, s1, s2;
    char c;

    cin >> dia >> d1;
    cin.ignore();
    cin >> h1 >> c >> m1 >> c >> s1;
    cin.ignore();
    cin >> dia >> d2;
    cin.ignore();
    cin >> h2 >> c >> m2 >> c >> s2;

    d1 = d2 - d1;
    h1 = h2 - h1;
    m1 = m2 - m1;
    s1 = s2 - s1;

    if (s1 < 0) {
        m1--;
        s1 += 60;
    }
    if (m1 < 0) {
        h1--;
        m1 += 60;
    }
    if (h1 < 0) {
        d1--;
        h1 += 24;
    }

    cout << d1 << " dia(s)\n" << h1 << " hora(s)\n" << m1 << " minuto(s)\n" << s1 << " segundo(s)\n";
}
