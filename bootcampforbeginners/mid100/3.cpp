#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    long long len = str.length();
    long long ans = 0;

    for(long long i = 0; i < len; i++){
        //a[i+1]
        long long l, r;
        l = 0; r = 0;
        for(int j = i; j > -1; j--){
            if(str[j] == '<'){
                l++;
            }else break;
        }
        for(long long j = i + 1; j < len; j++){
            if(str[j] == '>'){
                r++;
            }else break;
        }
        ans += max(l, r);
    }

    cout << ans << endl;
}