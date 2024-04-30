#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int n;
    string str;
} Case;

void judge(int n, const char *str){
    bool flag = false;
    int ascii[n];
    for(int i = 0; i < n; i++){
        ascii[i] = int(str[i]);
        //cout << ascii[i] << ' ';
    }
    //out << endl;

    for(int i = 1; i < n; i++){
        if(ascii[0] < ascii[i]){
            flag = true;
            break;
        }
        for(int i = 1; i < n; i++){
            if(ascii[0] == ascii[i]){
                int s1[i], s2[n - i];
                for(int j = 0; j < i; j++){
                    s1[j] = ascii[j];
                    //cout << s1[j];
                }
                //cout << endl;
                for(int j = i; j < n; j++){
                    s2[j - i] = ascii[j];
                    //cout << s2[j - i];
                }
                //cout << endl;

                bool eqflag = true;
                int end = min(i - 1, n - i);

                for(int j = 1; j < end; j++){
                    if(s1[j] < s2[j]){
                        eqflag = false;
                        flag = true;
                        break;
                    }else if(s1[j] > s2[j]){
                        eqflag = false;
                        break;
                    }else continue;
                }
                
                if(eqflag){
                    if(i < n - i){
                        flag = true;
                        break;
                    }
                }

            }
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}

// void judge(int n, const char *str){
    
//     bool flag = false;
//     if(ascii[0] < ascii[1]) flag = true;
//     else {
//         for(int i = 1; i < n - 1; i++){
//             if(ascii[0] < ascii[i]){
//                 flag = true;
//                 break;
//             }
//         }
//         if(!flag){
//             for(int i = 1; i < n; i++){
//                 if(ascii[0] == ascii[i]){
//                     int s1[i], s2[n - i];
//                     for(int j = 0; j < i; j++){
//                         s1[j] = ascii[j];
//                         cout << s1[j];
//                     }
//                     cout << endl;
//                     for(int j = i; j < n; j++){
//                         s2[j - i] = ascii[j];
//                         cout << s2[j - i];
//                     }
//                     cout << endl;
//                     if(s1[0] < s2[0]){
//                         flag = true;
//                         break;
//                     }else if(s1[0] > s2[0]){
//                         break;
//                     }else {
//                         bool eqflag = true;
//                         int end = min(i - 1, n - i);
//                         for(int j = 1; j < end; j++){
//                             if(s1[j] < s2[j]){
//                                 eqflag = false;
//                                 flag = true;
//                                 break;
//                             }else if (s1[j] == s2[j]) continue;
//                             else {
//                                 eqflag = false;
//                                 break;
//                             }
                            
                            
//                         }
//                         if(eqflag){
//                            if(i < n - i){
//                                 flag = true;
//                                 break;
//                             } 
//                         }
                        
//                     }
//                 }
//             }
            
//         }
//     }
//     if(flag) cout << "Yes" << endl;
//     else cout << "No" << endl;
// }

int main(){
    int t;
    cin >> t;
    Case c[t];
    for(int i = 0; i < t; i++){
        cin >> c[i].n >> c[i].str;
    }

    for(int i = 0; i < t; i++){
        //cout << i << endl;
        judge(c[i].n, c[i].str.c_str());
    }
    
    
}