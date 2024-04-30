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

    // N toubun suru
    for(int d=0; d<D; d++){
        int height = 1000 / N;
        //int sum = 0;
        //for(int k=0; k<N; k++) sum += a[d][k];
        for(int k=0; k<N; k++){
            double h = double(a[d][k]) / 1000.0;
            h = max(h, 1.0);
            int i1;
            if(k==0) i1 = 0;
            else i1 = rects[d][k-1][2];
            int j1 = 0;
            int i2 = i1 + h;
            int j2 = W;
            rects[d][k][0] = i1;
            rects[d][k][1] = j1;
            rects[d][k][2] = i2;
            rects[d][k][3] = j2;
        }
        bool flag = true;
        // sorezore no ryoiki takasa 1 huyasu
        for(int ks=N-1; ks>=1 && flag; ks--){
            for(int k=ks; k>=1 && flag; k--){
                int tmp = rects[d][k-1][2];
                if(tmp <= 1) flag = false;
                else {
                    rects[d][k][0]--;
                    rects[d][k-1][2]--;
                }
            }
        }
        
    }

    

    // output
    for(int d=0; d<D; d++){
        //cout << "d=" << d << endl;
        for(int k=0; k<N; k++){
            //cout << "k=" << k << ' ';
            for(int i=0; i<4; i++){
                cout << rects[d][k][i] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}