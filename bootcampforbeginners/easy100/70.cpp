#include <bits/stdc++.h>
using namespace std;

int MAX = 1000000;

int main(){
    int x;
    cin >> x;
    int d100 = x / 100;
    int d5 = x % 100;
    if(d100 * 5 < d5) cout << 0 << endl;
    else cout << 1 << endl;
    
}