#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }
    for(int i=0; i<m; i++){
        cin >> b.at(i);
    }
    bool found = false;
    sort(a.begin(), a.end(), greater<long long>());
    sort(b.begin(), b.end(), greater<long long>());
    for(int i=0; i<n; i++){
        int tmp, idx;
        idx = 0;
        
        for(int j=m-1; j>=0; j--){
            if(a.at(i) <= b.at(j)){
                idx = j;
                break;
            }
        }
        if(!found) idx = -1;
        if(n-i >= idx+1){
            found = true;
        }else{
            cout << a.at(i-1) << endl;
            return 0;
        }
    }
    if(a.at(n-1) > b.at(0)) cout << b.at(0) + 1 << endl;
    else cout << a.at(n-1) << endl;

}