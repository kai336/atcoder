#include <bits/stdc++.h>
using namespace std;

char snuke[] = "snuke";
bool seen[500][500];
void seeninit(){
    for(int i = 0; i < 500; i++){
    for(int j = 0; j < 500; j++){
        seen[i][j] = false;
    }
}
}


void dfs(int h, int w, char s[h][w], int i, int j, bool flag){
    seen[i][j] = true;
    if(!seen[i + 1][j]){
        if(s[i + 1][j] == snuke[count % 5]){
            count++;
            dfs(h, w, s, i + 1, j, flag);
        }else if(s[i - 1][j] == snuke[count % 5]){
            count++;
            dfs(h, w, s, i - 1, j, flag);
        }else if(s[i][j + 1] == snuke[count % 5]){
            count++;
            dfs(h, w, s, i, j + 1, flag);
        }else if(s[i][j - 1] == snuke[count % 5]){
            count++;
            dfs(h, w, s, i, j - 1, flag);
        }
    }
    if(count == h + w - 2){
        flag = true;
    }
    count--;
}

int main(){
    int h, w;
    cin >> h >> w;
    char s[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> s[i][j];
        }
    }

    seeninit();
    int count = 0;
    bool flag = false;

    dfs(h, w, s, 0, 0, flag);

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl; 
    
}