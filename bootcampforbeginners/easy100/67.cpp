#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s.at(i);
    }
    sort(s.begin(), s.end());
    vector<int> idx;
    int max = 0;
    int tmp = 0;
    for(int i=1; i<n; i++){
        if(s.at(i) == s.at(i-1)){
            tmp++;
        }
        if(s.at(i) != s.at(i-1)){
            if(max < tmp){
                max = tmp;
                idx.clear();
                idx.push_back(i-1);
            }else if(max == tmp){
                idx.push_back(i-1);
            }
            tmp = 0;
        }
    }
    if(max <= tmp){
        if(max < tmp) idx.clear();
        idx.push_back(n-1);
    }
    for(auto i: idx){
        cout << s.at(i) << endl;
    }
}