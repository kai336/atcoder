#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int diff[n][2], sorted[n];
    for(int i = 0; i < n; i++){
        diff[i][0] = a[i] - b[i];
        diff[i][1] = 0;
        sorted[i] = diff[i][0];
    }
    sort(sorted, sorted + n, greater<int>());
    
    // for(int i = 0; i < n; i++){
    //     cout << sorted[i] << ' ';
    // }
    // cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(sorted[i] == diff[j][0]){
                if(diff[j][1] == 0){
                    cout << j + 1 << ' ';
                    diff[j][1]++;
                    break;
                }
                
            }
        }
    }
    cout << endl;
}