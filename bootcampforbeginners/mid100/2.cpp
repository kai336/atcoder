#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.length();
    long long before = 0;
    long long after = 0;
    long long bcount = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == 'B'){
            before += i;
            bcount++;
        }
    }
    for(int i = 0; i < bcount; i++){
        after += n - i - 1;
    }
    cout << after - before << endl;

}

//long long saikyo