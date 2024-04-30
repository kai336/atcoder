#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    string ab = a + b;
    int x = stoi(ab);
    int root = sqrt(x);
    if(root * root == x) cout << "Yes" << endl;
    else cout << "No" << endl;
}