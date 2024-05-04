 #include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    int k;
    cin >> a >> b >> k;
    if(k * 2 >= b - a + 1){
        for(int i=0; i<b-a+1; i++){
            cout << a + i << endl;
        }
    }else{
       for(int i=0; i<k; i++){
            cout << a + i << endl;
        }
        for(int i=k-1; i>=0; i--){
            cout << b - i << endl;
        } 
    }
    
}