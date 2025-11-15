//E (AC)
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans = LONG_LONG_MIN;
    cin >> n;
    vector <long long> dp(n);
    vector <long long> ft(n);
    for (int i = 0; i < n; i++){
        cin >> dp[i];
        if (i > 0) ft[i] = ft[i-1]+dp[i];
        else ft[i] = dp[i];
    }
    if (n == 0){
        cout << 0;
        return 0;
    }
    // 暴力解
    // for (int i = 0; i < n; i++){
    //     for (int j = i; j < n; j++){
    //         int a = 0;
    //         for (int k = i; k <= j; k++){
    //             a += dp[i];
    //         }
    //         ans = max(ans, a);
    //     }
    // }
    // 前綴和
    // for (int i = 0; i < n; i++){
    //     if (dp[i] < 0) continue;
    //     for (int j = i; j < n; j++){
    //         ans = max(ans, ft[j]-ft[i]);
    //     }
    // }
    // 動態規劃
    long long cmax = dp[0];
    ans = dp[0];
    for (int i = 1; i < n; i++){
        if (cmax < 0){
            cmax = dp[i];
        }else{
            cmax += dp[i];
        }
        // -1 3 -2 5 3 -5 2 2
        ans = max(ans, cmax);
    // }
    cout << ans << '\n';
	return 0;
}