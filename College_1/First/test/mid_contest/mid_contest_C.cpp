#include <bits/stdc++.h>

using namespace std;

int fun(int m){
    int x = 0;
    while (m > 0){
        x += m%10;
        m /= 10;
    }
    if (x >= 10) return fun(x);
    return x;
}

int main(){
	int n;
	while (cin >> n){
        if (n == 0) break;
        cout << fun(n) << '\n';

	}
	return 0;
}