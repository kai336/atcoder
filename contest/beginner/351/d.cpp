#include <bits/stdc++.h>
#include <math.h>
using namespace std;
using P = pair<int, int>;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
vector<vector<bool>> seen;
vector<vector<char>> maze;
vector<vector<char>> s;
long long cnt = 1;
int h, w;
void dfs(P p){
    if(maze[p.first][p.second]=='M') return;
    seen[p.first][p.second] = true;
    
    for(int i=0; i<4; i++){
        int ny = p.first + dy[i];
        int nx = p.second + dx[i];
        if(ny < 0 || h <= ny || nx < 0 || w <= nx) continue;
        //if(maze[ny][nx]=='#') continue;
        if(seen[ny][nx]) continue;
        cnt++;
        dfs(make_pair(ny, nx));
    }
}

int main(){
    cin >> h >> w;
    seen.assign(h, vector<bool>(w, false));
    s.assign(h, vector<char>(w));
    maze.assign(h, vector<char>(w));
    for(int i=0; i<h; i++) for(int j=0; j<w; j++) cin >> s[i][j];
    maze = s;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(s[i][j]=='#'){
                if(i<h-1){
                    maze[i+1][j] = 'M';
                }
                if(i>0){
                    maze[i-1][j] = 'M';
                }
                if(j<w-1){
                    maze[i][j+1] = 'M';
                }
                if(j>0){
                    maze[i][j-1] = 'M';
                }
            }
        }
    }
    
    
    long long ans = 1;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(s[i][j]=='.' && !seen[i][j]){
                cnt = 1;
                if(maze[i][j]!='M') dfs(make_pair(i,j));
                if(ans < cnt) ans = cnt;
            }
        }
    }
    cout << ans << endl;
    return 0;
}