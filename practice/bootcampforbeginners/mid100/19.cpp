#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int r, g, b, n;
    cin >> r >> g >> b >> n;
    int rmax = n / r + 1;
    int gmax = n / g + 1;
    int bmax = n / b + 1;
    int cnt = 0;
    for(int rr=0; rr<rmax; rr++){
        if(r*rr>n) break;
        for(int gg=0; gg<gmax; gg++){
            int rg = r*rr+g*gg;
            if(rg>n) break;
            if((n-rg)%b==0){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
} 