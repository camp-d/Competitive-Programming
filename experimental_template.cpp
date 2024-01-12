#ifdef DEBUG
#define _GLIBCXX_DEBUG
#else
#pragma GCC target("avx2")
#pragma GCC optimize("Ofast,unroll-loops")
#endif
#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define ALL(a) a.begin(), a.end()
#undef long
#define long long long
#define ll long
using namespace std;
using mint = atcoder::modint998244353;
ostream &operator<<(ostream &os, mint a)
{
	return os << a.val();
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> &a)
{
	const int n = a.size();
	rep(i, n) os << a[i] << " \n"[i + 1 == n];
	return os;
}
template <typename T, size_t n>
ostream &operator<<(ostream &os, array<T, n> &a)
{
	rep(i, n) os << a[i] << " \n"[i + 1 == n];
	return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &a)
{
	for (T &i : a)
		is >> i;
	return is;
}
template <typename T>
bool chmin(T &x, T y)
{
	if (x > y)
	{
		x = y;
		return true;
	}
	return false;
}
template <typename T>
bool chmax(T &x, T y)
{
	if (x < y)
	{
		x = y;
		return true;
	}
	return false;
}
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	cin >> a;
	vector<int> a1(n), a2(n);
	rep(i, n) a1[i] = a2[i] = a[i];
	for (int i = 1; i < n; i++)
	{
		chmax(a1[i], a1[i - 1]);
		chmax(a2[n - i - 1], a2[n - i]);
	}
	rep(i, n)
	{
		int ans = 0;
		if (i != 0)
			chmax(ans, a1[i - 1]);
		if (i != n - 1)
			chmax(ans, a2[i + 1]);
		cout << ans << '\n';
	}
}
int main()
{
	// srand((unsigned)time(NULL));
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(40);
	solve();
	return 0;
}
