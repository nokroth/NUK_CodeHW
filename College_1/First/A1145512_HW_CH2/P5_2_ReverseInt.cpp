#include <bits/stdc++.h>

using namespace std;

int main(){
    auto n = 0;
    cin >> n;
    auto ans = 0;
    while (n > 0){
        ans += n%10;
        ans *= 10;
        n /= 10;
    }
    ans /= 10;
    cout << ans;
}