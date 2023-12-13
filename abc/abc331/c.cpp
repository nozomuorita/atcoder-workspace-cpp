#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	int n; cin>>n;
	vector<int> a(n);
	rep(i, n) cin>>a[i];

	map<int, int> d;
	rep(i, n){
		if(d.find(a[i])!=d.end()) d[a[i]]++;
		else d[a[i]]=1;
	}
	
}
