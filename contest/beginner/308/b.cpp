#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> c(n), d(m);
    int p[m];
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    for(int i = 0; i < m; i++){
        cin >> d[i];
    }
    for(int i = 0; i < m + 1; i++){
        cin >> p[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < m; j++){
            if(c[i] == d[j]){
                sum += p[j + 1];
                flag = true;
                break;
            }
        }
        if(!flag) sum += p[0];
    }
    cout << sum << endl;
}