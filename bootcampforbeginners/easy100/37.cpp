#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, q;
    cin >> n >> k >> q;
    vector<int> score(n);
    for(int i=0; i<q; i++){
        int a;
        cin >> a;
        score.at(a-1)++;
    }
    for(int i=0; i<n; i++){
        if(score.at(i) < q - k + 1){
            cout << "No" << endl;
        }else cout << "Yes" << endl;
    }

}