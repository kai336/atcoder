#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    long long C[N];
    for(int i=0; i<N; i++) cin >> C[i];
    long long ans = 100000000000000000000000000000;
    for(int mid=1; mid<N; mid++){
        long long tmp = 0;
        //00
        for(int i=0; i<mid; i++){
            if(mid%2==i%2){
                if(S[i]=='0') tmp += C[i];
            }else if(S[i]=='1') tmp += C[i];
        }
        for(int i=mid; i<N; i++){
            if(mid%2==i%2){
                if(S[i]=='1') tmp += C[i];
            }else if(S[i]=='0') tmp += C[i];
        }
        if(tmp < ans) ans = tmp;

        //11
        for(int i=0; i<mid; i++){
            if(mid%2==i%2){
                if(S[i]=='1') tmp += C[i];
            }else if(S[i]=='0') tmp += C[i];
        }
        for(int i=mid; i<N; i++){
            if(mid%2==i%2){
                if(S[i]=='0') tmp += C[i];
            }else if(S[i]=='1') tmp += C[i];
        }
        if(tmp < ans) ans = tmp;
    }
    cout << ans << endl;
    return 0;
}