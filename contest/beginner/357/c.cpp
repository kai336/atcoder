#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int size = pow(3, n);
    vector<string> ans(size, string(size, '#'));
    for(int k=1; k<=n; k++){
        for(int i=0; i<pow(3, k); i++){
            for(int j=0; j<pow(3, k); j++){
                if(i>=pow(3, k-1)&&i<2*pow(3, k-1)&&j>=pow(3, k-1)&&j<2*pow(3, k-1)) ans[i][j] = '.';
                else ans[i][j] = ans[i%int(pow(3, k-1))][j%int(pow(3, k-1))];
            }
        }

    }
    for(int i=0; i<size; i++) cout << ans[i] << endl;
    return 0;
}