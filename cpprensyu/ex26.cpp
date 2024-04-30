#include <bits/stdc++.h>
using namespace std;




void print_int(int x){
    cout << x << endl;
}

void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}


int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string type;
        cin >> type;
        switch(type){
            case "int":
                
                break;
            case "print_int":
                break;
            case "vec":
                break;
            case "print_vec":
                break;
            default:
                break;
        }
    }
}