// Algorithm DFS
/*
The purpose of this code is to explain what is the foundation of Deep First Search Algorithm
DFS -- Choose OR Not Choose
I want to list all subset in V that are exactly k elements.
*/
#include <iostream>
#include <vector>

using namespace std;
int k = 4;
vector <int> V;
void dfs(vector <int> v, int now){
    if (now == V.size()) return;
    if (v.size() == k){
        for (auto i : v) cout << i << ' ';
        cout << '\n';
        return;
    }
    dfs(v, now+1);
    v.push_back(V[now]);
    dfs(v, now+1);
}

int main(){
    int n = 10;
    
    for (int i = 0; i < n; i++){
        V.push_back(i+1);
    }
    vector <int> v;
    dfs(v, 0);
}