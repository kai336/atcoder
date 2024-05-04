#include <bits/stdc++.h>
using namespace std;

int f(int n){
    bool iseven = n % 2 == 0;
    if(iseven) return n / 2;
    else return 3 * n + 1;
}

int main(){
    int s;
    cin >> s;
    vector<int> num(1000000);
    int a = f(s);
    num.at(s-1)++;
    num.at(a-1)++;
    int idx = 1;
    while(true){
        idx++;
        a = f(a);
        num.at(a-1)++;
        if(num.at(a-1) == 2){
           cout << idx+1 << endl;
           break; 
        }
    }
}