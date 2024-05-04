#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int n = 2;
    int imod = a % b;
    while(true){
        int mod = a * n % b;
        if(mod == imod){
            cout << "NO" << endl;
            return 0;
        }else if(mod == c){
            cout << "YES" << endl;
            return 0;
        }
        n++;
        
    }
}