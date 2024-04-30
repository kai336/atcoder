#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin >> p.at(i);
    }
    int min = 200010;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(min > p.at(i)){
            min = p.at(i);
            ans++;
        }
    }
    
    cout << ans << endl;
    
}