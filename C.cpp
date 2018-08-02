#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,s;
    long long a[100002];
    cin >> n;
    for (long long i=0; i<2*n; i++) {
        cin >> a[i];
    }
    sort(a,a+2*n);
    s=(a[n-1]-a[0])*(a[2*n-1]-a[n]);
    for (long long i=n+1; i<2*n; i++) {
        s=min(s,(a[2*n-1]-a[0])*(a[i]-a[i-n]));
    }
    cout << s;
}