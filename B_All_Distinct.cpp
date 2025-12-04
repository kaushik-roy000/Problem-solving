#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    map<int ,int>m;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        m[temp]++;
    }
    vector<int>fre;
    for(auto x:m){
        fre.push_back(x.second);
    }
    sort(fre.begin(),fre.end());
    int ans=0;
    for(int i=1;i<fre.size();i++){
        fre[i]=fre[i]-fre[i-1]+1;
        ans++;
    }
    if(fre[fre.size()-1]&1){
        ans++;
    }
    cout<<ans<<endl;

}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}