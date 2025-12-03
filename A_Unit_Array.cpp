#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        (x>0)?pos++:neg++;

    }
    if(neg==n){
        cout<<n<<endl;
    }else if(n==pos){
        cout<<0<<endl;
    }else{
        cout<<abs(pos-neg)<<endl;
    }
}
int main(){
    int t;cin>>t; //unsolved
    while(t--)
        solve();
}