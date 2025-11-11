// B
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int a;
        cin >> a;
        int x = a * 567;
        x /= 9;
        x += 7492;
        x *= 235;
        x /= 47;
        x -= 498;
        int y = (x/10)%10;
        cout << abs(y) << '\n';
    }
}
//C
#include <bits/stdc++.h>

using namespace std;

int fun(int m){
    int x = 0;
    while (m > 0){
        x += m%10;
        m /= 10;
    }
    if (x >= 10) return fun(x);
    return x;
}

int main(){
	int n;
	while (cin >> n){
        if (n == 0) break;
        cout << fun(n) << '\n';

	}
	return 0;
}
//D
#include <bits/stdc++.h>

using namespace std;

 bool isprime(int m){
    for (int i = 2; i < m; i++){
        if (m % i == 0) return false;
    }
    return true;
}

int main(){
	int n;
	while (cin >> n){
        if (n == 0) break;
        int ans = 0;
        for (int i = 2; i < n/2+1; i++){
            if (isprime(i) && isprime(n-i)){
                ans++;
            }
        }
        cout << ans << '\n';
	}
	return 0;
}
//E(TLE, WA(score=12))
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	long long n;
	cin >> n;
	vector <long long> v(n+1);
	vector <long long> v1(n+1);
	v[0] = 0;
	v1[0] = 0;
	bool positive = false; // 耞Τ⊿Τタ计瞷
	bool all_positive = true; // 耞琌场常琌タ计
	long long ans = v[0]; // 絛瞅ノlong long int
	for (long long i = 1; i <= n; i++){
        cin >> v[i];
        if (v[i] > 0) positive = true;
        if (v[i] < 0) all_positive = false;
        if (positive) ans = max(ans, v[i]);
        // 狦Τタ计瞷秈︽程ゑ耕穦ゑ耕玂繧
        v1[i] = v1[i-1]+v[i]; // 玡后㎝
	}
	if (all_positive){ // 场常琌タ计钡块玡后㎝程兜
        cout << v1[n];
        return 0;
	}
	if (!positive){
        // 场常琌璽计ê碞钡т程
        long long tot = v[1];
        for (int i = 1; i <= n; i++){
            tot = max(tot, v[i]);
        }
        cout << tot;
        return 0;
	}
	for (int i = 0; i < n; i++){
        if (v[i+1] < 0) continue;
        // 狦硂皚璽计秨﹍ぃ紇臫程挡狦
        for (int j = i+1; j <= n; j++){
            ans = max(ans, v1[j]-v1[i]);
            // ノ玡后㎝畉ㄓ璸衡皚跋丁㎝
            //cout << v1[j] << ' ' << v1[i] << ' ' << ans << '\n';
        }
	}
	cout << ans;

	return 0;
}
