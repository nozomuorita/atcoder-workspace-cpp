#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, sum=0, s;
    cin>>n>>x;

    for(int i=0; i<n; i++){
        cin >> s;
        if(s<=x){
            sum+=s;
        }
    }
    cout <<sum<< endl;
}