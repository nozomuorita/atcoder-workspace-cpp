#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    char op;
    cin>>a>>op>>b;
    if(op=='+')cout<<a+b<<endl;
    else if(op=='-')cout<<a-b<<endl;
    else if(op=='*')cout<<a*b<<endl;
    else if(b!=0 && op=='/')cout<<a/b<<endl;
    else cout<<"error"<<endl;
}