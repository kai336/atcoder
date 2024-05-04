#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000000000000000

int main(){
    int n;
    long long hp;
    cin >> n >> hp;
    int ans = 0;
    int tmp = 0;
    for(int i=1; i<n; i++){
        long long h;
        cin >> h;
        if(hp >= h){
            tmp++;
            ans = max(ans, tmp);
        }
        else tmp = 0;
        hp = h;
    }
    cout << ans << endl;
}