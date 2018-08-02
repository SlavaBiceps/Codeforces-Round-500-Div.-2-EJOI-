#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,fl;
    int mas[100002];
    cin >> n >> x;
    map<int,int> mapp;
    for (int i=0; i<n; i++){
        cin >> mas[i];
        if (mapp[mas[i]]==1){
            cout << "0";
            fl=1;
        }
        mapp[mas[i]]++;
    }
    if (fl==1) {
        return 0;
    }
    for(int i=0; i<n; i++){
        mapp[mas[i]]--;
        if (mapp[mas[i] & x]){
            cout << "1";
            return 0;
        }
        mapp[mas[i]]++;
    }
    map<int,int> mapp2;
    for(int i=0; i<n; i++){
        if (mapp2[mas[i] & x]){
            cout << "2";
            return 0;
        }
        mapp2[mas[i]&x]++;
    }
    cout << -1;
    return 0;
}