#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int abc[3];
    for(int i=0;i<3;i++) cin >> abc[i];
    if(abc[0]!=abc[1] || abc[1]!=abc[2] || abc[2]!=abc[0]){
        int odd = 0;
        int even = 0;
        bool isodd[3];
        for(int i=0; i<3; i++){
            if(abc[i] % 2 != 0){
                isodd[i] = true;
                odd++;
            }else {
                isodd[i] = false;
                even++;
            }
        }
        if(odd!=3 && even!=3){
            if(odd > even){
                for(int i=0; i<3; i++){
                    if(isodd[i]==false) abc[i]--;
                }
            }else{
                for(int i=0; i<3; i++){
                    if(isodd[i]==true) abc[i]--;
                }
            }
        }
        int max=0;
        int idx;
        for(int i=0; i<3; i++){
            if(abc[i] > max){
                max = abc[i];
                idx = i;
            }
        }
        int diff = 0;
        for(int i=0; i<3; i++){
            if(i!=idx) diff += max - abc[i];
        }
        cout << diff / 2 + 1<< endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}