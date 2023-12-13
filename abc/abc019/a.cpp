#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	vector<int> vec(3);
	rep(i, 3) cin>>vec[i];
	sort(vec.begin(), vec.end());
	cout<<vec[1]<<endl;
}
