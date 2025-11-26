#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n;cin>>n;
    if(n<10){
        cout<<n<<endl;
    }else{
        int i=0,x;
        while(n!=0){
            x=n%10;
            n=n/10;
            i++;
        }
        cout<<((i-1)*9)+x<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}