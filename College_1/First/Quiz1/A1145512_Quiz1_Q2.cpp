#include <bits/stdc++.h>

using namespace std;

vector<int> dp(1000001, 0);

int dfs(long long n) {
    if (n >= dp.size()) {
        if (n % 2 == 0) {
            return 1 + dfs(n / 2);
        } else {
            return 1 + dfs(3 * n + 1);
        }
    }

    if (dp[n] != 0) {
        return dp[n];
    }

    if (n % 2 == 0) {
        dp[n] = 1 + dfs(n / 2);
    } else {
        dp[n] = 1 + dfs(3 * n + 1);
    }
    
    return dp[n];
}

int main() {
    // 設定 base case
    dp[1] = 1;

    int i, j;
    while (cin >> i >> j) {
        int original_i = i;
        int original_j = j;

        if (i > j) {
            swap(i, j);
        }

        int max_len = 0;

        for (int k = i; k <= j; k++) {
            max_len = max(max_len, dfs(k));
        }

        // 【修正點】依照正確格式輸出
        cout << original_i << " " << original_j << " " << max_len << endl;
    }

    return 0;
}