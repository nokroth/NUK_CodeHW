#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    while (cin >> s1 >> s2){
        int i = 0;
        for (int j = 0; j < s2.size(); j++){
            if (s1[i] == s2[j]){
                i++;
            }
        }
        if (i == s1.size()) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
