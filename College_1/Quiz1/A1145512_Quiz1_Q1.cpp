#include <bits/stdc++.h>

using namespace std;

int main()
{
    int date = 1;
    cout << "Su Mo Th We Th Fr Sa\n";
    for (int i = 1; i <= 31; i++){
        if (i < 10) cout << '0';
        cout << i << ' ';
        if (i % 7 == 0) cout << endl;
    }
    return 0;
}
