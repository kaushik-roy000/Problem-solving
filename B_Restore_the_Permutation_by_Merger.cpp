#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }
    set<int> s;

    for (int i = 0; i < 2 * n; i++)
    {
        if (s.find(arr[i]) == s.end())
        {
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}