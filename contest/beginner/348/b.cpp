#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    
    for(int i=0; i<n; i++){
        double max = 0;
        int idx = 0;
        for(int j=0; j<n; j++){
            double tmp = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            if(tmp > max){
                max = tmp;
                idx = j;
            }
            
        }
        cout << idx+1 << endl;
    }
    return 0;
}