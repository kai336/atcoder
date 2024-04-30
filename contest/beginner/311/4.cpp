#include <bits/stdc++.h>
using namespace std;

pair<int, int> up(vector<string> &s, int x, int y, vector<vector<bool>> &seen){
    for(int i = y; ; i--){
        if(s.at(i).at(x) == '#'){
            return make_pair(x, i+1);
        }
        seen.at(i).at(x) == true;
    }
}

pair<int, int> down(vector<string> &s, int x, int y, vector<vector<bool>> &seen){
    for(int i = y; ; i++){
        if(s.at(i).at(x) == '#'){
            return make_pair(x, i-1);
        }
        seen.at(i).at(x) == true;
    }
}

pair<int, int> left(vector<string> &s, int x, int y, vector<vector<bool>> &seen){
    for(int i = x; ; i--){
        if(s.at(y).at(i) == '#'){
            return make_pair(i+1, y);
        }
        seen.at(y).at(i) == true;
    }
}

pair<int, int> right(vector<string> &s, int x, int y, vector<vector<bool>> &seen){
    for(int i = x; ; i++){
        if(s.at(y).at(i) == '#'){
            return make_pair(i-1, y);
        }
        seen.at(y).at(i) == true;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s.at(i);
    }
    vector<vector<bool>> seen(n, vector<bool>(m, false));
    pair<int, int> place;
    place.first = 1;
    place.second = 1;
    
    for(;;){
        cout << place.first << ' ' << place.second << endl;
        if(s.at(place.second - 1).at(place.first) == '.' && !seen.at(place.second - 1).at(place.first)){
            place = up(s, place.first, place.second, seen);
        }else if(s.at(place.second + 1).at(place.first) == '.' && !seen.at(place.second + 1).at(place.first)){
            place = down(s, place.first, place.second, seen);
        }else if(s.at(place.second).at(place.first - 1) == '.' && !seen.at(place.second).at(place.first - 1)){
            place = left(s, place.first, place.second, seen);
        }else if(s.at(place.second).at(place.first + 1) == '.' && !seen.at(place.second).at(place.first + 1)){
            place = right(s, place.first, place.second, seen);
        }else break;
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(seen.at(i).at(j)) ans++;
        }
    }

    cout << ans << endl;
}