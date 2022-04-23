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
const int N = 10004;

int m;




int a[N];

int suff[N];

bool vis[N];

int main() {
	fastIO();
	int n, m; cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	// ~i is equivalent to i != -1
	for (int i = n - 1; ~i; --i) {
		suff[i + 1] = suff[i + 2] + !vis[a[i]];
		vis[a[i]] = true;
	}
	while (m--) {
		int l; cin >> l;
		cout << suff[l] << '\n';
	}
	return 0;
}
