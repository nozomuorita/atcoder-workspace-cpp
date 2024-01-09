#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
    int n, k; cin>>n>>k;
    int ans=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int x=k-i-j;
            if(1<=x && x<=n) ans++;
        }
    }
    cout<<ans<<endl;
}