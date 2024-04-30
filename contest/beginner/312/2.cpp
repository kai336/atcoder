#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s.at(i);
    }
    
    for(int i=0; i<n-8; i++){
        for(int j=0; j<m-8; j++){
            bool isok = true;
            for(int k=0; k<3; k++){
                if(s.at(i+k).substr(j, 4) != "###.") {
                    isok = false;
                    break;
                    }
                if(s.at(i+k+6).substr(j+5, 4) != ".###") {
                    isok = false;
                    break;
                }
            }
            if(isok && s.at(i+3).substr(j, 4) == "...." && s.at(i+5).substr(j+5, 4) == "...."){
                cout << i+1 << ' ' << j+1 << endl;
            }
        }
    }
}