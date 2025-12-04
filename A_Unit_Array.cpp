#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll pos = 0, neg = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    ll minneg=(n/2);
    if(minneg%2!=0){
        minneg=minneg-1;
    }
    if(minneg<neg){
        cout<<neg-minneg<<endl;
    }else{
        if(neg%2==0){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }
  
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}