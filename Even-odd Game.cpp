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
#define pb push_back
#define pi 3.14159265
vector<int> v1, v2;
const int N = 100000;
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
void run() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	long ans = arr[n - 1] - arr[0];
	cout << ans << endl;
}
int main() {
    Es();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n, greater<int>());
        bool turn = 0;
        ll scr[2] = {};
        for (auto i : arr){
            if (turn == i % 2) scr[turn] += i;
            turn ^= 1;
        }
        if (scr[0] == scr[1]) cout << "Tie";
        else cout << (scr[0] > scr[1] ? "Alice" : "Bob");
        cout << endl;
    }
    return 0;
}
