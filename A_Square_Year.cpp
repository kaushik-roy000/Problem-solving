#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    string s;cin>>s;
    int year=stoi(s);
    if(year==0){
        cout<<0<<" "<<0<<endl;
    }else{
        int sy = sqrt(year);
        // cout<<year<<" :";
        int sq = sy * sy;
        // cout<<sq<<" :";
        if (year == sq)
        {
            cout << sy - 1 << " " << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}