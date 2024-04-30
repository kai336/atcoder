#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> cnt(30, 0);
    vector<int> cnt2(s.size()+1, 0);
    for(int i=0; i<s.size(); i++){
        cnt[int(s[i])-97]++;
    }
    for(int i=0; i<cnt.size(); i++){
        cnt2[cnt[i]]++;
    }
    for(int i=1; i<cnt2.size(); i++){
        if(!(cnt2[i]==0||cnt2[i]==2)){
            cout << "No" << endl;
            return 0;
        }
    }
    cout  << "Yes" << endl;
    return 0;
}