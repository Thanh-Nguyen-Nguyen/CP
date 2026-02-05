#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (b); i >= (a); i--)
using namespace std;
using ll = long long;
using ull = unsigned long long;
void sol(void)
{
    int ntest; cin >> ntest;
    ll l, r;
    while(ntest--)
    {
        cin >> l >> r;
        cout << (ll)sqrtl(r) - (ll)sqrtl(l - 1) << "\n";
    }
}
int main(char* argv, int argc)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sol();
}
