#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10, b = 5;
    int answer = min(a, b);
    cout << answer << endl;
    vector<int> vec(10);
    for(int i = 0; i < 10; i++){
        cin >> vec.at(i);
    }
    swap(vec.at(0), vec.at(9));
    for(int i = 0; i < 10; i++){
        cout << vec.at(i);
    }
    cout << endl;

    int mini = 1000;
    for(int i = 0; i < 10; i++){
        mini = min(mini, vec.at(i));
    }

    cout << "min " << mini << endl;
}