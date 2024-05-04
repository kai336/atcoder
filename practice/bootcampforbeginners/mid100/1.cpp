#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int index = 1;
    int count = 0;
    while(count < n){
        count++;
        index = a[index - 1];
        if(index == 2){
            cout << count << endl;
            return 0;
        }
    }
    cout << -1 << endl;

}