#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int a;
        cin >> a;
        int x = a * 567;
        x /= 9;
        x += 7492;
        x *= 235;
        x /= 47;
        x -= 498;
        int y = (x/10)%10;
        cout << abs(y) << '\n';
    }
}