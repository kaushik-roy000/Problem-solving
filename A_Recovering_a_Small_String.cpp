#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    if(n<=27){
        string s="aa";
        n=n-2;
        char c='a'+n-1;
        s+=c;
        cout<<s<<endl;

 }else if(n<=53){
        string s="a";
        n=n-26-1;
     char c='a'+n-1;
        s+=c;
        s+='z';
     cout<<s<<endl;

    }else if(n<=78){
        n=n-52;
        char c='a'+n-1;
        string s="";
        s+=c;
        s+="zz";
        cout<<s<<endl;

    }
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}