#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
    int n; cin>>n;
    rep(x, 22){
        rep(y, 22){
            rep(z, 22){
                if(x+y+z<=n) cout<<x<<" "<<y<<" "<<z<<endl;
            }
        }
    }
}