#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int big = 0;
    int small = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a') small++;
        else big++;
    }
    if(small < big){
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a') s[i] -= 32;
        }
    }else{
        for(int i=0; i<s.size(); i++){
            if(s[i]<='Z') s[i] += 32;
        }
    }

    cout << s << endl;

    return 0;
}