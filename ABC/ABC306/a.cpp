#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define yes cout << "Yes" << endl;
#define no  cout << "No"  << endl;

int main(){
    int n;
    string s;
    cin >> n >> s;

    string ans;
    for (int i=0; i<n; i++){
        ans += s.at(i);
        ans += s.at(i);
    }
    cout << ans << endl;
}