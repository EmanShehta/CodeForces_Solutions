//UNTILL IT'S MYTURN ,I WILL KEEP CLAPPING FOR OTHERS.
#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define ES ios_base::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define files freopen("input.txt","r",stdin);
#define rn return
#define ll long long
#define fr(i,n)   for (ll i=0;i<n;i++)
#define asort(a)            sort(a,a+n)
#define endl '\n'
#define pfs(s) printf("%s",s)
#define vll vector<ll>
#define eb  emplace_back
#define pb push_back
#define all(p)                p.begin(),p.end()
#define pi 3.14159265
vector<int> v1, v2;
#define sf(n) scanf("%d", &n)
#define pf(n) printf("%d",n)
inline void Es() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
}
bool compare(const pair<int, int> &a, const pair<int, int> &b) {
	return a.second > b.second;
}
int MOD = 1e9 + 7;
double avg(double sum, int n) {
	return sum / n;
}
int fibonacci(int n) {
	if (n == 0 || n == 1)
		return n;
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}
int mod(string num, ll a) {
	int res = 0;
	for (int i = 0; i < num.length(); i++)
		res = (res * 10 + (int) num[i] - '0') % a;

	return res;
}
void fastIO() {
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
}
const int N = 1e5 + 5;

int aarr[N];
ll p[N];

int main() {
	fastIO();
	int n, q; cin >> n >> q;
	for (int i = 0; i < n; ++i) {
		cin >> aarr[i];
	}
	while (q--) {
		int l, r; cin >> l >> r;   // +1 +1 +1 +1 -1 -1- 1 -1
		++p[l - 1]; --p[r];
	}
	for (int i = 1; i < n; ++i) {           //prefixsum
		p[i] += p[i - 1];
	}
	sort(aarr, aarr + n, greater<int>());
	sort(p, p + n, greater<ll>());
	ll ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += p[i] * aarr[i];
	}
	cout << ans << endl;
	return 0;
}
