#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin>>a>>b;
    if(a > b) cout<<0;
    else cout<<abs(a-b)+1;
    return 0;
}