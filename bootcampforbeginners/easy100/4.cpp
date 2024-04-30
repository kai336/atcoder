#include <bits/stdc++.h>
using namespace std;

#define TAX 1.08

int main(){
    int n;
    cin >> n;
    double x = n / TAX;
    int n1 = int(int(x) * TAX);
    int n2 = int(int(x + 1) * TAX);
    if(n1 == n) cout << int(x) << endl;
    else if(n2 == n) cout << int(x + 1) << endl;
    else cout << ":(" << endl;
}