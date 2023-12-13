#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> a(7*n);
	rep(i, 7*n) cin>>a[i];

	int score=0;
	rep(i, 7*n){
		score += a[i];
		if((i+1)%7==0){
			cout<<score<<" ";
			score = 0;
		}
	}
	cout<<endl;
}
