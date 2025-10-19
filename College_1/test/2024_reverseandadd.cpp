#include <bits/stdc++.h>

using namespace std;

bool que(string x){
    int i = 0, j = x.size()-1;
    while (i < j){
        if (x[i] != x[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        int cnt = 0;
        cin >> s;
        while (!que(s)){
            cnt++;
            string rs = s;
            reverse(s.begin(), s.end());
            long long int ans = stoi(s)+stoi(rs);
            s = to_string(ans);
        }
        cout << cnt << ' ' << s << '\n';
        
    }
}