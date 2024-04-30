#include <bits/stdc++.h>
#include <math.h>
using namespace std;
vector<vector<int>> a(2000, vector<int>(2000));
int N, M;
int ans = 0;
int main(){
    
    cin >> N >> M;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            int eqnum = 0;
            for(int k=0; k<M; k++){
                if(a[i][k] == a[j][k]) eqnum++;
            }
            if(eqnum%2==1) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}