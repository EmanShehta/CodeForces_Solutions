//UNTILL IT'S MYTURN ,I WILL KEEP CLAPPING FOR OTHERS.
#include <bits/stdc++.h>
#include<stdio.h>
#include<cstdio>
using namespace std;
#define pi pair< int,int>
typedef long long ll;
typedef unsigned long long ull;
#define rn return 0;
#define rep(i,a, b) for(ll i=a;i<b;++i)
#define ll long long int
#define con continue;
#define ld long double
#define forn(i,n)   for (ll i=0;i<n;i++)
#define fr1(i,n)   for (ll i=1;i<n;i++)
#define fr2(i,n)   for (int i = n - 2; i >= 0; i--)
#define asort(arr) sort(arr,arr+n)
#define endll cout << "\n";
#define vpi vector <pair< int , int >>
#define re1 return 1;
#define vii vector<int>
#define vll vector<ll>
#define cinv(v,n) for(ll i=0;i<n;++i){cin>>v[i];}
#define eb  emplace_back
#define vi vector<int>
#define pb push_back
#define all(p)  p.begin(),p.end()
const int N = 2e3 + 5;
inline void Es() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
}
void fastIO() {
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
}
string sumDigits(string s) {
	ll sm = 0;
	for (int i = 0; i < s.size(); ++i) {
		sm += s[i] - '0';
	}
	return to_string(sm);
}
void gen(vll &vt, ll value, int four, int seven) {
	if (value >= 10e9) {
		return;
	}
	if (four == seven) {
		vt.push_back(value);
	}
	gen(vt, value * 10LL + 4, four + 1, seven);
	gen(vt, value * 10LL + 7, four, seven + 1);
}
int n, b;
int corresponding_decimal(int n)
{
    int decimal = 0;


    for(int i = 31; i >= 0; i--)
    {
        decimal = decimal*10 + ( (n & (1 << i) ) != 0) ;
    }
    return decimal;
}

int main() {
	Es();
	fastIO();
	cin >> n;
	corresponding_decimal(n);

}
