#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> times(5);
    int idx;
    int min = 124;
    for(int i=0; i<5; i++){
        cin >> times.at(i);
        if(min > times.at(i) % 10 && times.at(i) % 10 != 0){
            min = times.at(i) % 10;
            idx = i;
        }
    }
    int ans = 0;
    for(int i=0; i<5; i++){
        if(i != idx){
            ans += times.at(i) - times.at(i) % 10;
            if(times.at(i) % 10 != 0) ans += 10;
        }else ans += times.at(i);
    }

    cout << ans << endl;


}