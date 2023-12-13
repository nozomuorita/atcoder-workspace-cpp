#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	int n, s, k; cin>>n>>s>>k;
	int p, q=0;
	int ans=0;
	rep(i, n){
		cin>>p>>q;
		ans += p*q;
	}
	if(ans<s) ans+=k;
	cout<<ans<<endl;
}
