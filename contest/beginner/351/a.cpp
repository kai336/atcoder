#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int a = 0;
    for(int i=0; i<9; i++){
        int tmp;
        cin >> tmp;
        a += tmp;
    }
    int b = 0;
    for(int i=0; i<8; i++){
        int tmp;
        cin >> tmp;
        b += tmp;
    }
    cout << a-b+1 << endl;
    return 0;
}