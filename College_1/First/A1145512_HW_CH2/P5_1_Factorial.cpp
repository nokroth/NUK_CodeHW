#include <bits/stdc++.h>

using namespace std;

int main(){
    auto n = 0;
    cin >> n;
    auto ans1 = 1, ans2 = 1;
    for (int i = 1; i <= n; i++) ans1 *= i;
    while (n--){
        ans2 *= n+1;
    }
    cout << ans1 << ' ' << ans2;
}