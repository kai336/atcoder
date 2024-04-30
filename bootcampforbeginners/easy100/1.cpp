#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int result, num;
    result = 1;
    num = 0;
    while(result < b){
        result += a - 1;
        num++;
    }
    cout << num << endl;
    return 0;
}