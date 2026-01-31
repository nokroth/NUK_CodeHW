#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, ans = 0;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n < 0){
            ans += n;
        }
    }
    cout << abs(ans);
        
    
}