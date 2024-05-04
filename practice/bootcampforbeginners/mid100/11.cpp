#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<double> a(n), b(n), c(m), d(m);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0; i<m; i++){
        cin >> c[i] >> d[i];
    }
    int ans[n];
    for(int i=0; i<n; i++){
        double min = abs(a[i]-c[m-1]) + abs(b[i]-d[m-1]);
        ans[i] = m;
        for(int j=m-2; j>=0; j--){
            double tmp = abs(a[i]-c[j]) + abs(b[i]-d[j]);
            if(tmp <= min){
                min = tmp;
                ans[i] = j+1;
            }
        }
    }
    for(int i=0; i<n; i++) cout << ans[i] << endl;
    return 0;
}