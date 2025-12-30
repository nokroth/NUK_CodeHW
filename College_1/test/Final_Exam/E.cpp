#include <bits/stdc++.h>

using namespace std;

long long int mod = 1e9 + 7;

int main(){
    long long int n;
    cin >> n;
    long long int ans = 1, pw = 2;
    for (int i = 0; i < n; i++){
        ans *= pw;
        ans %= mod;
    }
    cout << ans % mod;
}
