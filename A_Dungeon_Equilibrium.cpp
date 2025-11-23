#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++) cin>>v1[i];
    vector<int>v(101,0);
    for(int i=0;i<n;i++){
        v[v1[i]]++;
    }
    int ans=0;
    for(int i=0;i<=100;i++){
        if(v[i]!=i &&v[i]!=0){
            if(v[i]>i){
                ans+=(v[i]-i);
            }else{
                ans+=v[i];
            }
        }else{

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