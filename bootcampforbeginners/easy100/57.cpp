#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int min = (int)((a-1)/0.08);
    int max = (int)((a+1)/0.08);

    for(int i=min; i<=max; i++){
        if((int)(i*0.08) == a && (int)(i*0.1) == b){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}