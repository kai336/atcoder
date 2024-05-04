#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  int ans = 0;
  for(int  i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(k-i-j<=n && k-i-j>0) ans++;
    }
  }
  cout << ans << endl;
}