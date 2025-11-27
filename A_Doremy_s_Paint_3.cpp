#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    map<ll,ll>m;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    if(m.size()>2){
        cout<<"No"<<endl;
    }else{
        ll f1=m.begin()->second;
        ll f2=m.rbegin()->second;
        if(f1==f2){
            cout<<"Yes"<<endl;
        }else if(n%2==1 &&(abs(f1-f2)==1)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}