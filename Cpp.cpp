#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(v) (v).begin(), (v).end()

template <typename T>
T multiply(T a, T b, T mod)
{
    ll ans = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            ans = (ans + a) % mod;
        a = 2 * a % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
