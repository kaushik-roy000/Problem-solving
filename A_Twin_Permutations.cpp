#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int m=*max_element(v.begin(),v.end());
    //cout<<m<<endl;
    for(int i=0;i<n;i++){
        cout<<m-v[i]+1<<" ";
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}