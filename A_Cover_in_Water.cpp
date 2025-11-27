#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int i=0;
    vector<int>v;
    for(char c:s){
        if(c=='.')
            i++;
        if(c=='#'){
            v.push_back(i);
            i=0;
        }
    }
    v.push_back(i);
    int mm=*max_element(v.begin(),v.end());
    
    int ans=0;
    for(int vv:v){
        ans+=vv;
    }
    if(mm>=3){
        cout<<2<<endl;
    }else{
        cout<<ans<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}