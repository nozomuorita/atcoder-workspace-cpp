#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	string s; cin>>s;
	rep(i, s.size()){
		s[i] = toupper(s[i]);
	}
	cout<<s<<endl;
}
