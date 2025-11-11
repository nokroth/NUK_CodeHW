#include <bits/stdc++.h> // 引入所有標準函式庫

using namespace std;

// 你的迴文判斷函數，功能是正確的
bool is_palindrome(string x){
    string original = x;
    reverse(x.begin(), x.end());
    return original == x;
}

int main(){
    // ========== 加速 I/O ==========
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ============================

    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int cnt = 0;

        while (!is_palindrome(s)){
            cnt++;
            string reversed_s = s;
            reverse(reversed_s.begin(), reversed_s.end());

            // 使用 stoll 來處理大數字
            long long sum = stoll(s) + stoll(reversed_s);

            s = to_string(sum);
        }

        cout << cnt << ' ' << s << '\n';
    }

    return 0;
}
