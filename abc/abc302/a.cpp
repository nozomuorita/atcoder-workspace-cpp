#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;

int main(){
	long long a, b; cin>>a>>b;
	long long ans=a/b;
	if(a%b!=0) ans++;
	cout<<ans<<endl;
}
