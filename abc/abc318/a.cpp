#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, p; cin>>n>>m>>p;
	int ans=0;
	
	if(n>=m){
		ans++;
		ans += (n-m)/p;
	}
	cout<<ans<<endl;
}
