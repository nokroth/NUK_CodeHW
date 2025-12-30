#include <bits/stdc++.h>

using namespace std;

string kb[4] = { "-=`1234567890-=",
                  "[]qwertyuiop[]",
                  ";'asdfghjkl;'",
                  "./zxcvbnm,./"


};

int main(){
    string s;
    int l = 0;
    while (getline(cin, s)){
        string ans = "";
        for (auto p : s){
            if (p == ' '){
                ans += ' ';
                continue;
            }
            char i = tolower(p);
            bool now = false;
            for (int j = 0; j < 4; j++){
                for (int k = 2; k < kb[j].size(); k++){
                    if (i == kb[j][k]){
                        now = true;
                        ans += kb[j][k-2];
                        break;
                    }
                }
                if (now) break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
