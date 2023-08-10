#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define yes cout << "Yes" << endl;
#define no  cout << "No"  << endl;

int main(){
    int n;
    string s, t;
    cin >> n >> s >> t;
    bool ans=true;

    for (int i=0; i<n; i++){
        if (s.at(i) == t.at(i)){
            continue;
        }
        else if ((s.at(i)=='1')&&(t.at(i)=='l') || (s.at(i)=='l')&&(t.at(i)=='1')){
            continue;
        }
        else if ((s.at(i)=='0')&&(t.at(i)=='o') || (s.at(i)=='o')&&(t.at(i)=='0')){
            continue;
        }
        else ans = false;
    }

    if (ans){
        yes;
    }
    else{
        no;
    }
}