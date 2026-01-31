#include <bits/stdc++.h>

using namespace std;

int main(){
    auto n = 0;
    cout << "要印幾層 : ";
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << '*';
        }
        cout << '\n';
    }
}