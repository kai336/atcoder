#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int get_i(unsigned long long, unsigned long long);

unsigned long long llpow(int);


int main(){
    unsigned long long l, r;
    cin >> l >> r;
    bool end = false;
    unsigned long long ll = l;
    vector<pair<unsigned long long, unsigned long long>> ans;
    int cnt = 0;
    while(true){
        cnt++;
        int i = get_i(ll, r);
        unsigned long long j;
        unsigned long long tmp;
        while(i>=0){
            j = ll / llpow(i);
            tmp = llpow(i) * (j+1);
            //cout << "'i: '" << i << "'j: '" << j << "'tmp: '" << tmp << endl;
            if(tmp > r || tmp == 0) i--;
            else break;
        }
        ans.push_back(make_pair(ll, tmp));
        //cout << ll << ' ' << tmp << endl;
        ll = tmp;
        if(ll == r) break;
    }
    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i].first << ' ' << ans[i].second << endl;
    }
    return 0;

}

unsigned long long llpow(int i){
    unsigned long long ans = 1;
    for(int ii=0; ii<i; ii++) ans *= 2;
    return ans;
}

int get_i(unsigned long long l, unsigned long long r){
    if(l == 0) return int(log2(r));
    int i = 0;
    while(true){
        if(l%2==0){
            l /= 2;
            i++;
        }else break;
    }
    return i;
}