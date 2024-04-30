#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans;
    for(int i=0; pow(2,i)<=n; i++){
        ans = i;
    }
    cout << pow(2, ans) << endl;
}