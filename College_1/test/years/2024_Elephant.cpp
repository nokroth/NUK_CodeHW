#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    int cnt = x/5;
    if (x % 5 != 0) cnt++;
    cout << cnt;
    
}