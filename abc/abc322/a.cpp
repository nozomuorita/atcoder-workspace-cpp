#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	string s; cin>>s;

	int ans=-1;
	for(int i=0; i<n-2; i++){
		if(s.substr(i, 3)=="ABC"){ans=i+1; break;}
	}

	cout<<ans<<endl;
}
