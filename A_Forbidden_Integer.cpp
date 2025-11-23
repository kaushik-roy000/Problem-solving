#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,k,x;cin>>n>>k>>x;
    int count=0;
    if(x!=1){
        cout<<"YES\n";
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }else{
        //x=1
        if(k==1){
            cout<<"NO\n";
        }
        else if(k==2){
            if(n%2==0){
                cout<<"YES\n";
                cout<<n/2<<endl;
                for(int i=1;i<=(n/2);i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }else{
                cout<<"NO\n";
            }
        }else{
            if(n%2==0){
                cout << "YES\n";
                cout << n / 2 << endl;
                for (int i = 1; i <= (n / 2); i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }else{
                cout<<"YES\n";
                cout<<(n-3)/2+1<<endl;
                cout<<3<<" ";
                for(int i=1;i<=(n-3)/2;i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}