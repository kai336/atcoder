#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;
vector<bool> seen;
vector<bool> isins;
void dfs(const Graph &G, int v, int d) {
    seen[v] = true; // v を訪問済にする
    isins[v] = true;
    //cout << v << "  true" << endl;
    if(d < 0) return;
    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v, d-1); // 再帰的に探索
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    Graph G(n);
    for(int i=1; i<n; i++){
        int p;
        cin >> p;
        G[p-1].push_back(i);
    }
    int x[m], y[m];
    
    isins.assign(n, false);
    for(int i=0; i<m; i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0; i<m; i++){
        seen.assign(n, false);
        dfs(G, x[i]-1, y[i]-1);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(isins[i]) ans++;
    }

    cout << ans << endl;
    
}