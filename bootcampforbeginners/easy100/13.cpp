#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c){
        if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0) cout << -1 << endl;
        else cout << 0 << endl;
    }else{
    
    int count = 0;
    int pa, pb, pc;
    while(true){
        if(a % 2 == 1 || b % 2 == 1 || c % 2 == 1) break;
        else count++;
        pa = a; pb = b; pc = c;
        a = (pb + pc) / 2;
        b = (pc + pa) / 2;
        c = (pa + pb) / 2;
        //cout << a << ' ' << b << ' ' << c << endl;
        
        pa = a; pb = b; pc = c;
    }
    cout << count << endl;

    }
    
}

//gorioshi igaito ikeru