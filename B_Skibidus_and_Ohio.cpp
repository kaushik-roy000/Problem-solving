#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;cin>>s;
    int ans=s.size();
    for(int i=1;i<ans;i++){
        if(s[i-1]==s[i]){
            cout<<1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}