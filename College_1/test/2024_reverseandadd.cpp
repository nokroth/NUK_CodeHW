#include <bits/stdc++.h> // �ޤJ�Ҧ��зǨ禡�w

using namespace std;

// �A���j��P�_��ơA�\��O���T��
bool is_palindrome(string x){
    string original = x;
    reverse(x.begin(), x.end());
    return original == x;
}

int main(){
    // ========== �[�t I/O ==========
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

            // �ϥ� stoll �ӳB�z�j�Ʀr
            long long sum = stoll(s) + stoll(reversed_s);

            s = to_string(sum);
        }

        cout << cnt << ' ' << s << '\n';
    }

    return 0;
}
