#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long, long long>> color;
    long long a[n], c[n];
    for(int i=0; i<n; i++){
        long long a, c;
        cin >> a >> c;
        color.push_back(make_pair(c, a));
    }
    sort(color.begin(), color.end());

    int ans = 0;
    int min = color[0].second;
    for(int i=1; i<n; i++){
        if(color[i-1].first != color[i].first){
            if(min > ans) ans = min;
            min = color[i].second;
        }else if(min>color[i].second) min = color[i].second;
    }
    if(min > ans) ans = min;
    cout << ans << endl;


    // vector<long long> color(1000000000, 1000010000);
    // for(int i=0; i<n; i++){
    //     if(color[c[i]-1]>a[i]){
    //         color[c[i]-1] = a[i];
    //     }
    // }

    // sort(color.begin(), color.end());
    // cout << color[0] << endl;
    return 0;
}