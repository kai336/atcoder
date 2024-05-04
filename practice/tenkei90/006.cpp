#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string text;
    cin >> text;

    vector<int> ascii(n);
    for(int i = 0; i < n; i++){
        ascii.at(i) = int(text.at(i));
        //cout << ascii.at(i) << " ";
    }
    //cout << endl;

    // find min
    vector<vector<int>> miniascii(k + 1, vector<int>(2));
    miniascii[0][1] = -1;
    for(int i = 0; i < k; i++){
        miniascii[i + 1][0] = 123;
        for(int j = miniascii[i][1] + 1; j < n - k + i + 1; j++){
            if(ascii[j] < miniascii[i + 1][0]){
                miniascii[i + 1][0] = ascii[j];
                miniascii[i + 1][1] = j;
                //cout << char(miniascii[i + 1][0]) << " " << miniascii[i + 1][1] << endl;
            } 
        }
    }

    for(int i = 1; i < k + 1; i++){
        cout << char(miniascii[i][0]);
    }
    cout << endl;

}