#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int height(int rect[][4], int x, int N, int n){
    int max = 0;
    for(int k=n; k<N; k++){
        int j1 = rect[k][1];
        int j2 = rect[k][3];
        if(j1 <= x && x <= j2){
            if(max < rect[k][2]){
                max = rect[k][2];
            }
        }
    }
    return max;
}

int main(){
    int W, D, N;
    cin >> W >> D >> N;
    int a[W][W];
    for(int d=0; d<D; d++){
        for(int k=0; k<N; k++){
            cin >> a[d][k];
        }
    }
    int rects[D][N][4];

    // square de umeru
    for(int d=0; d<D; d++){
        //day d
        //req N
        int i1, j1, i2, j2;
        i1 = 0;
        j1 = 0;
        int hen = sqrt(a[d][N-1]);
        i2 = hen;
        j2 = hen;
        
        rects[d][N-1][0] = i1;
        rects[d][N-1][1] = j1;
        rects[d][N-1][2] = i2;
        rects[d][N-1][3] = j2;
        bool flag = false;
        for(int k=N-2; k>=0; k--){
            //req N-1 -> 1
            int side = int(sqrt(a[d][k]));
            cout << side << endl;
            int i1, j1, i2, j2;
            j1 = rects[d][k+1][3];
            if(side>1000-j1){
                cout << d << ' ' << k << endl;
                // hidari ni yoseru
                j1 = 0;
                flag = true;
            }
            if(flag) i1 = height(rects[d], j1, N, k);
            else i1 = 0;
            j2 = j1 + side;
            i2 = i1 + min(side, 1000-i1);
            rects[d][k][0] = i1;
            rects[d][k][1] = j1;
            rects[d][k][2] = i2;
            rects[d][k][3] = j2;
        }
    }

    // output
    for(int d=0; d<D; d++){
        cout << "d=" << d << endl;
        for(int k=0; k<N; k++){
            cout << "k=" << k << ' ';
            for(int i=0; i<4; i++){
                cout << rects[d][k][i] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}