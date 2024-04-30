#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int H, W, N;
    cin >> H >> W >> N;
    int A[N], B[N], C[N], D[N];
    for(int i=0; i<N; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    vector<vector<int>> X(H+2, vector<int>(W+2, 0));
    vector<vector<int>> Z(H+2, vector<int>(W+2, 0));
    for(int i=0; i<N; i++){
        X[A[i]][B[i]]++;
        X[A[i]][D[i]+1]--;
        X[C[i]+1][B[i]]--;
        X[C[i]+1][D[i]+1]++;
    }
    for(int w=1; w<=W; w++){
        for(int h=1; h<=H; h++) Z[h][w] += X[h][w] + Z[h][w-1];
    }
    for(int h=1; h<=H; h++){
        for(int w=1; w<=W; w++) Z[h][w] += Z[h-1][w];
    }
    for(int h=1; h<=H; h++){
        for(int w=1; w<=W; w++) cout << Z[h][w] << ' ';
        cout << endl;
    }
    return 0;
}