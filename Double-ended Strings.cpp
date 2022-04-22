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

bool vis[2 * N];

int bfs(int u) {
	queue<int> q;
	q.push(u);
	vis[u] = true;
	int level = 0;
	while (q.size()) {
		int sz = q.size();
		while (sz--) {
			int node = q.front();
			q.pop();
			if (node == m) {
				return level;
			}
			if (node < m && !vis[2 * node]) {
				vis[2 * node] = true;
				q.push(2 * node);
			}
			if (1 < node && !vis[node - 1]) {
				vis[node - 1] = true;
				q.push(node - 1);
			}
		}
		++level;
	}
}
int main() {
	  int t;
	    cin>>t;
	    while(t--){

	        int n;
	        cin>>n;
	        int a[n];
	        for(int i=0;i<n;i++){
	            cin>>a[i];

	        }
	        sort(a, a+n);
	        int res = 0;
	        for(int i=0;i<n-2;i++){
	            if(a[i]==a[i+1] && a[i+1] == a[i+2]){
	                cout<<a[i]<<endl;
	                res = 1;
	                break;
	            }
	        }

	        if(res==0){
	            cout<<"-1"<<endl;
	        }
	    }
	}
