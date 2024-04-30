#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(m==0){
        cout << 0 << endl;
        return 0;
    }
    vector<vector<int>> f(n, vector<int>());
    for(int i=0; i<m; i++){
        int idx, tmp;
        cin >> idx >> tmp;
        f[idx-1].push_back(tmp-1);
        f[tmp-1].push_back(idx-1);
    }
    int cnt = 0;
    for(int i=0; i<f.size(); i++){
        int x = i;
        for(int j=0; j<f[i].size(); j++){
            int y = f[i][j];
            if(y!=x){
                for(int k=0; k<f[y].size(); k++){
                    int z = f[y][k];
                    if(z!=x){
                        bool hasx = false;
                        for(int l=0; l<f[z].size(); l++){
                            if(f[z][l]==x){
                                hasx = true;
                                break;
                            }
                        }
                        if(!hasx){
                            cnt++;
                            f[x].push_back(z);
                            f[z].push_back(x);
                        }
                    }
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}