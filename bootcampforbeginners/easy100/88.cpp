#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++) cin >> s.at(i);
    cin >> m;
    vector<string> t(m);
    for(int i=0; i<m; i++) cin >> t.at(i);

    int ans = 0;
    for(int i=0; i<n; i++){
        
        if(s.at(i)!="0"){
            int tmpans = 1;
            string tmp = s.at(i);
            s.at(i) = "0";
            for(int j=i+1; j<n; j++){
                if(tmp == s.at(j)){
                    tmpans++;
                    s.at(j) = "0";
                }
            }
            for(int j=0; j<m; j++){
                if(tmp == t.at(j)){
                    tmpans--;
                    t.at(j) = "0";
                }
            }
            if(tmpans > ans) ans = tmpans;
        }
    }

    cout << ans << endl;

}