#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i=0; i<n; i++) cin >> x[i] >> y[i];
    vector<int> ord(n);
    for(int i=0; i<n; i++) ord.at(i)=i;
    long double sum = 0;
    do{
        for(int i=0; i<n-1; i++){
            sum += sqrt((pow(x[ord.at(i)]-x[ord.at(i+1)], 2) + pow(y[ord.at(i)]-y[ord.at(i+1)], 2)));
        }
    }while(next_permutation(ord.begin(), ord.end()));
    long double ans = sum;
    for(int i=0; i<n; i++) ans /= (i+1);
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}