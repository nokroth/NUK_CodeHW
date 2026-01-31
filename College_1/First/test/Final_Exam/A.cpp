#include <iostream>
#include <string>

using namespace std;


int main(){
    string s;
    while (getline(cin, s)){
        if (s == "#") break;
        int ans = 0, t = 1;
        for (int j = 0; j < s.size(); j++){
            char i = s[j];
            if (i >= 'A' && i <= 'Z') ans += t * (i - 'A' + 1);
            t++;
        }
        cout << ans << '\n';
    }
}
