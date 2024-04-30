#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> p(m);
    vector<string> s(m);

    for(int i=0; i<m; i++){
        cin >> p.at(i) >> s.at(i);
    }

    int ans = 0;
    int pen = 0;
    vector<pair<bool, int>> ac(n, pair<bool, int>(false, 0));
    for(int i=0; i<m; i++){
        if(s.at(i) == "WA" && !ac.at(p.at(i)-1).first){
            ac.at(p.at(i)-1).second++;
        }else if(s.at(i) == "AC") {
            ac.at(p.at(i)-1).first = true;
        }
    }
    for(int i=0; i<n; i++){
        if(ac.at(i).first){
            ans++;
            pen += ac.at(i).second;
        }
    }
    cout << ans << ' ' << pen << endl;
}