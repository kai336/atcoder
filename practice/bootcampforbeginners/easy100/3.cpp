#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    string str;
    cin >> n >> a >> b >> str;
    int sum = 0;
    int kaigaisum = 0;
    for(int i = 0; i < n; i++){
        //cout << sum << kaigaisum << endl;
        if(sum >= a + b){
            cout << "No" << endl;
        }else {
            switch(str[i]){
                case 'a':
                    cout << "Yes" << endl;
                    sum++;
                    break;
                case 'b':
                    if(kaigaisum < b){
                        cout << "Yes" << endl;
                        sum++;
                        kaigaisum++;
                    }else cout << "No" << endl;

                    break;
                case 'c':
                    cout << "No" << endl;
                    break;
                default:
                    break;
            }
        }
        
        
    }
}