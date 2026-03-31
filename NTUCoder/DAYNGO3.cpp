#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (b); i >= (a); i--)
#define MAXN 100001
#define pii pair<int, int>
#define fi first
#define se second
#define pb push_back

using namespace std;
using ll = long long;
using ull = unsigned long long;
int r[MAXN] = {0}, n;
string s;

struct node{
    vector<int> v;
    vector<ll> sum;
};

node st[4 * MAXN];

void build(int l, int r, int id)
{
    if(l == r)
    {
        st[id].v.pb(::r[l]);
        st[id].sum.pb(::r[l]);
        return;
    }
    int mid = (l + r) >> 1;
    build(l, mid, id * 2);
    build(mid + 1, r, id * 2 + 1);
    st[id].v.resize(st[id * 2].v.size() + st[id * 2 + 1].v.size());
    merge(st[id * 2].v.begin(), st[id * 2].v.end(), st[id * 2 + 1].v.begin(), st[id * 2 + 1].v.end(), st[id].v.begin());
    ll tmp = 0;
    FOR(i, 0, st[id].v.size() - 1)
    {
        tmp += (st[id].v)[i];
        st[id].sum.pb(tmp);
    }
}

ll get(int l, int r, int id, int u, int v, int val)
{
    if(r < u || l > v) return 0;
    if (u <= l && r <= v) {
        int cnt = lower_bound(st[id].v.begin(), st[id].v.end(), val) - st[id].v.begin();
        ll sum_right = (cnt > 0) ? st[id].sum[cnt - 1] : 0;
        return (ll)val * cnt - sum_right;
    }
    int mid = (l + r) >> 1;
    return get(l, mid, id * 2, u, v, val) + get(mid + 1, r, id * 2 + 1, u, v, val);
}
void sol()
{
    cin >> n >> s;
    int m = 0, d = 0;
    s = "#" + s;
    n++;
    FOR(i, 0, n - 1)
    {
        if(s[i] == '(') m++;
        if(s[i] == ')') d++;
        r[i] = m - d;
    }
    build(0, n - 1, 1);
    ll res = 0;
    FOR(i, 0, n - 1)
    {
        res += get(0, n - 1, 1, 0, i, r[i]);
    }
    cout << res;
}

int main(void)
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sol();
}
