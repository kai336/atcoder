#include <bits/stdc++.h>
using namespace std;

int score(int n, long long rate, long long *a){
    int score = 1000000000;
    for(int i = 0; i < n; i++){
        int tmpscore = abs(rate - a[i]);
        if(score > tmpscore) score = tmpscore;
    }
    return score;
}

int main(){
    int n, q;
    cin >> n;
    long long a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> q;

    long long b[q];
    for(int i = 0; i < q; i++){
        cin >> b[i];
    }



    for(int i = 0; i < q; i++){
        cout << score(n, b[i], a) << endl;
    }

    return 0;
}