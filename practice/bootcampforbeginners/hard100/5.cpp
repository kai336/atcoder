#include <bits/stdc++.h>
#include <math.h>

using namespace std;
#define ull unsigned long long

int main(){
    // ソートして最大の商品に割引適用、をｍ回繰り返す
    // priority_queue
    int n, m;
    cin >> n >> m;
    priority_queue<long long> a;
    for(int i=0; i<n; i++){
        long long tmp;
        cin >> tmp;
        a.push(tmp);
    }  
    for(int i=0; i<m; i++){
        int tmp = a.top(); a.pop();
        a.push(tmp/2);
    }
    long long ans = 0;
    for(int i=0; i<n; i++){
        ans += a.top();
        a.pop();
    }
    cout << ans << endl;
}