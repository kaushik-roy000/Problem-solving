#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();

    // Count Q's before and after each position
    vector<int> prefixQ(n, 0), suffixQ(n, 0);

    for (int i = 0; i < n; i++)
    {
        prefixQ[i] = (i > 0 ? prefixQ[i - 1] : 0) + (s[i] == 'Q');
    }
    for (int i = n - 1; i >= 0; i--)
    {
        suffixQ[i] = (i < n - 1 ? suffixQ[i + 1] : 0) + (s[i] == 'Q');
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            ans += 1LL * prefixQ[i] * suffixQ[i];
        }
    }
    cout << ans << endl;
}   