#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    int x[H][W];
    for(int h=0; h<H; h++){
        for(int w=0; w<W; w++){
            cin >> x[h][w];
        }
    }
    int Q;
    cin >> Q;
    int A[Q], B[Q], C[Q], D[Q];
    for(int i=0; i<Q; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    vector<vector<long long>> sum(H, vector<long long>(W, 0));
    for(int h=0; h<H; h++){
        for(int w=0; w<W; w++){
            if(h==0&&w==0){
                sum[h][w] = x[h][w];
            }else if(h==0){
                sum[h][w] = sum[h][w-1] + x[h][w];
            }else if(w==0){
                sum[h][w] = sum[h-1][w] + x[h][w];
            }else{
                sum[h][w] = sum[h-1][w] + sum[h][w-1] + x[h][w] - sum[h-1][w-1];
            }
        }
    }
    for(int i=0; i<Q; i++){
        long long ans = sum[C[i]-1][D[i]-1];
        if(A[i]!=1) ans -= sum[A[i]-2][D[i]-1];
        if(B[i]!=1) ans -= sum[C[i]-1][B[i]-2];
        if(A[i]!=1&&B[i]!=1) ans += sum[A[i]-2][B[i]-2];
        cout << ans << endl;
    }

    return 0;
}