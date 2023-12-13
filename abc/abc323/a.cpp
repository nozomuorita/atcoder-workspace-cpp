#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define yes cout << "Yes" << endl;
#define no  cout << "No"  << endl;

int main(){
    string s;
    cin >> s;
    string ans="Yes";

    for(int i=1; i<s.size(); i+=2){
        if(s.at(i)=='1'){
            ans="No";
            break;
        }
    }
    cout << ans << endl;
}