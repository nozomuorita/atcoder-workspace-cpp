#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
    int n, m;
    cin>>n>>m;
    int left=0, right=1e5+10;
    rep(i, m){
        int l, r;
        cin>>l>>r;
        left = max(l, left);
        right = min(r, right);
    }
    cout<<max(right-left+1, 0)<<endl;
}