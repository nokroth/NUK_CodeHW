#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, cnt = 1;
	cin >> n;
	while (n--){
        int a, b, ans = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++){
            if (i % 2) ans += i;
        }
        cout << "Case " << cnt++ << ": " << ans << '\n';
	}

	return 0;
}
