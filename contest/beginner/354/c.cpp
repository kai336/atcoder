#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<long long>> a(n, vector<long long>(3));
    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
        a[i][2] = i;
    }
    sort(a.rbegin(), a.rend());
    bool flag = false;
    while(!flag){
        flag = true;
        for(int i=1; i<a.size(); i++){
            if(a[i][1]>a[i-1][1]){
                a.erase(a.begin()+i);
                flag = false; 
                break;
            }
        }
    }
    int size = a.size();
    vector<int> ans(size);
    
    for(int i=0; i<size; i++){
        ans[i] = a[i][2];
    }
    sort(ans.begin(), ans.end());
    cout << size << endl;
    for(int i=0; i<size; i++){
        cout << ans[i] + 1 << ' ';
    }
    cout << endl;
    return 0;
}