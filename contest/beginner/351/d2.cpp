#include <bits/stdc++.h>
#include <math.h>
using namespace std;
using P = pair<int, int>;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int cnt;
vector<vector<int>> seen(1000, vector<int>(1000, 0));
vector<string> maze(1000);

int h, w;

void dfs(int i, int j, int idx){
    seen[i][j] = idx;
    if(maze[i][j]=='M' || maze[i][j]=='#') return;
    for(int k=0; k<4; k++){
        int ny = i+dy[k];
        int nx = j+dx[k];
        if(ny>=0 && ny<h && nx>=0 && nx<w){
            if(seen[ny][nx]!=idx){
                //cout << ny << nx << endl;
                cnt++;
                dfs(ny, nx, idx);
            }
        }
    }
    

}

int main(){
    cin >> h >> w;
    for(int i=0; i<h; i++) cin >> maze[i];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(maze[i][j]=='#'){
                for(int k=0; k<4; k++){
                    int ny = i+dy[k];
                    int nx = j+dx[k];
                    if(ny>=0 && ny<h && nx>=0 && nx<w) maze[ny][nx] = 'M';
                }
            }
        }
    }
    int ans = 1;
    int idx = 1;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(!seen[i][j] && maze[i][j]!='#'){
                cnt = 1;
                dfs(i, j, idx);
                if(cnt > ans) ans = cnt;
                idx++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}