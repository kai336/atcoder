#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> h(n);
    for(int i=0; i<n; i++){
        cin >> h.at(i);
    }

    for(int i=n-1; i>0; i--){
        if(h.at(i) == h.at(i-1) - 1){
            h.at(i-1)--;
        }else if(h.at(i) < h.at(i-1) - 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}