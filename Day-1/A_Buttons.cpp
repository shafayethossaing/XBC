#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin>>a>>b;
    if(a > b) cout<<(a*2)-1;
    else if( b > a ) cout<<(b*2)-1;
    else cout<<a+b;

    return 0;
}