#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll a,b;cin>>a>>b;
    if(b==0){
        cout<<a+1<<endl;
    }else if(a==0){
        cout<<1<<endl;
    }else{
        cout<<(a+(b*2))+1<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}