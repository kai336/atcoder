#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    long long ed[3];
    long long max = 0;
    int idx;
    for(int i=0; i<3; i++){
        cin >> ed[i];
        if(ed[i] > max){
            max = ed[i];
            idx = i;
        }
    }
    if(max % 2 == 0){
        cout << 0 << endl;
    }else{
        long long ans = 1;
        for(int i=0; i<3; i++){
            if(i!=idx) ans *= ed[i];
        }
        cout << ans << endl;
    }
    return 0;
}