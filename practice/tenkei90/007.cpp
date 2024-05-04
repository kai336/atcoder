#include <bits/stdc++.h>
using namespace std;

int score(int n, long long b, long long *a){
    //binary search
    long long left, center, right, score;
    left = 0;
    right = n - 1;
    center = n / 2;
    while(left != center){
        //cout << "b " << b << " l " << a[left] << " " << a[center] << " " << a[right] << " r" << endl;
        if(b < a[center]){
            right = center;
            center = (left + center) / 2;
        }else {
            left = center;
            center = (center + right) / 2;
        }
    }
    if(left == center){
        if(left == 0) score = abs(a[right] - b);
        else if(right == n - 1) score = abs(a[left] - b);
        else score = min(abs(a[left] - b), abs(a[right] - b));
    }
    

    return score;
}

int main(){
    int n, q;
    cin >> n;
    long long a[n + 2];

    for(int i = 0; i < n; i++){
        cin >> a[i + 1];
    }
    a[0] = 0;
    a[n + 1] = 1000000000;

    cin >> q;

    long long b[q];
    for(int i = 0; i < q; i++){
        cin >> b[i];
    }

    sort(a, a + n + 2);

    for(int i = 0; i < q; i++){
        cout << score(n + 2, b[i], a) << endl;
    }

    return 0;
}