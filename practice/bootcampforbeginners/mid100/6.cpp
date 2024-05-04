#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h+2), ans(h);
    for(int i=0; i<w+2; i++){
        s.at(0) += '.';
        s.at(h+1) += '.';
    }
    for(int i=1; i<h+1; i++){
        cin >> s.at(i);
        ans.at(i-1) = s.at(i);
        s.at(i) = '.' + s.at(i) + '.';
    }

    for(int i=1; i<h+1; i++){
        for(int j=1; j<w+1; j++){
            if(s.at(i)[j] == '.'){
                int cnt = 0;
                for(int y=-1; y<=1; y++){
                    for(int x=-1; x<=1; x++){
                        if(s.at(i + y)[j + x] == '#') cnt++;
                    }
                }
                char cntc = '0' + cnt;
                ans.at(i-1)[j-1] = cntc;
            }
        }
    }

    for(int i=0; i<h; i++){
        cout << ans.at(i) << endl;
    }

}