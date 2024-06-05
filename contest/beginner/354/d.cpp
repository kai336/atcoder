#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    int modx = (c-a)%4;
    int mody = (d-b)%2;
    long long sum = (c-a-modx)*(d-b-mody);
    if(a%4==0){
        if(modx==1) sum += 3*(d-b-mody)/2;
        else if(modx==2) sum += 3*(d-b-mody);
        else if(modx==3) sum += 7*(d-b-mody)/2;
    }else if(a%4==1){
        if(modx==1) sum += 3*(d-b-mody)/2;
        else if(modx==2) sum += 2*(d-b-mody);
        else if(modx==3) sum += 5*(d-b-mody)/2;
    }else if(a%4==2){
        if(modx==1) sum += (d-b-mody)/2;
        else if(modx==2) sum += (d-b-mody);
        else if(modx==3) sum += 5*(d-b-mody)/2;
    }else if(a%4==3){
        if(modx==1) sum += (d-b-mody)/2;
        else if(modx==2) sum += 2*(d-b-mody);
        else if(modx==3) sum += 7*(d-b-mody)/2;
    }
    sum += 4*(c-a-modx);
    if(modx==1){
        if(a%4==0) sum+=1;
        else if(a%4==1) sum+=2;
        else if(a%4==2) sum+=1;
    }else if(modx==2){
        if(a%4==0) sum+=3;
        else if(a%4==1) sum+=3;
        else if(a%4==2) sum+=1;
    }else if(modx==3){
        if(a%4==0) sum+=4;
        else if(a%4==1) sum+=3;
        else if(a%4==2) sum+=2;
    }
    cout << sum << endl;
}