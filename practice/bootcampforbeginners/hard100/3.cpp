#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int h, w, cnt, MIN, MAX;
vector<string> s(100);
vector<vector<bool>> seen(100, vector<bool>(100, false));


void dfs(int i, int j){
    if(i==h-1 && j==w-1){
        if(cnt<MIN) MIN=cnt;
        cnt--;
        return;
    }
    seen[i][j]=true;
    if(s[i][j]=='#') cnt++;
    int ny = i+1;
    int nx = j+1;
    if(!seen[ny][j]&&ny<h) dfs(ny, j);
    if(!seen[i][nx]&&nx<w) dfs(i, nx);
    cnt--;
}

int main(){
    cin >> h >> w;
    for(int i=0; i<h; i++) cin >> s[i];
    cnt = 0;
    MIN = 100000;
    MAX = 0;
    dfs(0,0);
    cout << MIN << endl;

}