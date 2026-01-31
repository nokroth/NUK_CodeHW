#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, num = 1;
    cin >> n;
    while (n--){
        int t;
        cin >> t;
        vector <int> mp(t);
        for (int i = 0; i < t; i++){
            cin >> mp[i];
        }
        int h = 0, l = 0;
        for (int i = 1; i < t; i++){
            if (mp[i] > mp[i-1]) h++;
            else if (mp[i] < mp[i-1]) l++;
        }
        cout << "Case " << num++ << ": " << h << ' ' << l << '\n';
    }
    return 0;
}