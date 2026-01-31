#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int r, ans = 1e9;
        cin >> r;
        int house[r];
        for (int i = 0; i < r; i++){
            cin >> house[i];
        }
        sort(house, house+r);
        for (int i = house[0]; i < house[r-1]; i++){
            int tot = 0;
            for (auto j : house){
                tot += abs(i - j);
            }
            ans = min(ans, tot);
        }
        cout << ans << '\n';
    }
}