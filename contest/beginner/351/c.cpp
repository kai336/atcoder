#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    vector<long long> ans;
    for(int i=0; i<n; i++){
        ans.push_back(a[i]);
        while(true){
            if(ans.size()<=1) break;
            if(ans[ans.size()-1]!=ans[ans.size()-2]) break;
            if(ans[ans.size()-1]==ans[ans.size()-2]){
                long long tmp = ans[ans.size()-1] + 1;
                ans.pop_back();
                ans.pop_back();
                ans.push_back(tmp);
            }
        }
    }
    cout << ans.size() << endl;
    return 0;
}