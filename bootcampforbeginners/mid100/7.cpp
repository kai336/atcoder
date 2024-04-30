#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    
    int ans = 0;
    for(int mid=1; mid<n; mid++){
        int tmp = 0;
        vector<int> cntl(50, 0), cntr(50, 0);
        for(int i=0; i<mid; i++){
            cntl.at(int(s[i])-97) = 1;
        }
        for(int i=mid; i<n; i++){
            cntr.at(int(s[i])-97) = 1;
        }
        for(int i=0; i<50; i++){
            cntl.at(i) *= cntr.at(i);
            tmp += cntl.at(i);
        }
        if(tmp > ans) ans = tmp;
    }
    cout << ans << endl;
}