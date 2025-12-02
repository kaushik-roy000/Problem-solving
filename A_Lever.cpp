#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            x+=(a[i]-b[i]);
        }
        if(b[i]>a[i]){
            y+=(b[i]-a[i]);
        }
    }
    int ans=min(x,y);
    int ans1=max(x,y);
    if(ans==0){
        cout<<ans1+1<<endl;
    }else{
        cout<<ans+1<<endl;
    }
    
}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}