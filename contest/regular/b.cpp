#include <bits/stdc++.h>
using namespace std;

bool check(int *a, int n, int m){
    int count = 0;
    bool flag = false;
    for(int i = 2; i < n; i++){
        if(a[0] <= a[i] && a[i] <= a[1]) count++;
        if(count == m){
            flag = true;
            break;
        }
    }
    return flag;
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int opecount = 0;
    
    while(!check(a, n, m)){

    }
}