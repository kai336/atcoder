#include <bits/stdc++.h>
using namespace std;

int flac(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans *= n;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> first(n);
    for(int i=0; i<n; i++){
        first.at(i) = i+1;
    }
    vector<int> p(n), q(n);
    for(int i=0; i<n; i++){
        cin >> p.at(i);
    }
    for(int i=0; i<n; i++){
        cin >> q.at(i);
    }
    int a, b;
    a = -1; b = -1;
    for(int i=0; i<flac(n); i++){
        if(first == p){
            a = i;
        }
        if(first == q){
            b = i;
        }
        if(a != -1 && b != -1) break;
        next_permutation(first.begin(), first.end());
    }
    cout << abs(a - b) << endl;
}

// next_permutation zurui
// vector type nara hikaku dekiru