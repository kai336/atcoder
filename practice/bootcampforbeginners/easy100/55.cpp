 #include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d));
    for(int i=0; i<n; i++){
        for(int j=0; j<d; j++){
            cin >> x.at(i).at(j);
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum = 0;
            for(int k=0; k<d; k++){
                sum += pow(x.at(i).at(k) - x.at(j).at(k), 2);
            }
            if(pow(int(sqrt(sum)), 2) == sum) ans++;
        }
    }
    cout << ans << endl;
}