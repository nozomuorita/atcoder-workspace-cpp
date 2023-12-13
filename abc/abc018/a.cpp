#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	int a, b, c; cin>>a>>b>>c;
	vector<int> ans(3, 3);
	if(a>b) ans[0]--;
	else ans[1]--;
	if(b>c) ans[1]--;
	else ans[2]--;
	if(c>a) ans[2]--;
	else ans[0]--;
	rep(i, 3){
		cout<<ans[i]<<endl;
	}
}
