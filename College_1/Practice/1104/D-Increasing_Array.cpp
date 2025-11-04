#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    long long ans = 0, deff;
    for (int i = 1; i < n; i++){
        if (v[i] < v[i-1]){
            deff = v[i-1]-v[i];
            ans += deff;
            v[i] = v[i-1];
        }
    }
    cout << ans;
    return 0;
}