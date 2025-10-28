#include <bits/stdc++.h>

using namespace std;
int main(){
    int l, r;
    while (cin >> l >> r){
        int ans = -1, ch = 0;
        if (r < l){
            swap(l, r);
            ch = 1;
        }
        for (int i = l; i <= r; i++){
            int cnt = 1;
            int j = i;
            while (j > 1){
                if (j % 2) j = 3*j+1;
                else j /= 2;
                cnt++;
            }
            ans = max(ans, cnt);
        }
        if (ch) cout << r << ' ' << l << ' ';
        else cout << l << ' ' << r << ' ';
        cout << ans << '\n';
    }
}