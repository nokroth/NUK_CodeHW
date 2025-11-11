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
    for (int i = 0; i < n; i++){
        cin >> dp[i];
    }
    if (n == 0){
        cout << 0;
        return 0;
    }
    long long cmax = dp[0];
    ans = dp[0];
    for (int i = 1; i < n; i++){
        if (cmax < 0){
            cmax = dp[i];
        }else{
            cmax += dp[i];
        }
        
        ans = max(ans, cmax);
    }
    cout << ans << '\n';
	return 0;
}