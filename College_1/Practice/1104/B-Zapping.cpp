#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    while (cin >> a >> b){
        if (a == -1 && b == -1) break;
        if (b < a) swap(a, b);
        int ans = min(a+100-b, b-a);
        cout << ans << '\n';
    }
}