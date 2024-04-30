#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string ans;
    if(a.size() > b.size()){
        ans = "GREATER";
    }else if(a.size() < b.size()){
        ans = "LESS";
    }else{
        if(a > b){
            ans = "GREATER";
        }else if(a == b){
            ans = "EQUAL";
        }else ans = "LESS";
    }

    cout << ans << endl;
}