#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;

long long n, k;
long long a[100009];

long long check(long long sec){
    long long score=0;
    rep(i, n){
        score+=sec/a[i];
    }
    return score;
}

int main(){
    cin>>n>>k;
    rep(i, n) cin>>a[i];

    long long left=0, right=10e9;
    while(left<right){
        long long mid=(left+right)/2;
        long long s=check(mid);

        if(s>=k) right=mid;
        else left=mid+1;
    }
    cout<<left<<endl;
}