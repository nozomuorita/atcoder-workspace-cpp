#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	int s, e, ans=0;
	rep(i, 3){
		cin>>s>>e;
		ans += s*e;
	}
	cout<<int(ans/10)<<endl;
}
