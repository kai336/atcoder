#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int min = 1000000;
    for(int i = x[0]; i < x[n - 1] + 1; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += int(pow(x[j] - i, 2));
        }
        if(min > sum) min = sum;
    }
    
    cout << min << endl;
    return 0;
}