#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll l,g,c;
    cin>>l>>g>>c;
    int mm=l+g+c;
    int m=min(l,min(g,c));
    int ma=max(l,max(g,c));
    if((ma-m)>=10){
        cout<<"check again";
    }else{
        cout<<"final "<<mm-m-ma;
    }
}