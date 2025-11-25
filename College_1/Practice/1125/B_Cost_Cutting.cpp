#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, n = 1;
    cin >> T;
    while (T--){
        // 方法二 陣列解
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3);
        
        // 方法一 暴力解
        // int a, b, c, ans;
        // cin >> a >> b >> c;
        // int mx = max({a, b, c});
        // int mn = min({a, b, c});
        // if (mx == a){
        //     if (mn == c) cout << b << '\n';
        //     else if (mn == b) cout << c << '\n';
        // }else if (mx == b){
        //     if (mn == a) cout << c << '\n';
        //     else if (mn == c) cout << a << '\n';
        // }else{
        //     if (mn == a) cout << b << '\n';
        //     else if (mn == b) cout << a << '\n';
        // }
        
        cout << "Case " << n++ << ": ";
        cout << arr[1] << '\n';
    }
}