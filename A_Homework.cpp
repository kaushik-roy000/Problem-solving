#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,m;
    string a,b,c;
    cin>>n>>a>>m>>b>>c;
    string ans;
    for(int i=0;i<c.size();i++){
        if(c[i]=='V'){
            a=b[i]+a;
        }else{
            a=a+b[i];
        }
    }
    cout<<a<<endl;
}
int main(){
    int t;cin>>t;
    while(t--)
    {solve();}
}