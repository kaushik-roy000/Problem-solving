#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    string s,t;cin>>s;
    cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}