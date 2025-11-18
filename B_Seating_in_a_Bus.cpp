#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    //for(int i:v)cout<<i<<" ";
    //cout<<endl;
    int big=v[0];
    int sml=v[0];
    for(int i=1;i<n;i++){
        if((big+1)==v[i]){
            big=v[i];
        } else if((sml-1)==v[i]){
            sml=v[i];
        }else{
            cout<<"NO"<<endl;
            return;
        }

    }
    cout<<"YES"<<endl;

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}