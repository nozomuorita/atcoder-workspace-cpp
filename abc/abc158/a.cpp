#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define yes cout << "Yes" << endl;
#define no  cout << "No"  << endl;

int main(){
    string s;
    cin >> s;
    char a = 'A';
    char b = 'B';

    int num_a, num_b;
    num_a = count(s.begin(), s.end(), a);
    num_b = count(s.begin(), s.end(), b);
    if ((num_a==3) || (num_b==3)){
       no;
    }else{
        yes;
    }
}