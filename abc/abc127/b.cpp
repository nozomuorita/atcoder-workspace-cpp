#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
    int r, d, x;
    cin>>r>>d>>x;

    rep(i, 10){
        x = r * x - d;
        cout<<x<<endl;
    }
}