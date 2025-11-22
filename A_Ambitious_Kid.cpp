#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<0){
            v[i]=-1*v[i];
        }
    }
    int ans=*min_element(v.begin(),v.end());
    cout<<ans<<endl;
}
int main(){
    solve();
}