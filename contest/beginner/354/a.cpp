#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    long long h;
    cin >> h;
    long long sum = 0;
    int i = 0;
    while(true){
        sum += pow(2, i);
        if(sum>h){
            cout << i+1 << endl;
            return 0;
        }
        i++;
    }
}