#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }

    int pre = 0;
    vector<bool> seen(n, false);
    vector<int> circ;
    circ.push_back(0);
    int start;
    for(;;){
        seen.at(pre) = true;
        int next = a.at(pre) - 1;
        if(seen.at(next)){
            start = next;
            break;
        }
        circ.push_back(next);
        pre = next;
    }
    bool isstart = false;
    int m;
    for(int i=0; !isstart; i++){
        if(circ.at(i) == start) {
            m = i;
            isstart = true;
            }
    }
    cout << circ.size() - m << endl;
    
    for(int i=m; i<circ.size(); i++){
        cout << circ.at(i) + 1 << ' ';
    }
    cout << endl;
}