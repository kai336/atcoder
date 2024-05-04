#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1), b(n);
    for(int i=0; i<n+1; i++){
        cin >> a.at(i);
    }
    for(int i=0; i<n; i++){
        cin >> b.at(i);
    }
    long long sum = 0;
    for(int i=0; i<n; i++){
        long long l = min(a.at(i), b.at(i));
        sum += l;
        a.at(i) -= l;
        b.at(i) -= l;
        
        long long r = min(a.at(i+1), b.at(i));
        sum += r;
        a.at(i+1) -= r;
    }

    cout << sum << endl;
}