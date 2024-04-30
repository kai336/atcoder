#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int r = 1;
    int l = 0;
    int mid;
    vector<int> ans(s.size(), 0);
    for(int i=1; i<s.size(); i++){
        if(s[i]=='R') r++;
        else l++;
        if(s[i-1]=='R' && s[i]=='L') mid = i;
        if((s[i-1]=='L' && s[i]=='R') || i==s.size()-1){
            if(i!=s.size()-1) r--;
            if((r+l)%2==0){
                ans[mid-1] = (r+l)/2;
                ans[mid] = (r+l)/2;
            }else if(r%2==0){
                ans[mid-1] = (r+l)/2;
                ans[mid] = (r+l)/2+1;
            }else{
                ans[mid-1] = (r+l)/2+1;
                ans[mid] = (r+l)/2;
            }
            r = 1;
            l = 0;
        }
    }
    for(int i=0; i<s.size(); i++) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}