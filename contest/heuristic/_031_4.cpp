#include <bits/stdc++.h>
#include <math.h>
using namespace std;

struct Rect{
    int i1;
    int j1;
    int i2;
    int j2;
    int w = j2 - j1;
    int h = i2 - i1;
    int s = w * h;
};

int height(int rect[][4], int x, int N, int n){
    int MAX = 0;
    for(int k=n; k<N; k++){
        int j1 = rect[k][1];
        int j2 = rect[k][3];
        if(j1 <= x && x <= j2){
            if(MAX < rect[k][2]){
                MAX = rect[k][2];
            }
        }
    }
    return MAX;
}

int separate(int A){
    int a, b;
    int min = 10000000;
    int ans;
    for(a=sqrt(A); a<=1000; a++){
        b = A / a + 1;
        int tmp = a * b - A;
        if(tmp < min && tmp >= 0){
            min = tmp;
            ans = a;
        }
    }
    return ans;
}

void divemp(vector<Rect>& emp, int i2, int j2, int i){
    int i1 = emp[i].i1;
    int j1 = emp[i].j1;
    Rect r1 = {i1, j2, i2, emp[i].j2};
    Rect r2 = {i2, j1, emp[i].i2, emp[i].j2};
    emp.erase(emp.begin()+i);
    if(r2.h > 0){
        emp.insert(emp.begin()+i, r2);
    }
    if(r1.w > 0){
        emp.insert(emp.begin()+i, r1);
    }

}

int main(){
    int W, D, N;
    cin >> W >> D >> N;
    int a[W][W];
    for(int d=0; d<D; d++){
        for(int k=0; k<N; k++){
            cin >> a[d][k];
        }
    }
    int rects[D][N][4];
    
    

    //Bottom-Left
    int d = 0;
    //cout << "d=" << d << endl;/////////////////
    vector<Rect> emp{{0, 0, 999, 1000}}; // rectangle which is empty
    bool notfin = true;
    for(int k=N-1; k>=0 && notfin; k--){
        //cout << "\tk=" << k << endl;////////////////
        int i1, j1, i2, j2, w, h;
        w = separate(a[d][k]); // width
        h = a[d][k] / w + 1; // height
        int MAX = 0;
        int imax;
        // search fitting rectangle
        //cout << "\temp.size=" << emp.size() << endl;///////////////
        bool found = false;
        for(int i=0; i<emp.size(); i++){
            if(MAX < emp[i].s){
                MAX = emp[i].s;
                imax = i;
            }
            if(emp[i].h >= h && emp[i].w >= w){
                // if emp[i] has enough space
                // put the rectangle
                i1 = emp[i].i1;
                j1 = emp[i].j1;
                i2 = i1 + h;
                j2 = j1 + w;
                rects[d][k][0] = i1;
                rects[d][k][1] = j1;
                rects[d][k][2] = i2;
                rects[d][k][3] = j2;
                // erase and devide rectangle
                divemp(emp, i2, j2, i);
                found = true;
                break;
            }
        }
        // if there is no fitting rectangle
        if(!found){
            if(emp.size() > 0){
                // when there are two more empty rectangle
                if(a[d][k] >= emp[imax].s){
                    // when empty area is not enough, then we use biggest rectangle
                    rects[d][k][0] = emp[imax].i1;
                    rects[d][k][1] = emp[imax].j1;
                    rects[d][k][2] = emp[imax].i2;
                    rects[d][k][3] = emp[imax].j2;
                    emp.erase(emp.begin()+imax);
                }else{
                    // when empty area is enough, then resize
                    if(emp[imax].h >= emp[imax].w){
                        for(int h=1; h<=emp[imax].h; h++){
                            int s = h * emp[imax].w;
                            if(s >= a[d][k]){
                                rects[d][k][0] = emp[imax].i1;
                                rects[d][k][1] = emp[imax].j1;
                                rects[d][k][2] = emp[imax].i1 + h;
                                rects[d][k][3] = emp[imax].j2;
                                divemp(emp, emp[imax].i1 + h, emp[imax].j2, imax);
                            }
                        }
                    }else{
                        for(int w=1; w<=emp[imax].w; w++){
                            int s = w * emp[imax].h;
                            if(s >= a[d][k]){
                                rects[d][k][0] = emp[imax].i1;
                                rects[d][k][1] = emp[imax].j1;
                                rects[d][k][2] = emp[imax].i2;
                                rects[d][k][3] = emp[imax].j1 + w;
                                divemp(emp, emp[imax].i2, emp[imax].j1 + w, imax);
                            }
                        }
                    }
                }
            }else {
                // when empty is empty
                // share the last column
                double step = 1000 / max(k+1, 1);
                for(int l=0; l<=k; l++){
                    //cout << "aaa" << endl;/////////////////
                    rects[d][l][0] = 999;
                    rects[d][l][1] = l * step;
                    rects[d][l][2] = 1000;
                    rects[d][l][3] = (l+1) * step;
                }
                notfin = false;
            }
        }

    }


    for(int d=1; d<D; d++){
         
    }
    

    // output
    for(int d=0; d<D; d++){
        //cout << "d=" << d << endl;
        for(int k=0; k<N; k++){
            //cout << "k=" << k << ' ';
            for(int i=0; i<4; i++){
                cout << rects[d][k][i] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}