#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	int n, m; cin>>n>>m;
	string s; cin>>s;
	int ans=0, muji=m, logo=0;
	rep(i, s.size()){
		if(s[i]=='0'){logo=ans; muji=m;}
		else if(s[i]=='1'){
			if(muji>0) muji--;
			else{
				if(logo>0) logo--;
				else ans++;
			}
		}
		else{
			if(logo>0) logo--;
			else ans++;
		}
	}
	cout<<ans<<endl;
}
