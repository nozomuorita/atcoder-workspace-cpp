#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int h, w, q;
int x[1509][1509], x_cum[1509][1509];
int a, b, c, d;

int main(){
    cin>>h>>w;
    rep(i, h){
        rep(j, w){
            cin>>x[i][j];
        }
    }

    rep(i, h){
        rep(j, w){
            if(j==0) x_cum[i+1][j+1]=x[i][j];
            else{
                x_cum[i+1][j+1] = x_cum[i+1][j] + x[i][j];
            }
        }
    }
    rep(i, h){
        rep(j, w){
            if(i==0) continue;
            x_cum[i+1][j+1] += x_cum[i][j+1];
        }
    }

    cin>>q;
    rep(i, q){
        cin>>a>>b>>c>>d;
        int ans = x_cum[c][d] + x_cum[a-1][b-1] - x_cum[a-1][d] - x_cum[c][b-1];
        cout<<ans<<endl;
    }
}