#include <bits/stdc++.h>

using namespace std;

int dfs(int now, int c, int ans){
    int tot = now/c;
    ans += tot;
    int nw = now%c;
    if (tot+nw >= c) return dfs(tot+nw, c, ans);
    return ans;
}

int main()
{
    int N;
    cin >> N;
    while (N--){
        int e, f, c;
        cin >> e >> f >> c;
        cout << dfs(e+f, c, 0);
    }
    return 0;
}
