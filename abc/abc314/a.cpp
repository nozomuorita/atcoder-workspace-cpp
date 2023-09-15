#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define yes cout << "Yes" << endl;
#define no  cout << "No"  << endl;

int main(){
    int n;
    cin >> n;

    string pi;
    pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    cout << pi.substr(0, n+2) << endl;
}