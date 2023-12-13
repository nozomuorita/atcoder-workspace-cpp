#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	int a, b; cin>>a>>b;
	int ans=0;
	rep(i, 2){
		if(a>=b){ans+=a; a-=1;}
		else{ans+=b; b-=1;}
	}
	cout<<ans<<endl;
}
