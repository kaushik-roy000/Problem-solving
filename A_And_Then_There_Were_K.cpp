#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n;cin>>n;
   
    ll x=0;
    int i=0;
    ll ans=0;
    while(x<=n-1){
        ans=x;
        x=pow(2,i)-1;
        i++;
    }
    
    cout<<ans<<endl;
    
}
int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
}