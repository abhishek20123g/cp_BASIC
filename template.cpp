#include <bits/stdc++.h>
#include "ext/pb_ds/tree_policy.hpp"
#include "ext/pb_ds/assoc_container.hpp"

using namespace __gnu_pbds;
using namespace std;

#define forn(i, n)             for(int i = 0; i < n; i ++)
#define forn1(i, n)            for(int i = 1; i <= n; i ++)
#define pb push_back
#define ll long long
#define fi first
#define se second
#define ii  pair<int, int>
#define vi  vector <int>
#define vii vector <pair <int, int > >
#define all(cont)  cont.begin(), cont.end()
#define EPS 1e-9
#define MOD 1000000007
#define range 200010
#define int long long
#define IO ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#pragma GCC optimize ("Ofast")

// debug_statment ...............................................................................
template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
string to_string(string s) {
  return '"' + s + '"';
}

string to_string(const char* s) {
  return to_string((string) s);
}

string to_string(bool b) {
  return (b ? "true" : "false");
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}
 
 
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}
 

#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
void debug1(int a[], int l, int r) {
	vector<int> temp(a + l, a + r + 1);
	debug(temp);

}


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand(int l, int r){
    uniform_int_distribution<int> uid(l, r);
    return uid(rng);
}
// end_debug_statment .......................................................................


signed main(){
    IO;
    freopen("input.txt", "r", stdin);


    cout << setprecision(10) << fixed;
    return 0;
}
