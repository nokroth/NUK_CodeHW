#include <bits/stdc++.h>

using namespace std;

bool is_chr(char x){
    return (x >= 'a' && x <= 'z');
}

int main(){
    string s;
    while (getline(cin, s)){
        int ans = 0;
        bool is_now_word = false;
        for (int i = 0; i < s.size(); i++){
            char now = tolower(s[i]), curr = tolower(s[i-1]);
            if (!is_chr(now) && is_chr(curr)) ans++;
        }
        cout << ans << '\n';
    }
}
