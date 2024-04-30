#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(200000);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
        cnt.at(a.at(i) - 1)++;
    }
    vector<int> max(2);
    int idx = 0;
    for(int i=199999; i>=0, idx<2; i--){
        while(cnt.at(i) > 0 && idx<2){
            max.at(idx) = i + 1;
            idx++;
            cnt.at(i)--;
        }
    }

    for(int i=0; i<n; i++){
        if(a.at(i) == max.at(0)) cout << max.at(1) << endl;
        else cout << max.at(0) << endl;
    }
    
}