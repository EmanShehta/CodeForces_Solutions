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
const int N = 10e9;
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
const int N1 = 1e2 + 5;
vector<pair<int, int>> adj[N1];
int visited[N1][N1], q;
bool ans;
void dfs(int u, int v, int color) {
	visited[u][color] = q;
	if (u == v) {
		ans = 1;
		return;
	}
	for (auto &child : adj[u]) {
		int ch = child.first, clr = child.second;
		if (clr == color && visited[ch][clr] != q) {
			dfs(ch, v, clr);
		}
	}
}
int BinaryToDecimal(int n ) {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
       return decimalNumber ;
}
int decimalToBinary(int N)
{

    // To store the binary number
    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;

        // Count used to store exponent value
        cnt++;
    }

    return B_Number;
}
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int maxSubArraySum1(int *a, int size) {
	 int max_ending_here = 0;
	    int max_so_far = 0;
	    int _start = 0;
	    int start = 0;
	    int end = -1;

	    for(int i=0; i<size; i++) {
	        max_ending_here = max_ending_here + a[i];
	        if (max_ending_here < 0) {
	            max_ending_here = 0;
	            start = i+1;
	        }

	        if (max_ending_here > max_so_far) {
	            max_so_far = max_ending_here;
	            end = i;
	        }
	    }
	    cout<< start <<"...."<< end<<endl;
	    return max_so_far;

}


int main() {
    Es();
    int t;
    	cin >> t;
    	while (t--){
    		int n;
    		cin >> n;
    		//int arr[n];
    		priority_queue<pair<int, int>> pq;
    		for (int i = 0; i < n; i++){
    			int x;
    			cin >> x;
    			if (x)
    			pq.emplace(x, i + 1);
    		}
    		vector<pair<int, int>> ans;
    		while (pq.size() > 1){
    			auto f = pq.top();
    			pq.pop();
    			auto s = pq.top();
    			pq.pop();
    			ans.emplace_back(f.second, s.second);
    			f.first--, s.first--;
    			if (f.first) pq.emplace(f);
    			if (s.first) pq.emplace(s);
    		}
    		cout << ans.size() << endl;
    		for (auto &i : ans) cout << i.first << ' ' << i.second << endl;

    	}
    	return 0;
    }

