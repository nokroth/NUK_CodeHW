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