#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++) cin >> a[i];
    long long cnt = 0;
    vector<pair<int, int>> ans;
    for(int i=0; i<n; i++){
        while(i+1!=a[i]){
            if(i+1<a[i]) ans.push_back(make_pair(i+1, a[i]));
            else ans.push_back(make_pair(a[i], i+1));
            int tmp = a[i];
            a[i] = a[tmp-1];
            a[tmp-1] = tmp;
            cnt++;
        }
        //for(int i=0; i<n; i++) cout << a[i] << ' ';
        //cout << endl;
    }
    cout << cnt << endl;
    for(int i=0; i<ans.size(); i++) cout << ans[i].first << ' ' << ans[i].second << endl;
    return 0;
}