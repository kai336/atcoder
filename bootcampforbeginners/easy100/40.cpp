#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    if(a < 0 && b > 0){
        cout << "Zero" << endl;
    }else if(a < 0 && b < 0){
        if((b - a + 1) % 2 == 0){
            cout << "Positive" << endl;
        }else {
            cout << "Negative" << endl;
        }
    }else cout << "Positive" << endl;
    
}