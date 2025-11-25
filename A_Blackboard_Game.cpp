#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "Alice" << endl;
    }
    else
    {
        if (n % 4 == 0)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
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