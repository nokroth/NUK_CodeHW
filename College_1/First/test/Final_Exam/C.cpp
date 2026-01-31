#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int p = 1; p <= n; p++){
        int x1, x2, y1, y2, sx = 0, sy = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        int dx1 = x1 - sx;
        int dy1 = y1 - sy;
        int dx2 = x2 - sx, dy2 = y2 - sy;
        int mv1 = dx1 + dy1, mv2 = dx2 + dy2;
        int tot = 0, ans = 0;
        for (int i = 1; i <= mv1; i++){
            ans += i;
        }
        for (int i = 1; i <= mv2; i++){
            tot += i;
        }
        cout << "Case " << p << ": ";
        cout << (tot + dx2) - (ans + dx1) << '\n';
    }
}
