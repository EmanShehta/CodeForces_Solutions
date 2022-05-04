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
int main() {
	int t,len,cnt1,cnt3,flag1,flag2;
	Es();
	 cin>>t;
	    while(t--)
	    {
	    	string s;
	        cin>>s;
	        len = s.length();
	        cnt1 = 0;
	        cnt3 = 0;
	        flag1 = 0;
	        flag2 = 0;
	        for(int i=0;i<len;i++)
	        {
	            if(s[i] == ')' && flag2 !=0)
	            {
	                cnt1++;
	                flag2 --;
	            }
	            if(s[i]=='(' )
	                flag2 ++;
	            if(s[i] == ']' && flag1 != 0)
	            {
	                cnt3++;
	                flag1--;
	            }
	            if(s[i] == '[' )
	                flag1++;
	        }
	        cout<<cnt1+cnt3<<endl;

	}
}

