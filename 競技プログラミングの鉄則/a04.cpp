#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
    int n; cin>>n;
    string ans="";

    rep(i, 10){
        int s;
        s = (n/(1<<i)) % 2;
        ans += to_string(s);
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
}