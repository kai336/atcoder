#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  for(int i=9; i>=0; i--){
    cout << int(n/(1<<i))%2;
  }
  cout << endl;
}