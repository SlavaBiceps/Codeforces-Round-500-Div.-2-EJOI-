#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s1,s2,x;
    cin >> n;
    s1=0;
    s2=0;
    for (int i=0; i<n; i++) {
        cin >> x;
        s1+=x;
    }
    for (int i=0; i<n; i++) {
        cin >> x;
        s2+=x;
    }
    if (s1>=s2) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}